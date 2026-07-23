/*
 * XREFs of sub_14032CE60 @ 0x14032CE60
 * Callers:
 *     sub_140213398 @ 0x140213398 (sub_140213398.c)
 *     sub_140236274 @ 0x140236274 (sub_140236274.c)
 *     sub_140240C38 @ 0x140240C38 (sub_140240C38.c)
 *     sub_140245DF4 @ 0x140245DF4 (sub_140245DF4.c)
 *     sub_140270A00 @ 0x140270A00 (sub_140270A00.c)
 *     sub_14028DF40 @ 0x14028DF40 (sub_14028DF40.c)
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032CB70 @ 0x14032CB70 (sub_14032CB70.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_14033A030 @ 0x14033A030 (sub_14033A030.c)
 *     sub_140386DC4 @ 0x140386DC4 (sub_140386DC4.c)
 *     sub_1403D5614 @ 0x1403D5614 (sub_1403D5614.c)
 *     sub_140593E88 @ 0x140593E88 (sub_140593E88.c)
 *     sub_1405941C0 @ 0x1405941C0 (sub_1405941C0.c)
 *     sub_1405A3418 @ 0x1405A3418 (sub_1405A3418.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 *     sub_1405A6840 @ 0x1405A6840 (sub_1405A6840.c)
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_1405A8748 @ 0x1405A8748 (sub_1405A8748.c)
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 *     sub_1405AA07C @ 0x1405AA07C (sub_1405AA07C.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_1405BBD5C @ 0x1405BBD5C (sub_1405BBD5C.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14025D6C0 @ 0x14025D6C0 (sub_14025D6C0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031D9B0 @ 0x14031D9B0 (sub_14031D9B0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 */

__int64 __fastcall sub_14032CE60(ULONG_PTR a1, __int64 a2, int a3, __int64 a4, char a5)
{
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR v7; // r13
  char *v8; // r15
  int v9; // r14d
  unsigned __int64 v10; // rbx
  BOOL v11; // r12d
  int v12; // esi
  int v13; // eax
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 i; // rbp
  unsigned __int64 v19; // rdi
  signed __int64 v20; // r8
  bool v21; // zf
  int v22; // eax
  ULONG_PTR v23; // rbp
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  volatile LONG *v28; // rdi
  unsigned __int64 v29; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v30; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v31; // [rsp+40h] [rbp-C8h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v33; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h]
  _BYTE v37[32]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v38; // [rsp+90h] [rbp-78h]
  __int128 v39; // [rsp+A0h] [rbp-68h]
  __int128 v40; // [rsp+B0h] [rbp-58h]
  __int128 v41; // [rsp+C0h] [rbp-48h]
  unsigned __int8 v44; // [rsp+128h] [rbp+20h]
  int v45; // [rsp+130h] [rbp+28h]

  v44 = a4;
  BugCheckParameter4 = a1;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v7 = *((_QWORD *)KeGetCurrentThread() + 23);
  BugCheckParameter3 = v7;
  if ( (a5 & 4) != 0 )
    v8 = sub_14026DFC0(2);
  else
    v8 = (char *)(v7 + 1664);
  v9 = a5 & 8;
  DWORD2(v38) = a3;
  v45 = v9;
  v37[0] = (v9 != 0) + 7;
  v10 = (__int64)(BugCheckParameter4 << 25) >> 16;
  v31 = v10;
  v11 = v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL;
  v12 = a5 & 1;
  do
  {
    if ( v12 )
    {
      if ( sub_14028FBF0(BugCheckParameter4) )
        return 0LL;
    }
    else
    {
      if ( v11 )
      {
        v13 = sub_14031D9B0((__int64)v8, v10, 0);
        if ( v13 )
        {
          if ( v13 == 1 )
            return 0LL;
          v24 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          while ( v13 != 1LL )
            v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          sub_14020D8D0((__int64)v8, v24);
        }
      }
      v30 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v33 = v30;
      v34 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v35 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v36 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v15 = 0xFFFFF6FB7DBEDF68uLL;
      sub_14031DE00((__int64)v8, 0xFFFFF6FB7DBEDF68uLL, 0LL, a4);
      for ( i = 2LL; ; --i )
      {
        v19 = *(&v33 + i);
        v20 = *(_QWORD *)v19;
        if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL && (dword_140D06880 & 0xC00000) != 0 )
        {
          v16 = *((_QWORD *)KeGetCurrentThread() + 23);
          if ( *(_BYTE *)(v16 + 912) != 1 && (v20 & 1) != 0 && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            v16 = *((_QWORD *)KeGetCurrentThread() + 23);
            v25 = *(_QWORD *)(v16 + 1928);
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25 + 8 * ((v19 >> 3) & 0x1FF));
              v27 = v20 | 0x20;
              v16 = (unsigned __int8)v26;
              LOBYTE(v16) = v26 & 0x20;
              if ( (v26 & 0x20) == 0 )
                v27 = *(_QWORD *)v19;
              v20 = v27;
              if ( (v26 & 0x42) != 0 )
                v20 = v27 | 0x42;
            }
          }
        }
        if ( (v20 & 0x81) != 1 )
          break;
        if ( (v20 & 0x20) == 0 )
          sub_14025D6C0(v16, (volatile signed __int64 *)*(&v33 + i), v20, 1);
        if ( v19 != v15 )
        {
          sub_14031DE00((__int64)v8, v19, 0LL, v17);
          sub_14020D8D0((__int64)v8, v15);
          v15 = v19;
        }
        if ( !i )
          break;
      }
      v21 = v15 == v30;
      v10 = v31;
      v9 = v45;
      v29 = v15;
      v7 = BugCheckParameter3;
      if ( v21 )
        return 0LL;
      sub_14020D8D0((__int64)v8, v29);
      BugCheckParameter4 = a1;
    }
    if ( a2 )
      sub_14032F1B0(a2);
    if ( v12 )
      sub_14030FA80((__int64)v8, v44);
    else
      sub_1402B0CE0((__int64)v8, v44);
    v22 = sub_14031C860(2uLL, BugCheckParameter4, 0, (ULONG_PTR)&v37[1]);
    v23 = v22;
    if ( v22 < 0 && !v9 )
    {
      sub_14058DCA8(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v23, v7, BugCheckParameter4);
    }
    if ( v12 )
    {
      v28 = (volatile LONG *)sub_140282AD0((__int64)v8);
      ExAcquireSpinLockExclusive(v28);
      *((_DWORD *)v28 + 1) = 0;
      BugCheckParameter4 = a1;
    }
    else
    {
      sub_1402CF4F0((__int64)v8);
    }
  }
  while ( !v9 || (v23 & 0x80000000) == 0LL );
  return (unsigned int)v23;
}
