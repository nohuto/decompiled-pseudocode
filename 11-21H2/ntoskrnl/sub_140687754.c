/*
 * XREFs of sub_140687754 @ 0x140687754
 * Callers:
 *     sub_1402498B0 @ 0x1402498B0 (sub_1402498B0.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_1409AD76C @ 0x1409AD76C (sub_1409AD76C.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     sub_14025F4D4 @ 0x14025F4D4 (sub_14025F4D4.c)
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406C03F0 @ 0x1406C03F0 (sub_1406C03F0.c)
 */

__int64 __fastcall sub_140687754(char *BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  char v5; // r13
  unsigned __int32 v7; // eax
  void *v8; // rbp
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned __int32 v13; // ett
  char v14; // r12
  char v15; // r14
  unsigned int v16; // eax
  ULONG_PTR v17; // rax
  char v18; // r14
  unsigned int v19; // r8d
  bool v20; // zf
  unsigned __int32 v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  char v24; // [rsp+20h] [rbp-98h]
  _OWORD v25[3]; // [rsp+28h] [rbp-90h] BYREF
  _OWORD v26[3]; // [rsp+58h] [rbp-60h] BYREF

  v24 = 0;
  v4 = 0;
  memset(v26, 0, sizeof(v26));
  v5 = 0;
  memset(v25, 0, sizeof(v25));
  _m_prefetchw(BugCheckParameter1 + 1120);
  v7 = *((_DWORD *)BugCheckParameter1 + 280);
  v8 = 0LL;
  v9 = 0x40000000LL;
  while ( (v7 & 0x40000000) == 0 )
  {
    v10 = (v7 >> 28) & 3;
    v11 = (v7 >> 22) & 3;
    if ( v10 == v11 )
      break;
    v13 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter1 + 280, v7 | 0x40000000, v7);
    if ( v13 == v7 )
    {
LABEL_6:
      v14 = 0;
      v15 = v11 ^ v10;
      if ( !v5 )
      {
        sub_14030D5C0((ULONG_PTR)BugCheckParameter1, 0LL, (__int64)v26, a4);
        v16 = sub_140287F30((__int64)BugCheckParameter1);
        if ( v16 != -1 )
        {
          v17 = sub_1402DF880(v16);
          v8 = (void *)v17;
          if ( v17 )
          {
            if ( (int)sub_1402312E0(v17) < 0 )
            {
              ObfDereferenceObject(v8);
              v8 = 0LL;
            }
          }
        }
        v5 = 1;
      }
      if ( (v15 & 2) != 0 )
      {
        if ( (v10 & 2) != 0 )
          v14 = 1;
        else
          sub_14025F4D4(BugCheckParameter1);
      }
      if ( (v15 & 1) != 0 )
      {
        v18 = 1;
        v24 = 1;
        LOBYTE(v9) = 1;
        if ( (v10 & 1) != 0 )
          sub_1406C03F0(BugCheckParameter1, v9);
        else
          sub_140257280((ULONG_PTR)BugCheckParameter1, v9, 1u);
      }
      else
      {
        v18 = v24;
      }
      v11 = v10;
      if ( v14 )
      {
        v23 = sub_140260144(BugCheckParameter1, dword_140D01434 != 0);
        if ( v23 < 0 )
        {
          if ( v23 == -1073741671 )
            v4 = -1073741671;
          v11 = v10 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(BugCheckParameter1 + 1120);
      v9 = *((unsigned int *)BugCheckParameter1 + 280);
      v19 = v10;
      do
      {
        v10 = ((unsigned int)v9 >> 28) & 3;
        if ( v10 != v19 && v10 != v11 )
          goto LABEL_6;
        v21 = _InterlockedCompareExchange(
                (volatile signed __int32 *)BugCheckParameter1 + 280,
                v9 & 0x8F3FFFFF | ((v11 | (v11 << 6)) << 22),
                v9);
        v20 = (_DWORD)v9 == v21;
        v9 = v21;
      }
      while ( !v20 );
      if ( v8 )
      {
        sub_140231240((__int64)v8, (__int64)v25);
        ObfDereferenceObject(v8);
      }
      sub_1402D0930((__int64)v26, 0LL);
      if ( v18 && sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D06D88) )
      {
        sub_14042A5E0(BugCheckParameter1, v22);
        sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D06D88);
      }
      return v4;
    }
  }
  return v4;
}
