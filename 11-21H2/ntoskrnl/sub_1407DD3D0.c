/*
 * XREFs of sub_1407DD3D0 @ 0x1407DD3D0
 * Callers:
 *     sub_1407DCF7C @ 0x1407DCF7C (sub_1407DCF7C.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     ?do_max_length@?$codecvt@_WDH@std@@MEBAHXZ @ 0x140360698 (-do_max_length@-$codecvt@_WDH@std@@MEBAHXZ.c)
 *     sub_1403606A8 @ 0x1403606A8 (sub_1403606A8.c)
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407DD6F0 @ 0x1407DD6F0 (sub_1407DD6F0.c)
 *     sub_1407E0884 @ 0x1407E0884 (sub_1407E0884.c)
 */

__int64 __fastcall sub_1407DD3D0(unsigned __int8 *a1, int a2, __int64 a3, int *a4, int *a5)
{
  int v7; // edi
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  unsigned int v13; // edx
  unsigned __int8 *v14; // r9
  __int64 v15; // r14
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rax
  _DWORD *v23; // rcx
  unsigned int v24; // edx
  unsigned int v25; // eax
  bool v26; // cf
  int v27; // eax
  int v28; // edx
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h]
  unsigned __int8 *v33; // [rsp+48h] [rbp-B8h]
  int *v34; // [rsp+50h] [rbp-B0h]
  int *v35; // [rsp+58h] [rbp-A8h]
  _OWORD v36[11]; // [rsp+60h] [rbp-A0h] BYREF

  v33 = a1;
  v35 = a5;
  v34 = a4;
  memset(v36, 0, sizeof(v36));
  v30 = 0LL;
  v31 = 0;
  v7 = 3;
  v8 = 23;
  v9 = 3;
  if ( (dword_140C544F0 & 8) != 0 )
  {
    v8 = 22;
    v7 = 22;
    goto LABEL_20;
  }
  sub_14033D720(a3);
  v10 = std::codecvt<wchar_t,char,int>::do_max_length();
  v11 = v10;
  v12 = v10 - 1;
  if ( v13 <= v10 - 1 || v10 <= v12 )
  {
    v7 = 2;
    v8 = 2;
    goto LABEL_20;
  }
  if ( (dword_140C54790 & 0x10) != 0 && !a2 )
  {
    v9 = 1;
    v8 = 14;
  }
  v14 = v33;
  v15 = 314159LL;
  v16 = 8LL;
  do
  {
    v17 = *v14;
    v14 += 8;
    v15 = *(v14 - 1)
        + 37
        * (*(v14 - 2)
         + 37
         * (*(v14 - 3)
          + 37 * (*(v14 - 4) + 37 * (*(v14 - 5) + 37 * (*(v14 - 6) + 37 * (*(v14 - 7) + 37 * (v17 + 37 * v15)))))));
    --v16;
  }
  while ( v16 );
  v32 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  sub_140360AC0((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, v36, 0xB0u, (__int64)v14, &v30);
  v18 = (unsigned __int64)(sub_1407E0884((char *)&v36[6] + 8, 0LL) << 12) >> 18;
  v19 = (unsigned __int64)(sub_1407E0884((char *)&v36[6] + 8, v11) << 12) >> 18;
  v20 = (unsigned __int64)(sub_1407E0884((char *)&v36[6] + 8, v12) << 12) >> 18;
  LODWORD(v30) = sub_1403606A8(&v31);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C54720, 1u);
  v22 = sub_1407DD6F0(&unk_140C546F8, v33, v15, (char *)&v30 + 4);
  v23 = (_DWORD *)v22;
  if ( !v22 )
  {
    v8 = 3;
    goto LABEL_19;
  }
  if ( HIDWORD(v30) )
  {
    v7 = 13;
    if ( v9 >= 2 )
      v8 = 13;
  }
  else
  {
    v24 = v32 - *(_DWORD *)(v22 + 112);
    v25 = *(_DWORD *)(v22 + 116);
    v26 = v24 < v25;
    if ( v24 < v25 )
    {
      v9 &= ~1u;
      v26 = v24 < v25;
    }
    v7 = v26 + 4;
    if ( v9 >= 2 )
    {
      v8 = 4;
      if ( (dword_140C544F0 & 2) == 0 )
      {
        if ( v24 >= 0x1B7740 )
        {
          if ( v24 >= 0x36EE80 )
            v27 = v18 - v23[26];
          else
            v27 = v20 - v23[25];
        }
        else
        {
          v27 = v19 - v23[24];
        }
        v28 = v30;
        if ( !v27 && (!v31 || (unsigned int)(v30 - v23[27]) < 0x100) )
        {
          v9 &= ~2u;
          v8 = 7;
        }
        goto LABEL_18;
      }
    }
  }
  v28 = v30;
LABEL_18:
  v23[28] = v32;
  v23[24] = v19;
  v23[25] = v20;
  v23[26] = v18;
  v23[27] = v28;
LABEL_19:
  ExReleaseResourceLite(&stru_140C54720);
  sub_1402F9540((__int64)KeGetCurrentThread());
LABEL_20:
  *v34 = v7;
  *v35 = v8;
  return v9;
}
