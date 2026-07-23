/*
 * XREFs of RtlQueryInformationActivationContext @ 0x180033520
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x180033284 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007E350 (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueryInformationActiveActivationContext @ 0x180083290 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020B00 (RtlpxLookupFunctionTable.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x18002A48C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002BFFC (LdrpFindLoadedDllByHandle.c)
 *     RtlpGetActivationContextData @ 0x180033B5C (RtlpGetActivationContextData.c)
 *     RtlAddRefActivationContext @ 0x180033C00 (RtlAddRefActivationContext.c)
 *     LdrpDropLastInProgressCount @ 0x180052174 (LdrpDropLastInProgressCount.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     RtlpQueryRunLevel @ 0x18007B0A8 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007B198 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18008D2F4 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800EB568 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800EB7F8 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800EBA84 (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

NTSTATUS __cdecl RtlQueryInformationActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PACTIVATION_CONTEXT_QUERY_INDEX SubInstanceIndex,
        ACTIVATION_CONTEXT_INFO_CLASS ActivationContextInformationClass,
        PVOID ActivationContextInformation,
        SIZE_T ActivationContextInformationLength,
        PSIZE_T ReturnLength)
{
  PACTIVATION_CONTEXT v8; // rsi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v11; // edx
  NTSTATUS ActivationContextData; // ebx
  __int64 v13; // r10
  bool v14; // sf
  int InformationActivationContextDetailedInformation; // eax
  int LoadedDllByHandle; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v21; // [rsp+30h] [rbp-88h]
  PVOID BaseAddress; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v23[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v24; // [rsp+48h] [rbp-70h] BYREF
  __int128 v25; // [rsp+50h] [rbp-68h] BYREF
  __int64 v26; // [rsp+60h] [rbp-58h]
  __int128 v27; // [rsp+68h] [rbp-50h] BYREF
  __int128 v28; // [rsp+78h] [rbp-40h]
  PACTIVATION_CONTEXT v29; // [rsp+C8h] [rbp+10h]

  v29 = ActivationContext;
  v8 = ActivationContext;
  v27 = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  BaseAddress = 0LL;
  DWORD2(v28) = 4;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (Flags & 0x3FFFFFF8) != 0 )
    goto LABEL_62;
  if ( (Flags & 0x80000000) != 0
    && (((ActivationContextInformationClass - 1) & 0xFFFFFFFA) != 0
     || ActivationContextInformationClass == ActivationContextDetailedInformation) )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags,
      ActivationContextInformationClass);
LABEL_52:
    ActivationContextData = -1073741585;
    goto LABEL_96;
  }
  if ( (unsigned int)(ActivationContextInformationClass - 1) > 6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      ActivationContextInformationClass);
    ActivationContextData = -1073741583;
    goto LABEL_96;
  }
  if ( ActivationContextInformationLength )
  {
    if ( !ActivationContextInformation )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      ActivationContextData = -1073741582;
      goto LABEL_96;
    }
  }
  else if ( !ReturnLength )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    ActivationContextData = -1073741580;
    goto LABEL_96;
  }
  if ( (Flags & 7) == 0 )
    goto LABEL_13;
  if ( (Flags & 7) == 1 )
  {
    if ( !ActivationContext )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        v8 = ActivationContextStackPointer->ActiveFrame->ActivationContext;
      else
        v8 = ActivationContext;
      goto LABEL_13;
    }
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      ActivationContext);
LABEL_68:
    ActivationContextData = -1073741584;
    goto LABEL_96;
  }
  if ( (Flags & 7) != 2 )
  {
    if ( (Flags & 7) == 4 )
    {
      if ( !ActivationContext )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_68;
      }
      if ( (unsigned __int64)ActivationContext < *((_QWORD *)&xmmword_18019C530 + 1)
        || (unsigned __int64)ActivationContext >= *((_QWORD *)&xmmword_18019C530 + 1)
                                                + (unsigned __int64)(unsigned int)qword_18019C540 )
      {
        RtlpxLookupFunctionTable(ActivationContext, (__int64 *)&v25);
      }
      else
      {
        v25 = xmmword_18019C530;
        v26 = qword_18019C540;
      }
      if ( !*((_QWORD *)&v25 + 1) )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          v8);
        ActivationContextData = -1073741515;
        goto LABEL_96;
      }
      v8 = (PACTIVATION_CONTEXT)*((_QWORD *)&v25 + 1);
      v29 = (PACTIVATION_CONTEXT)*((_QWORD *)&v25 + 1);
      goto LABEL_36;
    }
LABEL_62:
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags);
    goto LABEL_52;
  }
LABEL_36:
  if ( !v8 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_68;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)v8, (__int64 *)&BaseAddress, v23);
  ActivationContextData = LoadedDllByHandle;
  v21 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v23[0] < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0);
      v18 = *((_QWORD *)BaseAddress + 19);
      v19 = v21;
      if ( *(_DWORD *)(v18 + 56) != 9 )
        v19 = -1073741515;
      ActivationContextData = v19;
      LdrpDropLastInProgressCount(v18, v17);
    }
    v8 = v29;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() - Caller passed invalid hmodule (%p)\n", "RtlQueryInformationActivationContext", v8);
    goto LABEL_96;
  }
  v8 = (PACTIVATION_CONTEXT)*((_QWORD *)BaseAddress + 17);
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            v8,
                            (unsigned __int64)&v27 & -(__int64)((Flags & 0x40000000) != 0),
                            &v24);
  if ( ActivationContextData < 0 )
    goto LABEL_96;
  v13 = v24;
  ActivationContextData = 0;
  if ( !v24
    && (ActivationContextInformationClass == ActivationContextDetailedInformation
     || ActivationContextInformationClass == AssemblyDetailedInformationInActivationContext
     || ActivationContextInformationClass == FileInformationInAssemblyOfAssemblyInActivationContext
     || ActivationContextInformationClass == RunlevelInformationInActivationContext
     || (unsigned int)(ActivationContextInformationClass - 6) < 2) )
  {
    goto LABEL_52;
  }
  switch ( ActivationContextInformationClass )
  {
    case ActivationContextBasicInformation:
      v23[1] = (Flags & 0x80000000) != 0;
      if ( ReturnLength )
        *ReturnLength = 0LL;
      if ( ActivationContextInformationLength < 0x10 )
      {
        if ( ReturnLength )
          *ReturnLength = 16LL;
        ActivationContextData = -1073741789;
      }
      else
      {
        if ( v13 )
          *((_DWORD *)ActivationContextInformation + 2) = *(_DWORD *)(v13 + 28);
        else
          *((_DWORD *)ActivationContextInformation + 2) = 0;
        if ( (Flags & 0x80000000) == 0 )
          RtlAddRefActivationContext(v8);
        *(_QWORD *)ActivationContextInformation = v8;
        if ( ReturnLength )
          *ReturnLength = 16LL;
      }
      v14 = ActivationContextData < 0;
LABEL_26:
      if ( v14 )
        break;
      goto LABEL_27;
    case ActivationContextDetailedInformation:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                          v24,
                                                          v11,
                                                          (_DWORD)ActivationContextInformation,
                                                          ActivationContextInformationLength,
                                                          (__int64)ReturnLength);
      goto LABEL_34;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextDetailedInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                            v24,
                                                            SubInstanceIndex->ulAssemblyIndex,
                                                            (_DWORD)ActivationContextInformation,
                                                            ActivationContextInformationLength,
                                                            (__int64)ReturnLength);
        goto LABEL_34;
      }
LABEL_92:
      ActivationContextData = -1073741811;
      break;
    case FileInformationInAssemblyOfAssemblyInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextDetailedInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                            v24,
                                                            (_DWORD)SubInstanceIndex,
                                                            (_DWORD)ActivationContextInformation,
                                                            ActivationContextInformationLength,
                                                            (__int64)ReturnLength);
        goto LABEL_34;
      }
      goto LABEL_92;
    case RunlevelInformationInActivationContext:
      if ( ActivationContextInformationLength >= 0xC )
      {
        *(_QWORD *)ActivationContextInformation = 0LL;
        *((_DWORD *)ActivationContextInformation + 2) = 0;
        ActivationContextData = RtlpQueryRunLevel(
                                  (unsigned int)(ActivationContextInformationClass - 5),
                                  v13,
                                  ActivationContextInformation);
        if ( ActivationContextData < 0 )
          break;
        if ( ReturnLength )
          *ReturnLength = 12LL;
LABEL_27:
        ActivationContextData = 0;
        break;
      }
      ActivationContextData = -1073741789;
      if ( ReturnLength )
        *ReturnLength = 12LL;
      break;
    case CompatibilityInformationInActivationContext:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                          v24,
                                                          ActivationContextInformation,
                                                          ActivationContextInformationLength,
                                                          ReturnLength);
LABEL_34:
      ActivationContextData = InformationActivationContextDetailedInformation;
      v14 = InformationActivationContextDetailedInformation < 0;
      goto LABEL_26;
    case ActivationContextManifestResourceName:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                          v24,
                                                          ActivationContextInformation,
                                                          ActivationContextInformationLength,
                                                          ReturnLength);
      goto LABEL_34;
    default:
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        ActivationContextInformationClass);
      ActivationContextData = -1073741595;
      break;
  }
LABEL_96:
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  return ActivationContextData;
}
