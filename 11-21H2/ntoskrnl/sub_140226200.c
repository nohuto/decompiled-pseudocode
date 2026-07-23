/*
 * XREFs of sub_140226200 @ 0x140226200
 * Callers:
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 * Callees:
 *     sub_140225E68 @ 0x140225E68 (sub_140225E68.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14053F084 @ 0x14053F084 (sub_14053F084.c)
 *     sub_14069EDC0 @ 0x14069EDC0 (sub_14069EDC0.c)
 *     sub_14069F004 @ 0x14069F004 (sub_14069F004.c)
 *     sub_14069F150 @ 0x14069F150 (sub_14069F150.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 *     sub_14069F308 @ 0x14069F308 (sub_14069F308.c)
 *     sub_1406EB534 @ 0x1406EB534 (sub_1406EB534.c)
 *     sub_140720DD4 @ 0x140720DD4 (sub_140720DD4.c)
 *     sub_140721B68 @ 0x140721B68 (sub_140721B68.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

__int64 __fastcall sub_140226200(__int64 a1, int a2, unsigned int *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // r12
  signed int v10; // ebx
  unsigned int v11; // ebx
  const void **v12; // r9
  unsigned int v13; // ecx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  char v18; // al
  int v19; // ebx
  char v20; // al
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // eax
  unsigned int v25; // esi
  unsigned int v26; // eax
  int v27; // r9d
  int v28; // eax
  char v29; // [rsp+30h] [rbp-128h]
  PVOID P; // [rsp+40h] [rbp-118h] BYREF
  _OWORD v31[2]; // [rsp+48h] [rbp-110h] BYREF
  __int128 v32; // [rsp+68h] [rbp-F0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-C0h] BYREF
  __int16 v34[40]; // [rsp+C0h] [rbp-98h] BYREF

  memset(v31, 0, sizeof(v31));
  memset(v34, 0, 0x4AuLL);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  sub_14069F308(v31);
  v29 = 0;
  sub_14069F2B4(v34);
  P = 0LL;
  v32 = 0LL;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = sub_1407C05F4(v31, v9);
  if ( v10 < 0 )
    goto LABEL_11;
  sub_140721B68(v31);
  v29 = 1;
  if ( a2 == 3 )
  {
    if ( (unsigned __int8)sub_140AB45A0(a1, 0LL) && (*(_DWORD *)(a1 + 48) & 1) != 0 )
    {
      v10 = -1073740763;
    }
    else
    {
      v10 = sub_1407C0690(v9, &P);
      if ( v10 >= 0 )
      {
        v11 = *(unsigned __int16 *)P + 4;
        *a5 = v11;
        if ( a4 >= 4 )
        {
          v12 = (const void **)P;
          *a3 = *(unsigned __int16 *)P;
          v13 = a4 - 4;
          if ( a4 - 4 >= *(unsigned __int16 *)v12 )
            v13 = *(unsigned __int16 *)v12;
          memmove(a3 + 1, v12[1], v13);
          if ( v11 > a4 )
            v10 = -2147483643;
          else
            v10 = (unsigned __int8)sub_140AB45A0(a1, 0LL) != 0 ? 0xC000017C : 0;
        }
        else
        {
          v10 = -1073741789;
        }
      }
    }
    goto LABEL_11;
  }
  v10 = sub_140AB43C0(a1, 0LL);
  if ( v10 < 0 )
    goto LABEL_11;
  if ( a2 == 6 )
  {
    SeCaptureSubjectContextEx(KeGetCurrentThread(), *((PEPROCESS *)KeGetCurrentThread() + 68), &SubjectContext);
    v18 = sub_14053F084(v9, &SubjectContext);
    v19 = (v18 != 0) | v32 & 0xFFFFFFFE;
    v20 = sub_14053F084(v9, &SubjectContext);
    v21 = *(_DWORD *)(v9 + 184);
    if ( !v20 || (v22 = 2, (v21 & 0x20) != 0) )
      v22 = 0;
    v23 = v22 | v19 & 0xFFFFFFFD;
    if ( !byte_140C097BD || (v24 = 4, (v21 & 0x1000000) == 0) )
      v24 = 0;
    v25 = v24 & 0xFFFFFFE7 | v23 & 0xFFFFFFE3 | ((HIWORD(v21) & 0x80 | (v21 >> 19) & 0x40) >> 3);
    SeReleaseSubjectContext(&SubjectContext);
    *a5 = 4;
    if ( a4 < 4 )
    {
      v10 = -1073741789;
      goto LABEL_11;
    }
    *a3 = v25;
    goto LABEL_41;
  }
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 4112LL) & 1) != 0 )
      v26 = v32 & 0xFFFFFFFE;
    else
      v26 = v32 | 1;
    *a5 = 4;
    if ( a4 < 4 )
    {
      v10 = -1073741789;
      goto LABEL_11;
    }
    *a3 = v26;
    goto LABEL_41;
  }
  v15 = *(unsigned __int16 *)(v9 + 66);
  if ( (v15 & 0x8000u) != 0LL )
  {
LABEL_22:
    v17 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v16 = sub_140721CE0(v31, v15);
      if ( *(_DWORD *)(v16 + 40) != -1 )
        break;
      LOWORD(v15) = v15 - 1;
      if ( (v15 & 0x8000u) != 0LL )
        goto LABEL_22;
    }
    v17 = v16;
  }
  if ( a2 == 5 )
  {
    LODWORD(v32) = sub_1406EB534(v17, 0LL);
    DWORD1(v32) = *(int *)(v17 + 40) < 0;
    if ( (unsigned __int8)sub_140720DD4(v31) )
      DWORD1(v32) = v27 | 2;
    v28 = (*(_DWORD *)(v17 + 184) >> 4) & 0xF;
    *a5 = 12;
    if ( a4 < 0xC )
    {
      v10 = -1073741789;
      goto LABEL_11;
    }
    *(_QWORD *)a3 = v32;
    a3[2] = v28;
LABEL_41:
    v10 = 0;
    goto LABEL_11;
  }
  v10 = sub_14069EDC0(v34, v31, a1);
  if ( v10 >= 0 )
  {
    v10 = sub_140225E68(v34, a2, (__int64)a3, a4, (__int64)a5);
    if ( v10 >= 0 )
      v10 = 0;
  }
LABEL_11:
  sub_14069F150(v34);
  if ( P )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v29 )
    sub_140721BAC(v31);
  sub_14069F004(v31);
  return (unsigned int)v10;
}
