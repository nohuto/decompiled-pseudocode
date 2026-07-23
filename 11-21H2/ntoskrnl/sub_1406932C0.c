/*
 * XREFs of sub_1406932C0 @ 0x1406932C0
 * Callers:
 *     sub_1406E5154 @ 0x1406E5154 (sub_1406E5154.c)
 * Callees:
 *     sub_140248854 @ 0x140248854 (sub_140248854.c)
 *     sub_1402DDEC0 @ 0x1402DDEC0 (sub_1402DDEC0.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406933B4 @ 0x1406933B4 (sub_1406933B4.c)
 *     sub_140693800 @ 0x140693800 (sub_140693800.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_1409DC58C @ 0x1409DC58C (sub_1409DC58C.c)
 *     sub_1409DC80C @ 0x1409DC80C (sub_1409DC80C.c)
 */

__int64 __fastcall sub_1406932C0(
        __int64 a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rsi
  int v9; // edi
  int *v10; // r15
  unsigned int v12; // r14d
  unsigned int *v13; // r12
  unsigned int v14; // eax
  char *v15; // rcx
  int v17; // eax
  unsigned int v18; // eax
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r13
  ULONG_PTR v22; // rcx
  unsigned int v23; // ecx
  wchar_t *v24; // rdx
  __int64 v25; // rbx
  _QWORD *v26; // rax
  ULONG_PTR v27; // rcx
  int v28; // r12d
  size_t Length; // r13
  __int64 v30; // r14
  wchar_t *Buffer; // rdx
  _WORD *v32; // rsi
  unsigned int v33; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-CCh] BYREF
  void *v35; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  void *Src; // [rsp+50h] [rbp-B0h] BYREF
  void *v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  const wchar_t *v41; // [rsp+70h] [rbp-90h]
  unsigned int *v42; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+A0h] [rbp-60h]
  const wchar_t *v46; // [rsp+A8h] [rbp-58h]
  unsigned int *v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  const wchar_t *v51; // [rsp+E0h] [rbp-20h]
  void **v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+110h] [rbp+10h]

  v8 = a8;
  v9 = 0;
  v10 = (int *)a6;
  v38 = a2;
  v12 = 0;
  v13 = 0LL;
  switch ( a3 )
  {
    case 0u:
      UnicodeString = 0LL;
      v26 = (_QWORD *)sub_140248854(a1);
      Src = v26;
      v21 = (__int64)v26;
      if ( !v26 )
        goto LABEL_44;
      v27 = v26[3];
      if ( v27 )
      {
        v9 = sub_1402DDEC0(v27, &UnicodeString);
        if ( v9 >= 0 )
        {
          v28 = UnicodeString.Length + 2;
          v12 = v28 + (a5 - 1) * ((UnicodeString.Length + 9) & 0xFFFFFFF8);
          v33 = v12;
          if ( v12 <= a7 )
          {
            memset((void *)a8, 0, v12);
            if ( a5 )
            {
              Length = UnicodeString.Length;
              v30 = a5;
              do
              {
                Buffer = UnicodeString.Buffer;
                *v10 = v28;
                v32 = (_WORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                ++v10;
                *v32++ = Length;
                memmove(v32, Buffer, Length);
                v8 = (unsigned __int64)v32 + Length;
                --v30;
              }
              while ( v30 );
              v12 = v33;
              v21 = (__int64)Src;
            }
            goto LABEL_40;
          }
          goto LABEL_39;
        }
LABEL_41:
        v9 = -1073741163;
        goto LABEL_43;
      }
LABEL_42:
      v9 = -1073741823;
      goto LABEL_43;
    case 1u:
      UnicodeString = 0LL;
      v20 = sub_140248854(a1);
      v21 = v20;
      if ( !v20 )
        goto LABEL_44;
      v22 = *(_QWORD *)(v20 + 24);
      if ( v22 )
      {
        v9 = sub_1402DDEC0(v22, &UnicodeString);
        if ( v9 >= 0 )
        {
          v23 = UnicodeString.Length;
          v12 = UnicodeString.Length + 10;
          if ( v12 <= a7 )
          {
            v24 = UnicodeString.Buffer;
            *(_DWORD *)a8 = 1;
            *a6 = v12;
            v25 = v23;
            *(_WORD *)(a8 + 4) = v23 + 4;
            memmove((void *)(a8 + 6), v24, v23);
            *(_DWORD *)(a8 + 4 + v25 + 2) = 3145823;
LABEL_40:
            RtlFreeUnicodeString(&UnicodeString);
LABEL_43:
            sub_1402E0164(v21);
            return sub_1406933B4(a1, a2, v38, (unsigned int)v9, v12);
          }
LABEL_39:
          v9 = -1073741789;
          goto LABEL_40;
        }
        goto LABEL_41;
      }
      goto LABEL_42;
    case 2u:
      v33 = 0;
      v43 = 0x4000000;
      v40 = 292;
      v41 = L"BootArchitecture";
      v45 = 292;
      v42 = &v33;
      v48 = 0x4000000;
      v46 = L"PreferredProfile";
      v47 = &v34;
      v51 = L"Capabilities";
      v50 = 292;
      v53 = 0x4000000;
      v52 = &v35;
      v34 = 0;
      LODWORD(v35) = 0;
      v39 = 0LL;
      v44 = 0LL;
      v49 = 0LL;
      v54 = 0LL;
      v55 = 0;
      if ( (int)sub_140781F40(0LL, L"\\Registry\\Machine\\Hardware\\Description\\System", &v39, 0LL) < 0 )
        goto LABEL_44;
      v12 = 12;
      if ( a7 >= 0xC )
      {
        *(_DWORD *)a8 = v33;
        *(_DWORD *)(a8 + 4) = v34;
        *(_DWORD *)(a8 + 8) = (_DWORD)v35;
        goto LABEL_9;
      }
      goto LABEL_25;
  }
  if ( a3 != 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 == 6 )
      {
        v34 = a7;
        v17 = sub_1409DC58C(a8 & -(__int64)(a7 != 0), &v34);
        v12 = v34;
        v9 = v17;
        if ( v17 < 0 )
          return sub_1406933B4(a1, a2, v38, (unsigned int)v9, v12);
        goto LABEL_9;
      }
LABEL_44:
      v9 = -1073741163;
      return sub_1406933B4(a1, a2, v38, (unsigned int)v9, v12);
    }
    Src = 0LL;
    v33 = 0;
    v35 = 0LL;
    v34 = 0;
    v9 = sub_1409DC80C(&Src, &v33, &v35, &v34);
    if ( v9 < 0 )
      return sub_1406933B4(a1, a2, v38, (unsigned int)v9, v12);
    if ( a3 == 5 )
    {
      v18 = v34;
      a2 = v35;
      v19 = 8 * v34;
    }
    else
    {
      v18 = v33;
      a2 = Src;
      v19 = 16 * v33;
    }
    v12 = v19 + 4;
    if ( a7 >= v12 )
    {
      *a6 = v12;
      *(_DWORD *)a8 = v18;
      memmove((void *)(a8 + 4), a2, v12 - 4LL);
      v9 = 0;
      return sub_1406933B4(a1, a2, v38, (unsigned int)v9, v12);
    }
LABEL_25:
    v9 = -1073741789;
    return sub_1406933B4(a1, a2, v38, (unsigned int)v9, v12);
  }
  if ( a7 < 8 )
  {
    v15 = 0LL;
    v14 = 0;
  }
  else
  {
    v13 = (unsigned int *)(a8 + 4);
    v14 = a7 - 8;
    v15 = (char *)(a8 + 8);
  }
  v33 = v14;
  v9 = sub_140693800(v15);
  v12 = v33 + 8;
  if ( v9 >= 0 )
  {
    *v13 = v33;
LABEL_9:
    *a6 = v12;
  }
  return sub_1406933B4(a1, a2, v38, (unsigned int)v9, v12);
}
