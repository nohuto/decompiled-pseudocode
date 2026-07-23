/*
 * XREFs of sub_1409CC028 @ 0x1409CC028
 * Callers:
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 * Callees:
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     SeQueryServerSiloToken @ 0x1406C1480 (SeQueryServerSiloToken.c)
 *     sub_1409C61B0 @ 0x1409C61B0 (sub_1409C61B0.c)
 *     sub_1409CC4D4 @ 0x1409CC4D4 (sub_1409CC4D4.c)
 */

__int64 __fastcall sub_1409CC028(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v5; // rbx
  int ServerSiloToken; // esi
  PVOID v7; // rbp
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  PVOID v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  v2 = *(_QWORD **)(a1 + 16);
  v9 = 0LL;
  v10 = 0LL;
  v5 = v2[3];
  v11 = v5;
  ServerSiloToken = SeQueryServerSiloToken((__int64)v2, (__int64)&v9);
  if ( ServerSiloToken >= 0 && PsIsHostSilo(v9) && (_DWORD)v5 == 999 && !HIDWORD(v11) )
  {
    ServerSiloToken = sub_1409C61B0((int)v2, *(_DWORD *)(a1 + 4), a2, &v10);
    if ( ServerSiloToken >= 0 )
    {
      v7 = v10;
      if ( dword_140D05010 )
      {
        sub_1405C5EC8((__int64)v10 - 48, 0, 1u, 0x746C6644u);
        sub_1405C5EC8((__int64)v7 - 48, 1, 1u, 0x63436553u);
      }
      *(_QWORD *)(a1 + 16) = v7;
      *(_BYTE *)(a1 + 24) = 0;
      ObfDereferenceObjectWithTag(v2, 0x63436553u);
      sub_1409CC4D4(v7, a1 + 28);
    }
  }
  return (unsigned int)ServerSiloToken;
}
