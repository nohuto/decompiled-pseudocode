/*
 * XREFs of ?IsKeyboardButtonPressed@Input@Engine@Spectre@@QEBA_NXZ @ 0x180074680
 * Callers:
 *     ?UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBVInput@23@@Z @ 0x18006AF64 (-UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 */

bool __fastcall Spectre::Engine::Input::IsKeyboardButtonPressed(Spectre::Engine::Input *this)
{
  __int64 v1; // rdx
  volatile __int32 *v2; // rax
  __int32 v3; // r10d
  __int64 v4; // rdx
  _DWORD *v5; // rax
  int v6; // r8d
  int v7; // r9d
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 1;
  std::_Atomic_reinterpret_as<long,long>(&v9);
  v2 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v1);
  while ( _InterlockedExchange(v2, v3) )
    ;
  v9 = 0;
  std::_Atomic_reinterpret_as<int,long>(&v9);
  v5 = (_DWORD *)std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v4);
  *v5 = v6;
  return v7 == 0;
}
