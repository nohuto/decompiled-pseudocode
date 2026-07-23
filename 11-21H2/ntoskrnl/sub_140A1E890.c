/*
 * XREFs of sub_140A1E890 @ 0x140A1E890
 * Callers:
 *     sub_140A1E7F0 @ 0x140A1E7F0 (sub_140A1E7F0.c)
 *     sub_140A1FE8C @ 0x140A1FE8C (sub_140A1FE8C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140800ADC @ 0x140800ADC (sub_140800ADC.c)
 *     sub_14081287C @ 0x14081287C (sub_14081287C.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A1F8F4 @ 0x140A1F8F4 (sub_140A1F8F4.c)
 *     sub_140A1FF3C @ 0x140A1FF3C (sub_140A1FF3C.c)
 *     sub_140A202A4 @ 0x140A202A4 (sub_140A202A4.c)
 *     sub_140A20438 @ 0x140A20438 (sub_140A20438.c)
 *     sub_140A206C8 @ 0x140A206C8 (sub_140A206C8.c)
 *     sub_140A206F8 @ 0x140A206F8 (sub_140A206F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A1E890(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r15d
  __int64 v5; // r14
  PCWSTR *v6; // rsi
  int v7; // ebx
  PCWSTR *v8; // r13
  __int64 v9; // r14
  int v10; // esi
  _OWORD *PoolWithTag; // rbx
  __int64 v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  PVOID v15; // rcx
  unsigned __int64 v16; // r13
  unsigned int *v17; // rsi
  int v18; // r14d
  _OWORD *v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _OWORD *v23; // rax
  _QWORD *v24; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // rsi
  _QWORD *v29; // r14
  _QWORD *v30; // rbx
  _OWORD *v31; // rcx
  _QWORD *v32; // rax
  PVOID *v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  GUID v44; // [rsp+30h] [rbp-79h] BYREF
  _QWORD *v45; // [rsp+40h] [rbp-69h] BYREF
  _QWORD **v46; // [rsp+48h] [rbp-61h]
  PCWSTR *v47; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v48; // [rsp+58h] [rbp-51h] BYREF
  _QWORD **v49; // [rsp+60h] [rbp-49h]
  _QWORD *v50; // [rsp+68h] [rbp-41h] BYREF
  _QWORD **v51; // [rsp+70h] [rbp-39h]
  unsigned int v52; // [rsp+78h] [rbp-31h] BYREF
  PVOID v53; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v54; // [rsp+88h] [rbp-21h] BYREF
  void *v55; // [rsp+90h] [rbp-19h] BYREF
  __int64 v56; // [rsp+98h] [rbp-11h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-9h] BYREF
  PVOID P; // [rsp+A8h] [rbp-1h] BYREF
  PVOID v59; // [rsp+B0h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp+Fh] BYREF
  GUID Guid; // [rsp+C8h] [rbp+1Fh] BYREF

  v3 = 0;
  a3[1] = a3;
  *a3 = a3;
  *(_QWORD *)v44.Data4 = a1;
  v51 = &v50;
  P = 0LL;
  v50 = &v50;
  v52 = 0;
  v49 = &v48;
  v57 = 0LL;
  v48 = &v48;
  v59 = 0LL;
  v46 = &v45;
  v5 = a1;
  v56 = 0LL;
  v45 = &v45;
  v6 = 0LL;
  Guid = 0LL;
  LOWORD(v44.Data1) = 0;
  *(_DWORD *)&v44.Data2 = 0;
  DestinationString = 0LL;
  v53 = 0LL;
  v55 = 0LL;
  v47 = 0LL;
  v7 = sub_140813164(a1, L"Objects", 0x20019u, &v55);
  if ( v7 >= 0 )
  {
    v7 = sub_14081287C(v55, &v47, (ULONG *)&v44.Data2);
    if ( v7 < 0 )
      goto LABEL_60;
    if ( *(_DWORD *)&v44.Data2 )
    {
      v8 = v47;
      do
      {
        RtlInitUnicodeString(&DestinationString, v8[v3]);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 && (int)sub_140812B74(v5, &Guid.Data1, &v56) >= 0 )
        {
          v9 = v56;
          if ( (int)sub_140800ADC(v56, &v57) >= 0
            && (HIDWORD(v57) & 0xF0000000) == 0x10000000
            && (HIDWORD(v57) & 0xF00000) == 0x100000 )
          {
            v10 = HIDWORD(v57) & 0xFFFFF;
            if ( (HIDWORD(v57) & 0xFFFFF) != 1 )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
              if ( !PoolWithTag )
              {
                sub_140812D00(v9);
                v7 = -1073741670;
                goto LABEL_60;
              }
              *PoolWithTag = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[2] = 0LL;
              *((_QWORD *)PoolWithTag + 6) = 0LL;
              PoolWithTag[1] = Guid;
              *((_DWORD *)PoolWithTag + 12) |= 4u;
              if ( v10 == 0xFFFFF )
              {
                *((_DWORD *)PoolWithTag + 12) |= 8u;
                v13 = v49;
                if ( *v49 != &v48 )
                  goto LABEL_68;
                *((_QWORD *)PoolWithTag + 1) = v49;
                *(_QWORD *)PoolWithTag = &v48;
                *v13 = PoolWithTag;
                v49 = (_QWORD **)PoolWithTag;
              }
              else
              {
                v14 = v51;
                if ( *v51 != &v50 )
LABEL_68:
                  __fastfail(3u);
                *((_QWORD *)PoolWithTag + 1) = v51;
                *(_QWORD *)PoolWithTag = &v50;
                *v14 = PoolWithTag;
                v51 = (_QWORD **)PoolWithTag;
              }
              v54 = 2;
              if ( (int)sub_140812D44(v9, 0x16000082u, v12, &v44, &v54) >= 0 && LOBYTE(v44.Data1) )
                *((_DWORD *)PoolWithTag + 12) |= 0x10u;
              if ( (int)sub_140A20438(v9, &P) >= 0 )
              {
                v15 = P;
                *((_DWORD *)PoolWithTag + 8) = *((_DWORD *)P + 2);
                *((_DWORD *)PoolWithTag + 12) |= 2u;
                ExFreePoolWithTag(v15, 0x4B444342u);
              }
            }
          }
          sub_140812D00(v9);
          v5 = *(_QWORD *)v44.Data4;
        }
        ++v3;
      }
      while ( v3 < *(_DWORD *)&v44.Data2 );
    }
    v7 = sub_140A1F8F4(&v53, &v52);
    if ( v7 >= 0 )
    {
      v16 = v52;
      v17 = (unsigned int *)v53;
      *(_QWORD *)v44.Data4 = 0LL;
      if ( v52 )
      {
        while ( 1 )
        {
          if ( (int)sub_140A202A4(v17 + 1, &Guid) < 0 )
          {
            v18 = 0;
          }
          else
          {
            v18 = 32;
            if ( (int)sub_140A206F8(&v50, &Guid, v17[3], v44.Data4) >= 0 )
            {
              v19 = *(_OWORD **)v44.Data4;
              v20 = **(_QWORD **)v44.Data4;
              if ( *(_QWORD *)(**(_QWORD **)v44.Data4 + 8LL) != *(_QWORD *)v44.Data4 )
                goto LABEL_68;
              v21 = *(_QWORD **)(*(_QWORD *)v44.Data4 + 8LL);
              if ( *v21 != *(_QWORD *)v44.Data4 )
                goto LABEL_68;
              *v21 = v20;
              *(_QWORD *)(v20 + 8) = v21;
              v22 = (_QWORD *)a3[1];
              if ( (_QWORD *)*v22 != a3 )
                goto LABEL_68;
              *(_QWORD *)v19 = a3;
              *((_QWORD *)v19 + 1) = v22;
              *v22 = v19;
              a3[1] = v19;
              goto LABEL_37;
            }
          }
          v23 = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
          *(_QWORD *)v44.Data4 = v23;
          v19 = v23;
          if ( !v23 )
          {
            v7 = -1073741670;
            goto LABEL_58;
          }
          *v23 = 0LL;
          v23[1] = 0LL;
          v23[2] = 0LL;
          *((_QWORD *)v23 + 6) = 0LL;
          *((_DWORD *)v23 + 12) |= 8u;
          v24 = v46;
          if ( *v46 != &v45 )
            goto LABEL_68;
          *((_QWORD *)v19 + 1) = v46;
          *(_QWORD *)v19 = &v45;
          *v24 = v19;
          v46 = (_QWORD **)v19;
LABEL_37:
          v25 = ExAllocatePoolWithTag(PagedPool, v17[2], 0x4B444342u);
          v26 = v25;
          if ( !v25 )
          {
            v7 = -1073741670;
            goto LABEL_58;
          }
          memmove(v25, v17 + 1, v17[2]);
          *((_QWORD *)v19 + 5) = v26;
          *((_DWORD *)v19 + 8) = v26[2];
          *((_DWORD *)v19 + 12) = v18 | v19[3] & 0xFFFFFFDF | 1;
          v27 = *v17;
          if ( (_DWORD)v27 )
          {
            v17 = (unsigned int *)((char *)v17 + v27);
            if ( (char *)v17 - (_BYTE *)v53 < v16 )
              continue;
          }
          break;
        }
      }
      v28 = v45;
      while ( v28 != &v45 )
      {
        v29 = v28;
        v30 = v28;
        v28 = (_QWORD *)*v28;
        if ( (int)sub_140A206C8(&v48, *((unsigned int *)v29 + 8), &v59) >= 0 )
        {
          v31 = v59;
          v32 = *(_QWORD **)v59;
          if ( *(PVOID *)(*(_QWORD *)v59 + 8LL) != v59 )
            goto LABEL_68;
          v33 = (PVOID *)*((_QWORD *)v59 + 1);
          if ( *v33 != v59 )
            goto LABEL_68;
          *v33 = v32;
          v32[1] = v33;
          *((_OWORD *)v29 + 1) = v31[1];
          *((_DWORD *)v29 + 12) ^= (*((_DWORD *)v29 + 12) ^ *((_DWORD *)v31 + 12)) & 2;
          ExFreePoolWithTag(v31, 0x4B444342u);
          *((_DWORD *)v29 + 12) |= 4u;
          v34 = *v30;
          if ( *(_QWORD **)(*v30 + 8LL) != v30 )
            goto LABEL_68;
          v35 = (_QWORD *)v30[1];
          if ( (_QWORD *)*v35 != v30 )
            goto LABEL_68;
          *v35 = v34;
          *(_QWORD *)(v34 + 8) = v35;
          v36 = (_QWORD *)a3[1];
          if ( (_QWORD *)*v36 != a3 )
            goto LABEL_68;
          *v30 = a3;
          v30[1] = v36;
          *v36 = v30;
          a3[1] = v30;
        }
      }
      if ( v50 != &v50 )
      {
        v37 = (_QWORD *)a3[1];
        *v37 = v50;
        v38 = v51;
        a3[1] = v51;
        *v38 = a3;
        v50[1] = v37;
      }
      if ( v48 != &v48 )
      {
        v39 = (_QWORD *)a3[1];
        *v39 = v48;
        v40 = v49;
        a3[1] = v49;
        *v40 = a3;
        v48[1] = v39;
      }
      if ( v45 != &v45 )
      {
        v41 = (_QWORD *)a3[1];
        *v41 = v45;
        v42 = v46;
        a3[1] = v46;
        *v42 = a3;
        v45[1] = v41;
      }
      v7 = 0;
    }
LABEL_58:
    if ( v53 )
      ExFreePoolWithTag(v53, 0x4B444342u);
LABEL_60:
    v6 = v47;
  }
  if ( v55 )
    sub_1408132F0(v55);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v7 < 0 )
  {
    sub_140A1FF3C(&v45);
    sub_140A1FF3C(&v48);
    sub_140A1FF3C(&v50);
    sub_140A1FF3C(a3);
    sub_1408138F0(4LL, L"BiBuildIdentifierList failed %x", (unsigned int)v7);
  }
  return (unsigned int)v7;
}
