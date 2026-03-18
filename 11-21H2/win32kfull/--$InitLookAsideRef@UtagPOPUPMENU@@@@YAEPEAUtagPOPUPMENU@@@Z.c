/*
 * XREFs of ??$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z @ 0x1C021AEC4
 * Callers:
 *     MNAllocPopup @ 0x1C021BAC0 (MNAllocPopup.c)
 * Callees:
 *     <none>
 */

char __fastcall InitLookAsideRef<tagPOPUPMENU>(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax

  if ( !gpStackRefLookAside )
    KeBugCheck(4u);
  v3 = (_QWORD *)Win32AllocateFromPagedLookasideList(gpStackRefLookAside, a2);
  *(_QWORD *)(a1 + 88) = v3;
  if ( v3 )
  {
    *v3 = a1;
    *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 88) + 12LL) = 0;
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
