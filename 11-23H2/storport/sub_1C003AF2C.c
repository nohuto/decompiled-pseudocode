/*
 * XREFs of sub_1C003AF2C @ 0x1C003AF2C
 * Callers:
 *     sub_1C003FB90 @ 0x1C003FB90 (sub_1C003FB90.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003F7A0 @ 0x1C003F7A0 (sub_1C003F7A0.c)
 *     sub_1C007825C @ 0x1C007825C (sub_1C007825C.c)
 *     sub_1C00A943C @ 0x1C00A943C (sub_1C00A943C.c)
 *     sub_1C00A94DC @ 0x1C00A94DC (sub_1C00A94DC.c)
 *     sub_1C00AA138 @ 0x1C00AA138 (sub_1C00AA138.c)
 *     sub_1C00AA59C @ 0x1C00AA59C (sub_1C00AA59C.c)
 */

__int64 __fastcall sub_1C003AF2C(_DWORD *a1)
{
  int v2; // edi
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset_0(a1, 0, 0x1800uLL);
  *a1 = 1094997074;
  *((_QWORD *)a1 + 19) = a1 + 36;
  *((_QWORD *)a1 + 18) = a1 + 36;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 17);
  *((_QWORD *)a1 + 29) = a1 + 56;
  *((_QWORD *)a1 + 28) = a1 + 56;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 27);
  InitializeSListHead((PSLIST_HEADER)a1 + 16);
  InitializeSListHead((PSLIST_HEADER)a1 + 305);
  a1[14] = -1;
  v2 = sub_1C007825C(a1 + 42);
  if ( v2 >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection((POOL_TYPE)512, 0x6D526152u);
    *((_QWORD *)a1 + 37) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      sub_1C00AA138(a1 + 84);
      sub_1C00A94DC(a1 + 190);
      a1[76] = 0;
      a1[77] = 0;
      a1[78] = 0;
      *((_BYTE *)a1 + 316) = 0;
      sub_1C00AA59C(a1 + 80);
      sub_1C00A943C(a1 + 164);
      *(_OWORD *)(a1 + 198) = 0LL;
      *((_QWORD *)a1 + 101) = 0LL;
      sub_1C003F7A0(a1 + 236);
      sub_1C003F7A0(a1 + 332);
      a1[272] = 134684677;
      a1[292] = 134684677;
      a1[312] = 134684677;
      KeInitializeTimer((PKTIMER)(a1 + 380));
      KeInitializeTimer((PKTIMER)(a1 + 428));
      KeInitializeTimer((PKTIMER)(a1 + 1018));
      KeInitializeTimer((PKTIMER)(a1 + 1332));
      a1[22] = 2;
      *((_BYTE *)a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 93);
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 682);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
