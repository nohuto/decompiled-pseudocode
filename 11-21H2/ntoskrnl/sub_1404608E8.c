/*
 * XREFs of sub_1404608E8 @ 0x1404608E8
 * Callers:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 * Callees:
 *     sub_140294D90 @ 0x140294D90 (sub_140294D90.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1404608E8(__int64 a1, _QWORD *a2, struct _KTHREAD *a3, int a4)
{
  struct _KTHREAD *v6; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  int v9; // ecx
  char v10; // r14
  __int64 v11; // rdi
  PSLIST_ENTRY v12; // rax
  unsigned int *v13; // rbx
  __int64 v14; // rax
  void *v15; // rsp
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // [rsp+28h] [rbp-8h]
  unsigned int v21; // [rsp+30h] [rbp+0h] BYREF
  int v22; // [rsp+34h] [rbp+4h]
  __int64 v23; // [rsp+38h] [rbp+8h] BYREF
  __int64 v24; // [rsp+40h] [rbp+10h] BYREF
  __int128 v25; // [rsp+48h] [rbp+18h] BYREF
  __int128 v26; // [rsp+58h] [rbp+28h]
  __int128 v27; // [rsp+68h] [rbp+38h]
  __int128 *v28; // [rsp+78h] [rbp+48h] BYREF
  int v29; // [rsp+80h] [rbp+50h]
  int v30; // [rsp+84h] [rbp+54h]
  unsigned int *v31; // [rsp+88h] [rbp+58h]
  int v32; // [rsp+90h] [rbp+60h]
  int v33; // [rsp+94h] [rbp+64h]

  v22 = 0;
  v25 = 0LL;
  v6 = a3;
  v26 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  v21 = 0;
  if ( *((struct _KTHREAD **)KeGetCurrentPrcb() + 3) != CurrentThread && (a4 & 0x1800) != 0 )
  {
    if ( !a3 )
      v6 = CurrentThread;
    if ( (unsigned __int8)sub_140294D90((__int64)&v21, (__int64)&v23, (__int64)&v24) )
    {
      if ( v21 > 9 || (v9 = 929, !_bittest(&v9, v21)) )
      {
        v10 = 0;
        v11 = (unsigned int)(24 * dword_140D06BE0);
        v12 = ExpInterlockedPopEntrySList(&stru_140C5A690);
        if ( !v12 || (v13 = (unsigned int *)&v12[1], v12 == (PSLIST_ENTRY)-16LL) )
        {
          if ( (unsigned __int64)&sub_14041FAB0()[-v23] <= v11 + 3632 )
            return;
          v14 = v11 + 15;
          if ( v11 + 15 <= (unsigned __int64)(unsigned int)v11 )
            v14 = 0xFFFFFFFFFFFFFF0LL;
          v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
          v10 = 1;
          v13 = &v21;
        }
        if ( (int)sub_14042A5E0((unsigned int)v11, v13) >= 0 && v22 )
        {
          v16 = *(_QWORD *)(a1 + 1096);
          DWORD2(v25) = *((_DWORD *)v6 + 306);
          HIDWORD(v25) = *((_DWORD *)v6 + 308);
          *(_QWORD *)&v25 = *a2;
          v17 = *(_QWORD *)(a1 + 1024);
          v20 = a4 & 0xFFFFE600 | 2;
          v18 = *(_DWORD *)(v17 + 4);
          v30 = 0;
          v33 = 0;
          v28 = &v25;
          LODWORD(v26) = v18;
          v32 = v22;
          v19 = *(_DWORD *)a1;
          v29 = 24;
          v31 = v13;
          sub_1402AB170((__int64)&v28, v16, v19, 2u, 0xC20u, v20);
        }
        if ( !v10 )
          ExpInterlockedPushEntrySList(&stru_140C5A690, (PSLIST_ENTRY)v13 - 1);
      }
    }
  }
}
