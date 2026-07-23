/*
 * XREFs of sub_14095E13C @ 0x14095E13C
 * Callers:
 *     sub_14094F96C @ 0x14094F96C (sub_14094F96C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     sub_140837F88 @ 0x140837F88 (sub_140837F88.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14095E13C(__int64 a1, PCWSTR *a2, unsigned int a3, HANDLE *a4, _BYTE *a5)
{
  __int64 v6; // r14
  __int64 Pool2; // rax
  UNICODE_STRING *v8; // r15
  unsigned int v9; // ebx
  __int16 v10; // bp
  UNICODE_STRING *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r12
  UNICODE_STRING *v14; // rdi
  __int64 v15; // r12
  UNICODE_STRING *v16; // rbx
  UNICODE_STRING v17; // xmm0
  UNICODE_STRING *v18; // rcx
  __int64 v19; // rdx
  int v20; // esi
  int Length; // eax
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int16 *v25; // rdi
  _WORD *v26; // r13
  _WORD *v27; // r12
  const void **v28; // r13
  __int64 v29; // r15
  size_t v30; // rbx
  UNICODE_STRING *v32; // [rsp+30h] [rbp-38h]

  v6 = a3;
  Pool2 = ExAllocatePool2(64LL, 16 * a3, 863006288LL);
  v32 = (UNICODE_STRING *)Pool2;
  v8 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    v10 = 1;
    if ( (_DWORD)v6 )
    {
      v11 = (UNICODE_STRING *)Pool2;
      v12 = v6;
      v13 = v6;
      do
      {
        RtlInitUnicodeString(v11++, *a2++);
        --v13;
      }
      while ( v13 );
      do
      {
        if ( (_DWORD)v6 != 1 )
        {
          v14 = v8;
          v15 = (unsigned int)(v6 - 1);
          v16 = v8 + 1;
          do
          {
            if ( RtlCompareUnicodeString(v16 - 1, v16, 0) > 0 )
            {
              v17 = *v16;
              *v16 = *v14;
              *v14 = v17;
            }
            ++v16;
            ++v14;
            --v15;
          }
          while ( v15 );
        }
        --v12;
      }
      while ( v12 );
      v18 = v8;
      v19 = v6;
      v20 = 0;
      do
      {
        Length = v18->Length;
        ++v18;
        v20 += Length;
        --v19;
      }
      while ( v19 );
    }
    else
    {
      v20 = 0;
    }
    v22 = v20 + 2;
    v23 = ExAllocatePool2(64LL, v22 + 6LL, 863006288LL);
    v25 = (unsigned __int16 *)v23;
    if ( v23 )
    {
      v26 = (_WORD *)(v23 + 4);
      v27 = (_WORD *)(v23 + 4);
      if ( (_DWORD)v6 )
      {
        v28 = (const void **)v8;
        v29 = v6;
        do
        {
          v30 = *(unsigned __int16 *)v28;
          memmove(v27, v28[1], v30);
          v27 = (_WORD *)((char *)v27 + v30);
          v28 += 2;
          --v29;
        }
        while ( v29 );
        v8 = v32;
        v26 = v25 + 2;
      }
      *v27 = 0;
      v25[1] = v22;
      if ( (unsigned int)v6 > 1 || *v26 )
        v10 = 2;
      *v25 = v10;
      v9 = sub_140837F88(v25, (__int64)sub_1407F5020, v24, a4, a5);
    }
    else
    {
      v9 = -1073741670;
    }
    ExFreePoolWithTag(v8, 0x33706E50u);
    if ( v25 )
      ExFreePoolWithTag(v25, 0x33706E50u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
