/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@?$vector@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@V?$allocator@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@2@@std@@QEAAPEAPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@1@QEAPEAV21@AEBQEAV21@@Z @ 0x1800439B0
 * Callers:
 *     ?AddOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1800493A0 (-AddOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z.c)
 *     ?AddOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1800493F0 (-AddOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<std::function<void (DeviceInfo *)> *,std::allocator<std::function<void (DeviceInfo *)> *>>::_Emplace_reallocate<std::function<void (DeviceInfo *)> * const &>(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r14
  char *v14; // rdi
  char *v15; // rsi
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8

  v6 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v11 = (v10 >> 1) + v10;
    v12 = v9;
    if ( v11 >= v9 )
      v12 = v11;
    if ( v12 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v8 = v12;
  }
  v13 = 8 * v8;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v8);
  v15 = &v14[8 * v6];
  *(_QWORD *)v15 = *a3;
  v16 = *(_BYTE **)(a1 + 8);
  v17 = *(_BYTE **)a1;
  v18 = v14;
  if ( a2 == v16 )
  {
    v19 = v16 - v17;
  }
  else
  {
    memmove_0(v14, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v18 = v15 + 8;
    v19 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v18, v17, v19);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = &v14[8 * v9];
  *(_QWORD *)(a1 + 16) = &v14[v13];
  return v15;
}
