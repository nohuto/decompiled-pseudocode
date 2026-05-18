/*
 * XREFs of ?GetKeyboardKeyCode@Input@Engine@Spectre@@QEBA?AW4EKeyboard@23@XZ @ 0x180074614
 * Callers:
 *     ?UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBVInput@23@@Z @ 0x18006AF64 (-UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 *     _anonymous_namespace_::NativeKeyIdToEKeyboard @ 0x1800746E8 (_anonymous_namespace_--NativeKeyIdToEKeyboard.c)
 */

__int64 Spectre::Engine::Input::GetKeyboardKeyCode()
{
  __int64 v0; // rdx
  volatile __int32 *v1; // rax
  __int64 v2; // r9
  __int32 v3; // r10d
  int v4; // r8d
  __int64 v5; // rdx
  _DWORD *v6; // rax
  int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 1;
  std::_Atomic_reinterpret_as<long,long>(&v10);
  v1 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v0);
  while ( _InterlockedExchange(v1, v3) )
    ;
  anonymous_namespace_::NativeKeyIdToEKeyboard(*(unsigned int *)(v2 + 44));
  v10 &= v4;
  std::_Atomic_reinterpret_as<int,long>(&v10);
  v6 = (_DWORD *)std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v5);
  *v6 = v7;
  return v8;
}
