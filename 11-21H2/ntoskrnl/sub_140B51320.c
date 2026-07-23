/*
 * XREFs of sub_140B51320 @ 0x140B51320
 * Callers:
 *     sub_140B0610C @ 0x140B0610C (sub_140B0610C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B510A8 @ 0x140B510A8 (sub_140B510A8.c)
 *     sub_140B51140 @ 0x140B51140 (sub_140B51140.c)
 *     sub_140B51500 @ 0x140B51500 (sub_140B51500.c)
 */

void sub_140B51320()
{
  unsigned __int16 v0; // bx
  __int64 v1; // r8
  _BYTE *v2; // rdx
  _QWORD *Pool2; // rax
  void *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char v9; // zf
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int16 v12; // ax
  _DWORD v13[32]; // [rsp+30h] [rbp-D8h] BYREF
  _WORD v14[32]; // [rsp+B0h] [rbp-58h] BYREF

  v0 = 0;
  if ( word_140C2B0F0 )
  {
    v1 = (unsigned __int16)word_140C2B0F0;
    v2 = (_BYTE *)(qword_140C2B0F8 + 5);
    do
    {
      if ( (*(_BYTE *)(qword_140D31700[*(unsigned __int16 *)(v2 - 3)] + 10) & 4) != 0 )
      {
        *v2 |= 4u;
        v0 += (unsigned __int8)*(v2 - 1);
      }
      v2 += 24;
      --v1;
    }
    while ( v1 );
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 8LL * (unsigned __int16)word_140C2B0F0, 0x4347504Bu);
  v4 = Pool2;
  if ( !Pool2 )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  if ( word_140C2B0F0 )
  {
    v5 = qword_140C2B0F8;
    v6 = (unsigned __int16)word_140C2B0F0;
    do
    {
      *Pool2 = v5;
      v5 += 24LL;
      ++Pool2;
      --v6;
    }
    while ( v6 );
  }
  qsort(v4, (unsigned __int16)word_140C2B0F0, 8uLL, (int (__cdecl *)(const void *, const void *))sub_140AF3390);
  if ( v0 )
  {
    if ( byte_140D06993 )
    {
      LOWORD(v8) = word_140C2B0F0;
    }
    else
    {
      v7 = (dword_140D0503C + (unsigned int)v0 - 1) % dword_140D0503C;
      v8 = (dword_140D0503C + (unsigned int)v0 - 1) / dword_140D0503C;
    }
    v9 = (_WORD)v8 == 32;
    if ( (unsigned __int16)v8 <= 0x20u )
      goto LABEL_19;
    LOWORD(v8) = 32;
  }
  else
  {
    LOWORD(v8) = 1;
  }
  v9 = (_WORD)v8 == 32;
  do
  {
LABEL_19:
    if ( sub_140B51140((__int64 *)v4, v7, v8, v9, v13, v14) )
      break;
    LOWORD(v8) = v8 + 1;
    v9 = (_WORD)v8 == 32;
  }
  while ( (unsigned __int16)v8 <= 0x20u );
  sub_140B51500(v4, v7, v13, v14);
  v12 = sub_140B510A8((__int64 *)v4, v10, v11, (__int64)v13);
  if ( (unsigned __int16)v8 > v12 )
    v12 = v8;
  word_140D05018 = v12;
  ExFreePoolWithTag(v4, 0);
}
