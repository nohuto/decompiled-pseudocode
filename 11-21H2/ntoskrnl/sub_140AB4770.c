/*
 * XREFs of sub_140AB4770 @ 0x140AB4770
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB48B4 @ 0x140AB48B4 (sub_140AB48B4.c)
 */

__int64 __fastcall sub_140AB4770(void *a1, __int64 a2, __int64 a3)
{
  int v6; // r9d
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v18[3]; // [rsp+48h] [rbp-38h] BYREF

  Object = 0LL;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  sub_140347770((__int64)&v17);
  if ( v6 == 4 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    if ( sub_140347810(&stru_140C49420) )
    {
      v7 = sub_140AB4630(a1, 0, v9, 0, &Object, 0LL);
      if ( v7 >= 0 )
      {
        v13 = KeGetCurrentThread();
        --*((_WORD *)v13 + 242);
        sub_140AB4550((__int64)v18, v10, v11, v12);
        v7 = sub_140AB48B4(Object, v14, a2, a3);
        sub_1402D0930((__int64)v18, 0LL);
        sub_1402F9540((__int64)KeGetCurrentThread());
      }
      if ( Object )
        ObfDereferenceObject(Object);
      sub_1402AD030(&stru_140C49420);
      KeLeaveCriticalRegion();
    }
    else
    {
      KeLeaveCriticalRegion();
      v7 = -1073741431;
    }
  }
  else
  {
    v7 = -1073741637;
  }
  sub_14022EA30((__int64 *)&v17);
  return (unsigned int)v7;
}
