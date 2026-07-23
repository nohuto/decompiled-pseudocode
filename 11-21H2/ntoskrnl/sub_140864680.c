/*
 * XREFs of sub_140864680 @ 0x140864680
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405D997C @ 0x1405D997C (sub_1405D997C.c)
 *     sub_1405D9B84 @ 0x1405D9B84 (sub_1405D9B84.c)
 *     sub_1405DA68C @ 0x1405DA68C (sub_1405DA68C.c)
 *     sub_1405DA9A8 @ 0x1405DA9A8 (sub_1405DA9A8.c)
 *     sub_1405DB010 @ 0x1405DB010 (sub_1405DB010.c)
 *     sub_1405DB7EC @ 0x1405DB7EC (sub_1405DB7EC.c)
 *     sub_14069DF5C @ 0x14069DF5C (sub_14069DF5C.c)
 *     sub_14069DFF4 @ 0x14069DFF4 (sub_14069DFF4.c)
 *     sub_140849D6C @ 0x140849D6C (sub_140849D6C.c)
 *     sub_140855034 @ 0x140855034 (sub_140855034.c)
 *     sub_140997A1C @ 0x140997A1C (sub_140997A1C.c)
 *     sub_14099A514 @ 0x14099A514 (sub_14099A514.c)
 *     sub_14099A6CC @ 0x14099A6CC (sub_14099A6CC.c)
 *     sub_14099A7A4 @ 0x14099A7A4 (sub_14099A7A4.c)
 *     sub_14099AA08 @ 0x14099AA08 (sub_14099AA08.c)
 *     sub_14099AB34 @ 0x14099AB34 (sub_14099AB34.c)
 *     sub_14099AD7C @ 0x14099AD7C (sub_14099AD7C.c)
 *     sub_14099AE0C @ 0x14099AE0C (sub_14099AE0C.c)
 *     sub_14099B030 @ 0x14099B030 (sub_14099B030.c)
 *     sub_14099B3D8 @ 0x14099B3D8 (sub_14099B3D8.c)
 *     sub_14099B674 @ 0x14099B674 (sub_14099B674.c)
 */

void __fastcall sub_140864680(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  __int64 v5; // rax
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int k; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  unsigned __int16 *v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  __int16 v32; // [rsp+30h] [rbp-10h]
  int v33; // [rsp+32h] [rbp-Eh]
  __int16 v34; // [rsp+36h] [rbp-Ah]
  unsigned int v35; // [rsp+78h] [rbp+38h] BYREF

  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    v33 = 0;
    v34 = 0;
    v35 = 0;
    sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
    v31 = qword_140D06E48[0];
    v32 = 0;
    v30 = (unsigned __int16 *)dword_140D06E40;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v35, &v30) )
    {
      v5 = sub_140348800(v35);
      sub_14099B030(v5);
    }
    for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
    {
      if ( ControlCode == 2 )
      {
        sub_14099B3D8(i);
        sub_14069DF5C(i, 1);
      }
      for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
      {
        v8 = *(_QWORD *)(i + 312) + 136LL * j;
        if ( *(_DWORD *)(v8 + 16) == 1 )
          sub_14099B674(*(_QWORD *)v8);
      }
    }
    if ( ControlCode == 2 )
    {
      sub_1405DB010();
      sub_14099A514(v10, v9, v11);
      sub_14069DFF4(1);
      sub_140849D6C(1);
      if ( byte_140D068E2 || byte_140D068E3 )
      {
        sub_1405D997C(1);
        sub_1405D9B84();
      }
    }
    for ( k = 0; k < dword_140C1CF34; ++k )
      sub_14099AA08(qword_140C1CF38 + 336LL * k);
    sub_1402D66A8((ULONG_PTR)&qword_140C23010);
    sub_14099AD7C(v14, v13, v15);
    sub_140855034(1);
    if ( byte_140C5AE30 && EtwEventEnabled(qword_140C1F580, &stru_140037C28) )
      sub_140997A1C(v17, v16, v18);
    sub_1402935D0((ULONG_PTR)&qword_140C23010);
    sub_140224C00(&qword_140C22FE0);
    if ( ControlCode == 2 )
    {
      sub_14099A6CC(v20, v19, v21);
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23010, 0LL);
      sub_14099A7A4(v24, v23, v25);
      sub_14099AB34(v27, v26, v28);
      sub_1405DB7EC();
      sub_1405DA68C();
      v31 = qword_140D06E48[0];
      v32 = 0;
      v30 = (unsigned __int16 *)dword_140D06E40;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v35, &v30) )
      {
        v29 = sub_140348800(v35);
        sub_1405DA9A8(v29);
        sub_14099AE0C(v29);
      }
      sub_140293A88((__int64)dword_140D06E40, (__int64)sub_1405DB370, 0LL, 0LL);
      sub_1402935D0((ULONG_PTR)&qword_140C23010);
    }
  }
}
