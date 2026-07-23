/*
 * XREFs of sub_140855120 @ 0x140855120
 * Callers:
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 *     sub_140855238 @ 0x140855238 (sub_140855238.c)
 *     sub_1409DE380 @ 0x1409DE380 (sub_1409DE380.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140855120(ULONG_PTR a1)
{
  __int64 v2; // rdx
  void **v3; // rsi
  void ***v4; // rbx
  void **v5; // rax
  int v6; // ecx
  int v8; // ecx
  REGHANDLE v9; // rbp

  sub_140784160(a1);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = (void **)(v2 + 24);
  if ( !v2 )
    v3 = (void **)(a1 + 136);
  while ( 1 )
  {
    v4 = (void ***)*v3;
    if ( *v3 == v3 )
      break;
    if ( v4[1] != v3 || (v5 = *v4, (*v4)[1] != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    KeReleaseMutex(&Object, 0);
    v6 = *((_DWORD *)v4 + 4);
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          sub_1409DE380(v4, a1);
      }
      else
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        v9 = *(_QWORD *)(a1 + 104);
        *(_QWORD *)(a1 + 104) = 0LL;
        KeReleaseMutex(&Object, 0);
        if ( v9 )
          EtwUnregister(v9);
      }
    }
    else
    {
      sub_140855238(a1, v4);
    }
    sub_1407838E0((__int64 *)&off_140C037C0, a1);
    ExFreePoolWithTag(v4, 0x70696D57u);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  *(_QWORD *)(a1 + 128) = 0LL;
  KeReleaseMutex(&Object, 0);
  return sub_1407838E0((__int64 *)&off_140C037C0, a1);
}
