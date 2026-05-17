/*
 * XREFs of RtlQueryInformationActivationContext @ 0x18001BC10
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18001B960 (TppCleanupGroupMemberInitialize.c)
 *     SbpRetrieveCompatibilityManifest @ 0x180052574 (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueueWorkItem @ 0x180070160 (RtlQueueWorkItem.c)
 *     RtlQueryInformationActiveActivationContext @ 0x180087D20 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     RtlpGetActivationContextData @ 0x18001C1AC (RtlpGetActivationContextData.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18001C23C (RtlpQueryInformationActivationContextBasicInformation.c)
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 *     RtlpQueryRunLevel @ 0x18007F1D0 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007F2C4 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007F524 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800EAD88 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800EB018 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800EB2A0 (RtlpQueryInformationActivationContextManifestResourceName.c)
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
  struct _ACTIVATION_CONTEXT *ActivationContext; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v11; // edx
  int ActivationContextData; // ebx
  int v13; // r9d
  __int64 v14; // r10
  int v15; // ecx
  int InformationActivationContextBasicInformation; // eax
  int LoadedDllByHandle; // eax
  int v18; // eax
  int v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h] BYREF
  int v22; // [rsp+50h] [rbp-78h] BYREF
  int v23; // [rsp+54h] [rbp-74h]
  __int64 v24; // [rsp+58h] [rbp-70h] BYREF
  __int128 v25; // [rsp+60h] [rbp-68h] BYREF
  __int64 v26; // [rsp+70h] [rbp-58h]
  __int128 v27; // [rsp+78h] [rbp-50h] BYREF
  __int128 v28; // [rsp+88h] [rbp-40h]
  struct _ACTIVATION_CONTEXT *v29; // [rsp+D8h] [rbp+10h]

  v29 = a2;
  ActivationContext = a2;
  v27 = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  DWORD2(v28) = 4;
  if ( a7 )
    *a7 = 0LL;
  if ( (a1 & 0x3FFFFFF8) != 0 )
    goto LABEL_55;
  if ( a1 < 0 && (((a4 - 1) & 0xFFFFFFFA) != 0 || a4 == 2) )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1,
      a4);
LABEL_44:
    ActivationContextData = -1073741585;
    goto LABEL_80;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a4);
    ActivationContextData = -1073741583;
    goto LABEL_80;
  }
  if ( a6 )
  {
    if ( !a5 )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      ActivationContextData = -1073741582;
      goto LABEL_80;
    }
  }
  else if ( !a7 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    ActivationContextData = -1073741580;
    goto LABEL_80;
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
      51,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      a2);
LABEL_61:
    ActivationContextData = -1073741584;
    goto LABEL_80;
  }
  if ( (a1 & 7) != 2 )
  {
    if ( (a1 & 7) == 4 )
    {
      if ( !a2 )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_61;
      }
      if ( (unsigned __int64)a2 < *((_QWORD *)&xmmword_18018F510 + 1)
        || (unsigned __int64)a2 >= *((_QWORD *)&xmmword_18018F510 + 1) + (unsigned __int64)(unsigned int)qword_18018F520 )
      {
        RtlpxLookupFunctionTable(a2, &v25);
      }
      else
      {
        v25 = xmmword_18018F510;
        v26 = qword_18018F520;
      }
      if ( !*((_QWORD *)&v25 + 1) )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          ActivationContext);
        ActivationContextData = -1073741515;
        goto LABEL_80;
      }
      ActivationContext = (struct _ACTIVATION_CONTEXT *)*((_QWORD *)&v25 + 1);
      v29 = (struct _ACTIVATION_CONTEXT *)*((_QWORD *)&v25 + 1);
      goto LABEL_28;
    }
LABEL_55:
    DbgPrintEx(51, 0, "SXS: %s() - Caller passed invalid flags (0x%08lx)\n", "RtlQueryInformationActivationContext", a1);
    goto LABEL_44;
  }
LABEL_28:
  if ( !ActivationContext )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_61;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(ActivationContext, &v21, &v22);
  ActivationContextData = LoadedDllByHandle;
  v20 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v22 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0LL);
      v18 = v20;
      if ( *(_DWORD *)(*(_QWORD *)(v21 + 152) + 56LL) != 9 )
        v18 = -1073741515;
      ActivationContextData = v18;
      LdrpDropLastInProgressCount();
    }
    ActivationContext = v29;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - Caller passed invalid hmodule (%p)\n",
      "RtlQueryInformationActivationContext",
      ActivationContext);
    goto LABEL_80;
  }
  ActivationContext = *(struct _ACTIVATION_CONTEXT **)(v21 + 136);
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            ActivationContext,
                            (unsigned __int64)&v27 & -(__int64)((a1 & 0x40000000) != 0),
                            &v24);
  if ( ActivationContextData < 0 )
    goto LABEL_80;
  v14 = v24;
  if ( !v24 && (unsigned int)(a4 - 2) <= 5 )
    goto LABEL_44;
  v15 = a4 - 1;
  switch ( a4 )
  {
    case 1:
      v23 &= v15;
      if ( a1 < 0 )
        v15 = a4;
      v23 = v15;
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v15,
                                                       (_DWORD)ActivationContext,
                                                       v24,
                                                       v13,
                                                       a5,
                                                       a6,
                                                       (__int64)a7);
LABEL_19:
      ActivationContextData = InformationActivationContextBasicInformation;
      if ( InformationActivationContextBasicInformation < 0 )
        break;
      goto LABEL_20;
    case 2:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                       v24,
                                                       v11,
                                                       a5,
                                                       a6,
                                                       (__int64)a7);
      goto LABEL_19;
    case 3:
      if ( a3 )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         v24,
                                                         *a3,
                                                         a5,
                                                         a6,
                                                         (__int64)a7);
        goto LABEL_19;
      }
      goto LABEL_77;
    case 4:
      if ( a3 )
      {
        InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                         v24,
                                                         (_DWORD)a3,
                                                         a5,
                                                         a6,
                                                         (__int64)a7);
        goto LABEL_19;
      }
LABEL_77:
      ActivationContextData = -1073741811;
      break;
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
LABEL_20:
        ActivationContextData = 0;
        break;
      }
      ActivationContextData = -1073741789;
      if ( a7 )
        *a7 = 12LL;
      break;
    case 6:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                       v24,
                                                       a5,
                                                       a6,
                                                       a7);
      goto LABEL_19;
    case 7:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       v24,
                                                       a5,
                                                       a6,
                                                       a7);
      goto LABEL_19;
    default:
      DbgPrintEx(
        51,
        0,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        a4);
      ActivationContextData = -1073741595;
      break;
  }
LABEL_80:
  if ( v21 )
    LdrpDereferenceModule();
  return (unsigned int)ActivationContextData;
}
