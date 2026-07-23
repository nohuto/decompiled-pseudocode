/*
 * XREFs of sub_1406F8D30 @ 0x1406F8D30
 * Callers:
 *     MmUnmapViewOfSection @ 0x1406CD150 (MmUnmapViewOfSection.c)
 *     sub_1406D43E8 @ 0x1406D43E8 (sub_1406D43E8.c)
 *     sub_1406F39F8 @ 0x1406F39F8 (sub_1406F39F8.c)
 *     sub_1406F6A30 @ 0x1406F6A30 (sub_1406F6A30.c)
 *     sub_1406F8C60 @ 0x1406F8C60 (sub_1406F8C60.c)
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 *     sub_14097AC04 @ 0x14097AC04 (sub_14097AC04.c)
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_14030B420 @ 0x14030B420 (sub_14030B420.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406C321C @ 0x1406C321C (sub_1406C321C.c)
 *     sub_1406F9060 @ 0x1406F9060 (sub_1406F9060.c)
 *     sub_14079D948 @ 0x14079D948 (sub_14079D948.c)
 *     sub_1407A4C90 @ 0x1407A4C90 (sub_1407A4C90.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 */

__int64 __fastcall sub_1406F8D30(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v4; // r12d
  __int64 v5; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r15
  int v17; // esi
  __int64 *v19; // rsi
  unsigned __int64 v20; // r14
  unsigned int v21; // r8d
  int v22; // edx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // [rsp+50h] [rbp-98h] BYREF
  int v28; // [rsp+58h] [rbp-90h]
  unsigned __int64 v29; // [rsp+60h] [rbp-88h]
  __int64 v30; // [rsp+68h] [rbp-80h]
  _OWORD v31[3]; // [rsp+70h] [rbp-78h] BYREF

  v28 = a3;
  LODWORD(v27) = 0;
  memset(v31, 0, sizeof(v31));
  v4 = 0;
  v5 = 0LL;
  v30 = 0LL;
  v29 = a2;
  v7 = a2;
  v8 = *((_QWORD *)KeGetCurrentThread() + 23);
  v9 = a4 & 0x4000000;
  if ( (a4 & 0x4000000) != 0 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( v8 != BugCheckParameter1 )
  {
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v31, a4);
    v4 = 1;
  }
  v10 = sub_14030E7C0(v7, 1, (int *)&v27);
  v11 = v10;
  if ( !v10 )
  {
    v17 = v27;
    if ( (_DWORD)v27 == -1073741664 )
      v17 = -1073741799;
    goto LABEL_14;
  }
  v12 = *(_DWORD *)(v10 + 48);
  v13 = v12 >> 4;
  if ( (v12 & 0x200000) != 0 && (v13 & 7) != 1 )
  {
    v17 = -1073741799;
    goto LABEL_44;
  }
  v14 = *(unsigned int *)(v10 + 24);
  v15 = (v14 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
  if ( (v13 & 7) == 2 && (v12 & 0xF80) == 0x380 )
    v5 = (v14 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
  v16 = ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
       - (v14 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
       + 1) << 12;
  if ( (v12 & 8) == 0 || (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x20) != 0 )
  {
LABEL_8:
    if ( v9 )
    {
      if ( v15 != v7 || (v25 = sub_1402EE0C8(v11, 128LL)) == 0 )
      {
        v17 = -1073741800;
        goto LABEL_44;
      }
      v26 = *(_QWORD *)(v25 + 8);
      *(_QWORD *)(v25 + 8) = 0LL;
      ExAcquirePushLockExclusiveEx(v26 + 40, 0LL);
      sub_14030B420(v26, *(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32));
      *(_DWORD *)(v26 + 28) = *(_DWORD *)(v11 + 28);
      *(_BYTE *)(v26 + 33) = *(_BYTE *)(v11 + 33);
    }
    if ( (xmmword_140D06900[0] & 4) != 0 )
    {
      if ( v5 )
      {
        if ( *(_QWORD *)(BugCheckParameter1 + 1088) )
        {
          if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x1000) == 0 )
          {
            v19 = **(__int64 ***)(v11 + 72);
            if ( v19 )
            {
              if ( v19[8] )
              {
                v27 = *v19;
                v20 = sub_140281750((__int64)v19);
                if ( (*(_DWORD *)(v11 + 64) & 0x8000000) != 0 )
                {
                  v21 = 0;
                  v22 = 0;
                }
                else
                {
                  v23 = *(unsigned __int8 *)(v27 + 15);
                  v24 = v23 >> 1;
                  v21 = v23 >> 4;
                  v22 = v24 & 7;
                }
                sub_14079D948(
                  v20 + 88,
                  v20,
                  BugCheckParameter1,
                  v5,
                  v16,
                  *(_DWORD *)(*(_QWORD *)(v27 + 56) + 60LL),
                  v21,
                  v22,
                  1);
                sub_140280D08((__int64)v19, v20);
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(v11 + 48) & 0x70) == 0x10 )
      sub_1407BC0B0((PVOID)v11);
    else
      sub_1406F9060((PVOID)v11);
    v17 = 0;
    goto LABEL_14;
  }
  v17 = sub_1407A4C90(
          v10,
          (_DWORD)v14 << 12,
          (*(_DWORD *)(v10 + 28) - (int)v14 + 1) << 12,
          85,
          *((_BYTE *)KeGetCurrentThread() + 562));
  if ( v17 >= 0 )
  {
    v7 = v29;
    goto LABEL_8;
  }
LABEL_44:
  sub_14032E700((char *)v11);
LABEL_14:
  if ( v4 )
    sub_1402D0930((__int64)v31, 0LL);
  if ( v5 )
    sub_1406C321C((PVOID)BugCheckParameter1, v5);
  return (unsigned int)v17;
}
