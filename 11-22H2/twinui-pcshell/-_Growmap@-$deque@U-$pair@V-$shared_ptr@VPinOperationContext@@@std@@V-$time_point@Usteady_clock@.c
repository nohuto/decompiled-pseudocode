/*
 * XREFs of ?_Growmap@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAX_K@Z @ 0x1806A91C4
 * Callers:
 *     ??$emplace_front@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@@Z @ 0x18069C844 (--$emplace_front@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@c.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

void __fastcall std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Growmap(
        _QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  size_t size_of; // rax
  size_t v7; // r14
  char *v8; // r15
  size_t v9; // rbx
  const void *v10; // rdx
  char *v11; // rbx
  char *v12; // rcx
  void *v13; // rcx

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 != v1 && v3 >= 8 )
      break;
    if ( 0xAAAAAAAAAAAAAAALL - v3 < v3 )
      std::_Xlength_error("deque<T> too long");
    v3 *= 2LL;
  }
  v5 = a1[3];
  size_of = std::_Get_size_of_n<8>(v3);
  v7 = 8 * v5;
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v9 = 8LL * a1[2] - 8 * v5;
  memmove(&v8[8 * v5], (const void *)(a1[1] + 8 * v5), v9);
  v10 = (const void *)a1[1];
  v11 = &v8[8 * v5 + v9];
  if ( v5 > v4 )
  {
    memmove(v11, v10, 8 * v4);
    memmove(v8, (const void *)(8 * v4 + a1[1]), v7 - 8 * v4);
    v12 = &v8[v7 - 8 * v4];
    v7 = 8 * v4;
  }
  else
  {
    memmove(v11, v10, 8 * v5);
    memset_0(&v11[v7], 0, 8 * (v4 - v5));
    v12 = v8;
  }
  memset_0(v12, 0, v7);
  v13 = (void *)a1[1];
  if ( v13 )
    std::_Deallocate<16,0>(v13, 8LL * a1[2]);
  a1[1] = v8;
  a1[2] += v4;
}
