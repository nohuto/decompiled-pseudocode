/*
 * XREFs of sub_140B30860 @ 0x140B30860
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     sub_1402E0A04 @ 0x1402E0A04 (sub_1402E0A04.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     sub_1403C5C64 @ 0x1403C5C64 (sub_1403C5C64.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlStringFromGUID @ 0x140745490 (RtlStringFromGUID.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B54490 @ 0x140B54490 (sub_140B54490.c)
 *     sub_140B54AE4 @ 0x140B54AE4 (sub_140B54AE4.c)
 */

__int64 __fastcall sub_140B30860(__int64 a1)
{
  const char *v2; // rcx
  int v3; // ebx
  char *v4; // rax
  _QWORD *v6; // rcx
  _QWORD *i; // rax
  __int64 v8; // r10
  ULONG_PTR v9; // rdi
  char v10; // r15
  _WORD *v11; // r12
  int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // rax
  ULONG_PTR v15; // r13
  wchar_t *Pool2; // rax
  wchar_t *v17; // r14
  __int64 v18; // rdi
  unsigned int v19; // edi
  _DWORD *v20; // r15
  __int64 v21; // rcx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-A9h] BYREF
  __int128 v23; // [rsp+40h] [rbp-99h] BYREF
  __int128 v24; // [rsp+50h] [rbp-89h]
  _BYTE v25[208]; // [rsp+60h] [rbp-79h] BYREF
  char v26; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v27; // [rsp+148h] [rbp+6Fh] BYREF
  void *Src; // [rsp+150h] [rbp+77h] BYREF
  __int64 v29; // [rsp+158h] [rbp+7Fh] BYREF

  v23 = 0LL;
  v24 = 0LL;
  memset(v25, 0, 0x8CuLL);
  v2 = *(const char **)(a1 + 184);
  GuidString = 0LL;
  v26 = 0;
  v3 = 0;
  Src = 0LL;
  v29 = 0LL;
  v27 = 0;
  v4 = strstr(v2, "vdisk(");
  if ( !v4 || !strstr(v4 + 1, "partition(") )
    return (unsigned int)v3;
  v6 = *(_QWORD **)(a1 + 232);
  for ( i = (_QWORD *)*v6; ; i = (_QWORD *)*i )
  {
    if ( i == v6 )
      return (unsigned int)v3;
    v8 = i[7];
    if ( v8 )
      break;
  }
  if ( !i )
    return (unsigned int)v3;
  v3 = sub_140B54490(v8, v25, &v29, &v26, &Src);
  if ( v3 < 0 )
  {
    v9 = 1LL;
    goto LABEL_36;
  }
  v10 = v26;
  v11 = Src;
  if ( v26 )
  {
    v12 = 110;
  }
  else
  {
    *(_QWORD *)&v24 = Src;
    *(_QWORD *)&v23 = v25;
    *((_QWORD *)&v23 + 1) = v29;
    v9 = 2LL;
    *((_QWORD *)&v24 + 1) = &v27;
    v3 = sub_1403C5C64(a1, 2, (__int64)&sub_140B54800, (__int64)&v23);
    if ( v3 < 0 )
      goto LABEL_36;
    v12 = 74;
  }
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( v11[v14] );
  v15 = (unsigned int)(v12 + 2 * v14);
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, v15, 0x42646856u);
  v17 = Pool2;
  if ( !Pool2 )
    goto LABEL_23;
  if ( v10 )
  {
    if ( RtlStringFromGUID(&Guid, &GuidString) >= 0 )
    {
      v3 = sub_1402E1280(v17, 0x6EuLL, L"\\\\Device\\Ramdisk%wZ", &GuidString);
      RtlFreeUnicodeString(&GuidString);
      goto LABEL_26;
    }
LABEL_23:
    v9 = 3LL;
LABEL_35:
    v3 = -1073741801;
    goto LABEL_36;
  }
  v3 = sub_1402E1280(Pool2, 0x4AuLL, L"\\\\Device\\HarddiskVolume%lu", v27);
LABEL_26:
  if ( v3 < 0 )
  {
    v9 = 4LL;
    goto LABEL_36;
  }
  v18 = -1LL;
  do
    ++v18;
  while ( v17[v18] );
  sub_1402E0A04(v17, v15, (__int64)v11);
  v3 = sub_140B54AE4(v17);
  if ( v3 < 0 )
  {
    v9 = 5LL;
LABEL_36:
    KeBugCheckEx(0x12Fu, v9, v3, 0LL, 0LL);
  }
  qword_140D04D90 = (__int64)v17;
  v19 = v18 - 1;
  do
    ++v13;
  while ( v11[v13] );
  v20 = (_DWORD *)ExAllocatePool2(64LL, 2 * ((unsigned int)v13 + v19) + 14, 0x42646856u);
  if ( !v20 )
  {
    v9 = 7LL;
    goto LABEL_35;
  }
  memmove(v20 + 2, v17 + 1, 2LL * v19);
  v21 = 2 * v19 + 10;
  v20[1] = v21;
  memmove((char *)v20 + v21, v11, 2LL * (unsigned int)(v13 + 1));
  off_140C07278 = v20;
  *(_BYTE *)v20 = 1;
  LODWORD(dword_140C0CA00) = 2 * (v13 + v19) + 14;
  return (unsigned int)v3;
}
