/*
 * XREFs of sub_140800338 @ 0x140800338
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 *     sub_14080051C @ 0x14080051C (sub_14080051C.c)
 *     MmUnlockPreChargedPagedPool @ 0x140800560 (MmUnlockPreChargedPagedPool.c)
 *     sub_1408005A0 @ 0x1408005A0 (sub_1408005A0.c)
 *     sub_140800968 @ 0x140800968 (sub_140800968.c)
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 *     sub_1409320D0 @ 0x1409320D0 (sub_1409320D0.c)
 *     sub_140A4E360 @ 0x140A4E360 (sub_140A4E360.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_UNKNOWN **sub_140800338()
{
  _UNKNOWN **result; // rax
  ULONG_PTR v1; // rbx
  __int64 v2; // rdx
  void *v3; // rcx
  __int64 v4; // rdi
  _QWORD **v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v1 = qword_140C22800;
  v13 = 0LL;
  if ( qword_140C22800 )
  {
    if ( (int)sub_1408125C4(0LL, 2LL, &v13) >= 0 )
    {
      sub_140800968(v13);
      sub_1408124A0(v13);
    }
    v3 = *(void **)(v1 + 240);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(v1 + 240) = 0LL;
    }
    while ( 1 )
    {
      v4 = *(_QWORD *)(v1 + 128);
      if ( !v4 )
        break;
      *(_QWORD *)(v1 + 128) = *(_QWORD *)v4;
      *(_QWORD *)(v1 + 136) -= (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
      if ( (*(_BYTE *)(v4 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
      MmFreePagesFromMdl((PMDL)v4);
      ExFreePoolWithTag((PVOID)v4, 0);
    }
    *(_QWORD *)(v1 + 232) = 0LL;
    v5 = (_QWORD **)(v1 + 64);
    *(_QWORD *)(v1 + 224) = 0LL;
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v6, 0);
      --*(_DWORD *)(v1 + 80);
    }
    v9 = *(_QWORD *)(v1 + 168);
    if ( v9 && qword_140C54DC0 && qword_140C54DF0 )
      sub_14042A5E0(v9, v2);
    if ( *(_QWORD *)(v1 + 136) )
    {
      sub_1405C6658(v1, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v1, 0LL);
    }
    if ( *(_DWORD *)(v1 + 188) == 1073742484 )
      sub_1408005A0();
    *(_BYTE *)(v1 + 28) = 0;
    MmUnlockPreChargedPagedPool(qword_140C22C10, qword_140C22C18);
    v10 = *(void **)(v1 + 288);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x72626968u);
    v11 = *(_QWORD *)(v1 + 304);
    if ( v11 )
      sub_14080051C(v11, (unsigned int)(*(_DWORD *)(v1 + 256) << 16));
    if ( byte_140C23680 )
    {
      sub_140A4E360();
      byte_140C23680 = 0;
    }
    if ( *(_BYTE *)(v1 + 452) )
      sub_1409320D0();
    if ( (dword_140D0688C & 2) != 0 && qword_140C48980 )
    {
      ExFreePoolWithTag(qword_140C48980, 0x204C5648u);
      qword_140C48980 = 0LL;
      dword_140C48988 = 0;
    }
    result = (_UNKNOWN **)memset((void *)v1, 0, 0x1C8uLL);
    qword_140C22800 = 0LL;
  }
  return result;
}
