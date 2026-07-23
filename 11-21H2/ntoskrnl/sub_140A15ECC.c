/*
 * XREFs of sub_140A15ECC @ 0x140A15ECC
 * Callers:
 *     sub_140A11A00 @ 0x140A11A00 (sub_140A11A00.c)
 * Callees:
 *     sub_140248A04 @ 0x140248A04 (sub_140248A04.c)
 *     sub_1402DE190 @ 0x1402DE190 (sub_1402DE190.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140A14CE0 @ 0x140A14CE0 (sub_140A14CE0.c)
 *     sub_140A1582C @ 0x140A1582C (sub_140A1582C.c)
 *     sub_140A1641C @ 0x140A1641C (sub_140A1641C.c)
 *     sub_140A16F94 @ 0x140A16F94 (sub_140A16F94.c)
 *     sub_140A171B8 @ 0x140A171B8 (sub_140A171B8.c)
 *     sub_140A17288 @ 0x140A17288 (sub_140A17288.c)
 *     sub_140A172D4 @ 0x140A172D4 (sub_140A172D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A15ECC(_WORD *a1, unsigned __int64 a2, const wchar_t *a3, _QWORD *a4)
{
  _WORD *v6; // r12
  WCHAR *v8; // r14
  int v9; // ebx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  WCHAR *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  wchar_t *Buffer; // rcx
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rcx
  size_t v18; // r15
  PVOID PoolWithTag; // rax
  PVOID v20; // rbx
  void *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r15
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r15
  size_t v29; // r12
  SIZE_T v30; // rdx
  PVOID v31; // rax
  void *v32; // rbx
  PVOID v33; // rax
  size_t v34; // rax
  unsigned __int128 v35; // rax
  unsigned __int64 v36; // kr30_8
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  _OWORD *v39; // rcx
  __int128 v40; // xmm0
  _DWORD *v41; // [rsp+30h] [rbp-50h] BYREF
  void *Src; // [rsp+38h] [rbp-48h]
  UNICODE_STRING v43; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  __int128 v45; // [rsp+60h] [rbp-20h] BYREF
  __int128 v46; // [rsp+70h] [rbp-10h]
  unsigned __int64 v48; // [rsp+C8h] [rbp+48h] BYREF

  v48 = a2;
  v6 = a1;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  *a1 = 0;
  v41 = 0LL;
  LOWORD(v48) = 0;
  *a4 = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  v43 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( RtlCreateUnicodeString(&DestinationString, a3) )
  {
    v9 = sub_140A1582C(&DestinationString.Length);
    if ( v9 < 0 )
      goto LABEL_41;
    v9 = sub_1402DE190(DestinationString.Length, 4, (__int16 *)&v48);
    if ( v9 < 0 )
      goto LABEL_41;
    v11 = (unsigned __int16)v48;
    v12 = (WCHAR *)sub_14075B444(v10, (unsigned __int16)v48);
    v8 = v12;
    if ( !v12 )
    {
LABEL_13:
      v9 = -1073741801;
      goto LABEL_42;
    }
    v9 = sub_140248A04(v12, v11, (__int64)DestinationString.Buffer, DestinationString.Length);
    if ( v9 < 0 )
    {
LABEL_41:
      sub_1406E0C3C(1LL, (__int64)"AslPathWildcardFindFirst");
      goto LABEL_42;
    }
    v13 = sub_140A172D4(v8);
    if ( !v13 )
    {
      v9 = -1073741767;
      goto LABEL_9;
    }
    if ( v13 == 1 )
    {
      Buffer = DestinationString.Buffer;
      *a4 = -1LL;
      if ( !(unsigned int)sub_140A14CE0(Buffer) )
      {
        v9 = -2147483642;
        goto LABEL_42;
      }
      v9 = sub_1402E0200(v6, 260LL, (__int64)a3);
      if ( v9 >= 0 )
      {
        v9 = 0;
        goto LABEL_42;
      }
      goto LABEL_41;
    }
    v41 = sub_14075B444(v14, 0x40uLL);
    v16 = v41;
    if ( !v41 )
      goto LABEL_13;
    *v41 = wcsncmp(a3, L"\\??\\", 4uLL) != 0;
    *((_QWORD *)v16 + 1) = v8;
    v8 = 0LL;
    *((_OWORD *)v16 + 1) = 0LL;
    *((_OWORD *)v16 + 2) = 0LL;
    *((_OWORD *)v16 + 3) = 0LL;
    *((_QWORD *)v16 + 2) = 0LL;
    *((_QWORD *)v16 + 6) = 16LL;
    *((_QWORD *)v16 + 4) = 0LL;
    *((_QWORD *)v16 + 5) = 0LL;
    *((_QWORD *)v16 + 7) = 0LL;
    *((_QWORD *)v16 + 3) = 32LL;
    v17 = *((_QWORD *)v16 + 3);
    v48 = 0LL;
    if ( !is_mul_ok(0LL, v17) )
    {
      v9 = -2147483637;
LABEL_31:
      v21 = (void *)*((_QWORD *)v16 + 7);
      if ( v21 )
        ExFreePoolWithTag(v21, 0x72615452u);
      *((_OWORD *)v16 + 1) = 0LL;
      *((_OWORD *)v16 + 2) = 0LL;
      *((_OWORD *)v16 + 3) = 0LL;
      sub_1406E0C3C(1LL, (__int64)"AslpPathWildcardInitStack");
      goto LABEL_41;
    }
    v48 = 0LL;
    v18 = 16 * v17;
    if ( !is_mul_ok(0x10uLL, v17) )
    {
      v9 = -2147483637;
      goto LABEL_31;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v17, 0x72615452u);
    v20 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v18);
    if ( !v20 )
    {
      v9 = -2147024882;
      goto LABEL_31;
    }
    *((_QWORD *)v16 + 7) = v20;
    *((_QWORD *)v16 + 5) = 16LL;
    RtlInitUnicodeString(&v43, *((PCWSTR *)v16 + 1));
    v9 = sub_140A16F94((unsigned int)&v45, (unsigned int)&v43, *((_QWORD *)v16 + 1), 1, 0LL, 0);
    if ( v9 < 0 )
      goto LABEL_41;
    v22 = *((_QWORD *)v16 + 4);
    v23 = *((_QWORD *)v16 + 5);
    *(_QWORD *)&v43.Length = v22;
    if ( v22 < v23 )
      goto LABEL_57;
    v24 = v22 + 1;
    if ( v22 + 1 <= v23 )
    {
      v9 = -2147024809;
      goto LABEL_41;
    }
    v25 = *((_QWORD *)v16 + 6) - 1LL;
    v26 = v25 + v24;
    if ( v25 + v24 < v24
      || (v27 = *((_QWORD *)v16 + 3), v28 = v26 & ~v25, v48 = v23 * v27, !is_mul_ok(v23, v27))
      || (Src = 0LL, v29 = v28 * v27, !is_mul_ok(v28, v27)) )
    {
LABEL_40:
      v9 = -2147483637;
      goto LABEL_41;
    }
    Src = (void *)*((_QWORD *)v16 + 7);
    v30 = v28 * v27;
    if ( Src )
    {
      v33 = ExAllocatePoolWithTag(PagedPool, v30, 0x72615452u);
      v32 = v33;
      if ( v33 )
      {
        memset(v33, 0, v29);
        v34 = v48;
        if ( v48 >= v29 )
          v34 = v29;
        memmove(v32, Src, v34);
        ExFreePoolWithTag(Src, 0x72615452u);
        goto LABEL_56;
      }
    }
    else
    {
      v31 = ExAllocatePoolWithTag(PagedPool, v30, 0x72615452u);
      v32 = v31;
      if ( v31 )
      {
        memset(v31, 0, v29);
LABEL_56:
        v22 = *(_QWORD *)&v43.Length;
        v6 = a1;
        *((_QWORD *)v16 + 5) = v28;
        *((_QWORD *)v16 + 7) = v32;
LABEL_57:
        v36 = v22;
        v35 = *((unsigned __int64 *)v16 + 3) * (unsigned __int128)v22;
        v37 = v35;
        if ( is_mul_ok(*((_QWORD *)v16 + 3), v36) )
        {
          v38 = *((_QWORD *)v16 + 7);
          v39 = (_OWORD *)(v38 + v37);
          if ( (unsigned __int64)v39 >= v38 )
          {
            v40 = v45;
            *a4 = v16;
            *v39 = v40;
            v39[1] = v46;
            ++*((_QWORD *)v16 + 4);
            v45 = 0LL;
            v46 = 0LL;
            v9 = sub_140A1641C(v6, *((_QWORD *)&v35 + 1), v16);
            goto LABEL_42;
          }
        }
        goto LABEL_40;
      }
    }
    v9 = -2147024882;
    goto LABEL_41;
  }
  v9 = -1073741801;
LABEL_9:
  sub_1406E0C3C(1LL, (__int64)"AslPathWildcardFindFirst");
LABEL_42:
  RtlFreeUnicodeString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x74705041u);
  if ( v9 < 0 )
  {
    sub_140A171B8(&v41);
    sub_140A17288(&v45);
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
