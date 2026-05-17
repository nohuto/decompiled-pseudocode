/*
 * XREFs of RtlQueryInformationActivationContext @ 0x180033680
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x1800333E4 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueueWorkItem @ 0x18004CB70 (RtlQueueWorkItem.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007DCE0 (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueryInformationActiveActivationContext @ 0x180082C20 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020CE0 (RtlpxLookupFunctionTable.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002C1CC (LdrpFindLoadedDllByHandle.c)
 *     RtlpGetActivationContextData @ 0x180033CBC (RtlpGetActivationContextData.c)
 *     RtlAddRefActivationContext @ 0x180033D60 (RtlAddRefActivationContext.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     RtlpQueryRunLevel @ 0x18007AA38 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007AB28 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18008CAF4 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800EA238 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800EA4C8 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800EA754 (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

__int64 __fastcall RtlQueryInformationActivationContext(
        int a1,
        struct _ACTIVATION_CONTEXT *a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  struct _ACTIVATION_CONTEXT *ActivationContext; // rsi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v11; // edx
  int ActivationContextData; // ebx
  __int64 v13; // r8
  __int64 v14; // r10
  bool v15; // sf
  int InformationActivationContextDetailedInformation; // eax
  int LoadedDllByHandle; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  int v22; // [rsp+30h] [rbp-88h]
  __int64 v23; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v24[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+48h] [rbp-70h] BYREF
  __int128 v26; // [rsp+50h] [rbp-68h] BYREF
  __int64 v27; // [rsp+60h] [rbp-58h]
  __int128 v28; // [rsp+68h] [rbp-50h] BYREF
  __int128 v29; // [rsp+78h] [rbp-40h]
  struct _ACTIVATION_CONTEXT *v30; // [rsp+C8h] [rbp+10h]

  v30 = a2;
  ActivationContext = a2;
  v28 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  DWORD2(v29) = 4;
  if ( a7 )
    *a7 = 0LL;
  if ( (a1 & 0x3FFFFFF8) != 0 )
    goto LABEL_62;
  if ( a1 < 0 && (((a4 - 1) & 0xFFFFFFFA) != 0 || a4 == 2) )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1,
      a4);
LABEL_52:
    ActivationContextData = -1073741585;
    goto LABEL_96;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a4);
    ActivationContextData = -1073741583;
    goto LABEL_96;
  }
  if ( a6 )
  {
    if ( !a5 )
    {
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      ActivationContextData = -1073741582;
      goto LABEL_96;
    }
  }
  else if ( !a7 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    ActivationContextData = -1073741580;
    goto LABEL_96;
  }
  if ( (a1 & 7) == 0 )
    goto LABEL_13;
  if ( (a1 & 7) == 1 )
  {
    if ( !a2 )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        ActivationContext = ActivationContextStackPointer->ActiveFrame->ActivationContext;
      else
        ActivationContext = a2;
      goto LABEL_13;
    }
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      a2);
LABEL_68:
    ActivationContextData = -1073741584;
    goto LABEL_96;
  }
  if ( (a1 & 7) != 2 )
  {
    if ( (a1 & 7) == 4 )
    {
      if ( !a2 )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_68;
      }
      if ( (unsigned __int64)a2 < *((_QWORD *)&xmmword_180199520 + 1)
        || (unsigned __int64)a2 >= *((_QWORD *)&xmmword_180199520 + 1) + (unsigned __int64)(unsigned int)qword_180199530 )
      {
        RtlpxLookupFunctionTable((unsigned __int64)a2, (__int64 *)&v26);
      }
      else
      {
        v26 = xmmword_180199520;
        v27 = qword_180199530;
      }
      if ( !*((_QWORD *)&v26 + 1) )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          ActivationContext);
        ActivationContextData = -1073741515;
        goto LABEL_96;
      }
      ActivationContext = (struct _ACTIVATION_CONTEXT *)*((_QWORD *)&v26 + 1);
      v30 = (struct _ACTIVATION_CONTEXT *)*((_QWORD *)&v26 + 1);
      goto LABEL_36;
    }
LABEL_62:
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1);
    goto LABEL_52;
  }
LABEL_36:
  if ( !ActivationContext )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_68;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)ActivationContext, &v23, v24);
  ActivationContextData = LoadedDllByHandle;
  v22 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v24[0] < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0);
      v19 = *(_QWORD *)(v23 + 152);
      v20 = v22;
      if ( *(_DWORD *)(v19 + 56) != 9 )
        v20 = -1073741515;
      ActivationContextData = v20;
      LdrpDropLastInProgressCount(v19, v18);
    }
    ActivationContext = v30;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed invalid hmodule (%p)\n",
      "RtlQueryInformationActivationContext",
      ActivationContext);
    goto LABEL_96;
  }
  ActivationContext = *(struct _ACTIVATION_CONTEXT **)(v23 + 136);
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            ActivationContext,
                            (unsigned __int64)&v28 & -(__int64)((a1 & 0x40000000) != 0),
                            &v25);
  if ( ActivationContextData < 0 )
    goto LABEL_96;
  v14 = v25;
  ActivationContextData = 0;
  if ( !v25 && (a4 == 2 || a4 == 3 || a4 == 4 || a4 == 5 || (unsigned int)(a4 - 6) < 2) )
    goto LABEL_52;
  switch ( a4 )
  {
    case 1:
      v24[1] = a1 < 0;
      if ( a7 )
        *a7 = 0LL;
      if ( a6 < 0x10 )
      {
        if ( a7 )
          *a7 = 16LL;
        ActivationContextData = -1073741789;
      }
      else
      {
        if ( v14 )
          *(_DWORD *)(a5 + 8) = *(_DWORD *)(v14 + 28);
        else
          *(_DWORD *)(a5 + 8) = 0;
        if ( a1 >= 0 )
          RtlAddRefActivationContext(ActivationContext, 1LL, v13);
        *(_QWORD *)a5 = ActivationContext;
        if ( a7 )
          *a7 = 16LL;
      }
      v15 = ActivationContextData < 0;
LABEL_26:
      if ( v15 )
        break;
      goto LABEL_27;
    case 2:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                          v25,
                                                          v11,
                                                          a5,
                                                          a6,
                                                          (__int64)a7);
      goto LABEL_34;
    case 3:
      if ( a3 )
      {
        InformationActivationContextDetailedInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                            v25,
                                                            *a3,
                                                            a5,
                                                            a6,
                                                            (__int64)a7);
        goto LABEL_34;
      }
LABEL_92:
      ActivationContextData = -1073741811;
      break;
    case 4:
      if ( a3 )
      {
        InformationActivationContextDetailedInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                            v25,
                                                            (_DWORD)a3,
                                                            a5,
                                                            a6,
                                                            (__int64)a7);
        goto LABEL_34;
      }
      goto LABEL_92;
    case 5:
      if ( a6 >= 0xC )
      {
        *(_QWORD *)a5 = 0LL;
        *(_DWORD *)(a5 + 8) = 0;
        ActivationContextData = RtlpQueryRunLevel((unsigned int)(a4 - 5), v14, a5);
        if ( ActivationContextData < 0 )
          break;
        if ( a7 )
          *a7 = 12LL;
LABEL_27:
        ActivationContextData = 0;
        break;
      }
      ActivationContextData = -1073741789;
      if ( a7 )
        *a7 = 12LL;
      break;
    case 6:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                          v25,
                                                          a5,
                                                          a6,
                                                          a7);
LABEL_34:
      ActivationContextData = InformationActivationContextDetailedInformation;
      v15 = InformationActivationContextDetailedInformation < 0;
      goto LABEL_26;
    case 7:
      InformationActivationContextDetailedInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                          v25,
                                                          a5,
                                                          a6,
                                                          a7);
      goto LABEL_34;
    default:
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        a4);
      ActivationContextData = -1073741595;
      break;
  }
LABEL_96:
  if ( v23 )
    LdrpDereferenceModule(v23);
  return (unsigned int)ActivationContextData;
}
