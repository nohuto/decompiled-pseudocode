/*
 * XREFs of ?Update@Input@Engine@Spectre@@QEAAXXZ @ 0x1800747A8
 * Callers:
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 */

void __fastcall Spectre::Engine::Input::Update(Spectre::Engine::Input *this)
{
  __int64 v1; // r9
  volatile __int32 *v2; // rax
  __int64 v3; // r9
  __int32 v4; // r10d
  int v5; // eax
  __int64 v6; // r9
  _DWORD *v7; // rax
  int v8; // r8d
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = 1;
  std::_Atomic_reinterpret_as<long,long>(&v9);
  v2 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v1 + 48);
  while ( _InterlockedExchange(v2, v4) )
    ;
  v5 = *(_DWORD *)(v3 + 16);
  *(_OWORD *)(v3 + 20) = *(_OWORD *)v3;
  *(_DWORD *)(v3 + 36) = v5;
  *(_DWORD *)v3 = -1082130432;
  *(_DWORD *)(v3 + 4) = -1082130432;
  *(_QWORD *)(v3 + 8) = 2LL;
  *(_DWORD *)(v3 + 16) = 0;
  v10 = 0;
  *(_QWORD *)(v3 + 40) = 2LL;
  v9 = 0;
  std::_Atomic_reinterpret_as<int,long>(&v9);
  v7 = (_DWORD *)std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v6 + 48);
  *v7 = v8;
}
