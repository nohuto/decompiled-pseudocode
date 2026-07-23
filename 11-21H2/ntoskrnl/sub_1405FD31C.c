/*
 * XREFs of sub_1405FD31C @ 0x1405FD31C
 * Callers:
 *     sub_1405F8610 @ 0x1405F8610 (sub_1405F8610.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F464 @ 0x14035F464 (sub_14035F464.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_1405FB934 @ 0x1405FB934 (sub_1405FB934.c)
 */

__int64 __fastcall sub_1405FD31C(unsigned __int64 a1, int a2, int a3, int a4, __int64 a5, unsigned __int64 a6)
{
  int v6; // esi
  unsigned __int64 v7; // rdi
  int v8; // r14d
  int v13; // edi
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  void (__stdcall *v16)(PVOID, PIO_STATUS_BLOCK, ULONG); // r8
  struct _EX_RUNDOWN_REF *v17; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+44h] [rbp-44h]
  int v22; // [rsp+48h] [rbp-40h]
  int v23; // [rsp+4Ch] [rbp-3Ch]
  __int64 v24; // [rsp+50h] [rbp-38h]

  v6 = 0;
  v7 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = 0;
  if ( (a6 & 1) == 0 )
    v7 = a6;
  if ( (*(_DWORD *)(v7 + 28) & 4) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 6021) & 1) != 0 )
      return (unsigned int)-1073741058;
  }
  else
  {
    if ( !sub_14035F464((__int64)&unk_140D31A00, *(_DWORD *)(a1 + 6016)) )
      return (unsigned int)-1073741058;
    v6 = 1;
  }
  if ( (a6 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6104));
    v8 = 1;
  }
  v24 = 0LL;
  v14 = *(_DWORD *)a1;
  v23 = *(_DWORD *)(a1 + 6208);
  v19[1] = a5;
  v22 = a2;
  v21 = a3;
  v20 = a4;
  v24 = a6 & 1;
  if ( (v14 & 0x2000) != 0 )
  {
    v15 = v7 + 32;
    v7 = a1;
    v19[0] = v15;
    v16 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))sub_1405FD250;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = a1;
    v19[0] = v7 + 48;
    v16 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))sub_1405FD170;
    *(_DWORD *)(v7 + 32) = a4;
    v14 = *(_DWORD *)a1;
  }
  v13 = sub_1405FB934(a1 + 6216, (unsigned int *)v19, v16, (void *)v7, (v14 >> 13) & 1);
  if ( v13 < 0 )
  {
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 6104));
    if ( v6 )
    {
      v17 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8((__int64)&unk_140D31A00, *(_DWORD *)(a1 + 6016) & 0x3FF);
      sub_1402AD030(v17 + 1);
    }
  }
  return (unsigned int)v13;
}
