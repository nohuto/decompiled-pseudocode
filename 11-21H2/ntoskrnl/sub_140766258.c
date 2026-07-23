/*
 * XREFs of sub_140766258 @ 0x140766258
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_14080ED34 @ 0x14080ED34 (sub_14080ED34.c)
 *     sub_140810C28 @ 0x140810C28 (sub_140810C28.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1403A6700 @ 0x1403A6700 (sub_1403A6700.c)
 *     sub_1403A6C78 @ 0x1403A6C78 (sub_1403A6C78.c)
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_1407668C8 @ 0x1407668C8 (sub_1407668C8.c)
 *     sub_140768024 @ 0x140768024 (sub_140768024.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_1409583B0 @ 0x1409583B0 (sub_1409583B0.c)
 */

__int64 __fastcall sub_140766258(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  char v6; // bl
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF
  char v13; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v10 = 0LL;
  P = 0LL;
  sub_14077572C(4LL);
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v14 = 1LL;
    while ( (unsigned __int8)sub_1407667B0(a2, (unsigned int)&v14, (unsigned int)&Object, (unsigned int)&v13, 0LL) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
      sub_1407668C8(a2);
      if ( (unsigned int)(*(_DWORD *)(v9 + 300) - 789) <= 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v5 = *(_QWORD *)(v9 + 16);
        --*((_WORD *)CurrentThread + 242);
        ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
        sub_140768024(v9 + 40);
        v6 = sub_1403A6700((_QWORD *)v9);
        ExReleaseResourceLite(&stru_140C462A0);
        KeLeaveCriticalRegion();
        if ( v6 )
        {
          v7 = *(_QWORD *)(v9 + 48) == 0LL;
          *(_QWORD *)(v9 + 648) = v5;
          if ( !v7 )
          {
            sub_140779DC4(&P);
            v10 = MEMORY[0xFFFFF78000000014];
            sub_14077198C(
              qword_140D00AC0,
              *(_QWORD *)(v9 + 48),
              1,
              0LL,
              (__int64)qword_140010948,
              16,
              (__int64)&v10,
              8,
              0);
            sub_140772044(v8, *(_QWORD *)(v9 + 48), 1LL);
            sub_1403A6C78(v9);
            if ( P )
            {
              sub_140779A50(P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v9 + 300) == 790 )
            sub_1409583B0(a2, Object, &v14);
          ObfDereferenceObject(Object);
        }
      }
    }
  }
  return sub_140775698(4LL);
}
