/*
 * XREFs of sub_1408303C0 @ 0x1408303C0
 * Callers:
 *     sub_14083008C @ 0x14083008C (sub_14083008C.c)
 * Callees:
 *     sub_1403C5DE0 @ 0x1403C5DE0 (sub_1403C5DE0.c)
 *     sub_1403C5F68 @ 0x1403C5F68 (sub_1403C5F68.c)
 *     sub_1403C624C @ 0x1403C624C (sub_1403C624C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407F4A10 @ 0x1407F4A10 (sub_1407F4A10.c)
 *     sub_140830768 @ 0x140830768 (sub_140830768.c)
 *     sub_140830B1C @ 0x140830B1C (sub_140830B1C.c)
 *     sub_140830CF4 @ 0x140830CF4 (sub_140830CF4.c)
 *     sub_14085EE64 @ 0x14085EE64 (sub_14085EE64.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 *     sub_140A36858 @ 0x140A36858 (sub_140A36858.c)
 *     sub_140A36A94 @ 0x140A36A94 (sub_140A36A94.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408303C0(__int64 a1)
{
  int v2; // r15d
  wchar_t *v3; // r12
  __int16 v4; // di
  int v5; // esi
  unsigned __int16 v6; // r14
  unsigned int v7; // r13d
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdi
  __int16 v21; // r11
  unsigned int v22; // r8d
  int v23; // edi
  __int64 v24; // rsi
  __int64 v25; // r8
  wchar_t *v26; // rax
  __int64 v27; // r8
  bool v28; // sf
  __int16 v29; // ax
  unsigned int v30; // r8d
  __int64 v31; // r9
  __int16 v32; // cx
  _WORD v33[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v34; // [rsp+2Ch] [rbp-DCh] BYREF
  wchar_t *v35; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING String; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v37; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v38[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v39[176]; // [rsp+78h] [rbp-90h] BYREF

  v33[0] = 0;
  v2 = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  v3 = 0LL;
  v35 = 0LL;
  v4 = -1;
  v34 = -1;
  v5 = -1;
  memset(v38, 0, 28);
  v37 = 0LL;
  memset(v39, 0, 0xAAuLL);
  v6 = *(_WORD *)(a1 + 4);
  v7 = PsUILanguageComitted == 0 ? 0xC0000034 : 0;
  if ( !v6 )
  {
    result = sub_1407F4A10(v33);
    if ( (int)result < 0 )
      return result;
    v6 = v33[0];
  }
  v9 = sub_140830B1C(a1, v6, 0LL, &v34);
  if ( v9 == -1073741772 || v9 == -1073741637 )
  {
    v33[0] = -1;
    v26 = (wchar_t *)sub_1403C5DE0(v10, 0x55u);
    v35 = v26;
    v3 = v26;
    if ( !v26 )
      return 3221225495LL;
    String.Buffer = v26;
    *(_DWORD *)&String.Length = 11141120;
    if ( !RtlLCIDToCultureName(v6, &String) )
      goto LABEL_12;
    LOBYTE(v27) = 1;
    v28 = (int)sub_140830CF4(a1, String.Buffer, v27, v33) < 0;
    v29 = -1;
    if ( !v28 )
      v29 = v33[0];
    HIWORD(v38[0]) = v29;
    LODWORD(v38[0]) = 49;
    WORD2(v38[0]) = v6;
    memset(&v38[1], 0, 20);
    if ( (int)sub_14085EE64(a1 + 24, v38, 0LL) < 0 )
      goto LABEL_12;
    v11 = *(_QWORD *)(a1 + 24);
    v5 = *(unsigned __int16 *)(v11 + 6) - 1;
    goto LABEL_8;
  }
  if ( v9 >= 0 )
  {
    v5 = v34;
    v11 = *(_QWORD *)(a1 + 24);
LABEL_8:
    if ( v5 != -1 )
    {
      v12 = *(_QWORD *)(v11 + 16);
      v37.Buffer = (wchar_t *)v39;
      v37.MaximumLength = 170;
      if ( (int)sub_1403C624C(a1, 28LL * v5 + v12, &v37) >= 0 )
      {
        if ( (int)sub_140830768(a1, v37.Buffer) < 0 )
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v5) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v5) |= 0x8000u;
        }
        else
        {
          v2 = 1;
        }
      }
    }
  }
LABEL_12:
  if ( !v7 )
    v4 = v5;
  sub_1403C5F68(a1, v4);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v15 = *(_QWORD *)(a1 + 24);
    v16 = 0LL;
    do
    {
      v13 = v15;
      if ( (*(_BYTE *)(v16 + *(_QWORD *)(v15 + 16)) & 0x22) == 0x22 )
      {
        sub_140A36A94(a1, (unsigned int)v14);
        v30 = v2 + 1;
        v13 = *(_QWORD *)(a1 + 24);
        v31 = *(_QWORD *)(v13 + 16);
        v32 = *(_WORD *)(v31 + v16);
        if ( (v32 & 0x1000) != 0 )
          v30 = v2;
        v2 = v30;
        if ( !v7 && v14 != v5 && v30 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v31 + v16) = v32 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v16) |= 0x8000u;
          v13 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v14;
      v16 += 28LL;
      v15 = v13;
    }
    while ( v14 < *(unsigned __int16 *)(v13 + 6) );
    v3 = v35;
  }
  v17 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v18 = v13;
    v19 = 0LL;
    do
    {
      v20 = *(_QWORD *)(v18 + 16);
      v13 = v18;
      v21 = *(_WORD *)(v20 + v19);
      if ( (v21 & 0x21) == 0x21 )
      {
        v22 = v2 + 1;
        if ( (v21 & 0x1000) != 0 )
          v22 = v2;
        v2 = v22;
        if ( !v7 && v17 != v5 && v22 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v20 + v19) = v21 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v19) |= 0x8000u;
          v13 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v17;
      v19 += 28LL;
      v18 = v13;
    }
    while ( v17 < *(unsigned __int16 *)(v13 + 6) );
    v3 = v35;
  }
  v23 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v24 = 0LL;
    do
    {
      v25 = v13;
      if ( (*(_BYTE *)(v24 + *(_QWORD *)(v13 + 16)) & 4) != 0 )
      {
        sub_140A36858(a1, (unsigned int)v23, v13);
        v25 = *(_QWORD *)(a1 + 24);
      }
      ++v23;
      v24 += 28LL;
      v13 = v25;
    }
    while ( v23 < *(unsigned __int16 *)(v25 + 6) );
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return 0LL;
}
