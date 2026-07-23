/*
 * XREFs of sub_140B1ED10 @ 0x140B1ED10
 * Callers:
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 * Callees:
 *     sub_14022D554 @ 0x14022D554 (sub_14022D554.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_14075563C @ 0x14075563C (sub_14075563C.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     sub_14084895C @ 0x14084895C (sub_14084895C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B1ED10()
{
  char *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int v3; // r8d
  PSID v4; // rbx
  unsigned int v5; // r14d
  ULONG v6; // edi
  ACL *Pool2; // rax
  ACL *v8; // rsi
  void *v9; // rax
  void *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  signed __int32 v17[12]; // [rsp+8h] [rbp-120h] BYREF
  int v18; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-70h] BYREF
  int v21[2]; // [rsp+C0h] [rbp-68h] BYREF
  _SID_AND_ATTRIBUTES v22; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-48h]
  __int64 v25; // [rsp+E8h] [rbp-40h]
  int v26; // [rsp+F0h] [rbp-38h]
  int v27; // [rsp+F4h] [rbp-34h]
  void *v28; // [rsp+F8h] [rbp-30h]
  __int64 v29; // [rsp+100h] [rbp-28h]
  __m128i si128; // [rsp+108h] [rbp-20h] BYREF
  _SID_AND_ATTRIBUTES v31; // [rsp+118h] [rbp-10h] BYREF

  v0 = (char *)qword_140C15B58;
  *(_QWORD *)v21 = 0LL;
  *(&v22.Attributes + 1) = 0;
  HIDWORD(v23) = 0;
  v27 = 0;
  v20 = 0LL;
  v18 = 1;
  v19 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140025B50);
  if ( !qword_140C15B58 || !*(_BYTE *)qword_140C15B58 )
  {
    sub_14022D554(si128.m128i_i16, &v20);
    goto LABEL_6;
  }
  v1 = *((_DWORD *)qword_140C15B58 + 1);
  _InterlockedOr(v17, 0);
  if ( !sub_14022D554(si128.m128i_i16, &v19) )
    goto LABEL_6;
  v2 = v19;
  v3 = 0;
  if ( !v1 )
    goto LABEL_5;
  v14 = (__int64 *)(v0 + 8);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 >= 0 )
    {
      if ( v2 < v15 + 10000000 )
      {
        if ( v2 < v15 )
          goto LABEL_5;
        v2 = 2 * v2 - v15;
      }
      else
      {
        v2 += 10000000LL;
      }
      goto LABEL_17;
    }
    v16 = v15 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v2 < v16 + 10000000 )
      break;
    v2 -= 10000000LL;
LABEL_17:
    ++v3;
    ++v14;
    if ( v3 >= v1 )
      goto LABEL_5;
  }
  if ( v2 < v16 )
LABEL_5:
    v20 = v2;
LABEL_6:
  v4 = qword_140D3CA60;
  v31.Sid = (PSID)qword_140C1B9C0;
  v22.Sid = qword_140D3CA60;
  v22.Attributes = 0;
  v31.Attributes = 96;
  v5 = ((4 * *(unsigned __int8 *)(qword_140C1B9C0 + 1) + 11) & 0xFFFFFFFC) + 16;
  v6 = 4 * (*((unsigned __int8 *)qword_140D3CA60 + 1) + *((unsigned __int8 *)qword_140C5AFA8 + 1)) + 48;
  Pool2 = (ACL *)ExAllocatePool2(256LL, 0xC8uLL, 0x63416553u);
  v8 = Pool2;
  if ( Pool2 )
  {
    RtlCreateAcl(Pool2, v6, 2u);
    RtlAddAccessAllowedAce(v8, 2u, 0xF01FFu, qword_140C5AFA8);
    RtlAddAccessAllowedAce(v8, 2u, 0xF01FFu, qword_140D3CA60);
    v9 = (void *)ExAllocatePool2(256LL, 0x28uLL, 0x64536553u);
    v10 = v9;
    if ( v9 )
    {
      RtlCreateSecurityDescriptor(v9, 1u);
      RtlSetDaclSecurityDescriptor(v10, 1u, v8, 0);
      RtlSetOwnerSecurityDescriptor(v10, qword_140C5AFA8, 0);
      RtlSetGroupSecurityDescriptor(v10, qword_140C5AFA8, 0);
      LODWORD(v23) = 48;
      v24 = 0LL;
      v26 = 0;
      v25 = 0LL;
      v28 = v10;
      v29 = 0LL;
      sub_14084895C(
        (HANDLE *)v21,
        v11,
        v12,
        &v23,
        v17[8],
        v17[10],
        (__int64)&qword_140A37C20,
        &v20,
        &v22,
        1u,
        &v31,
        v5,
        0,
        0LL,
        0LL,
        v4,
        v8);
      sub_14075563C(*(__int64 *)v21, &v18);
      ExFreePoolWithTag(v8, 0);
      ExFreePoolWithTag(v10, 0);
      return *(_QWORD *)v21;
    }
    ExFreePoolWithTag(v8, 0);
  }
  return 0LL;
}
