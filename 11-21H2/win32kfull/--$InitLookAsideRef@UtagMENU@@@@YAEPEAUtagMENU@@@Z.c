/*
 * XREFs of ??$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z @ 0x1C00F5BAC
 * Callers:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00F5AF4 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InitLookAsideRef<tagMENU>(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax

  if ( !gpStackRefLookAside )
    KeBugCheck(4u);
  v3 = (_QWORD *)Win32AllocateFromPagedLookasideList(gpStackRefLookAside, a2);
  *(_QWORD *)(a1 + 152) = v3;
  if ( v3 )
  {
    *v3 = a1;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 152) + 12LL) = 0;
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
