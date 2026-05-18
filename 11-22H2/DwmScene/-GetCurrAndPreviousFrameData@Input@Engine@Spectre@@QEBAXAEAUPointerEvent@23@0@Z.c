/*
 * XREFs of ?GetCurrAndPreviousFrameData@Input@Engine@Spectre@@QEBAXAEAUPointerEvent@23@0@Z @ 0x180074538
 * Callers:
 *     ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500 (-Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 */

void __fastcall Spectre::Engine::Input::GetCurrAndPreviousFrameData(
        Spectre::Engine::Input *this,
        struct Spectre::Engine::PointerEvent *a2,
        struct Spectre::Engine::PointerEvent *a3)
{
  __int64 v4; // r10
  volatile __int32 *v5; // rax
  __int64 v6; // r8
  __int128 *v7; // r10
  __int32 v8; // r11d
  __int128 v9; // xmm0
  __int64 v10; // r10
  _DWORD *v11; // rax
  int v12; // edx
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 1;
  std::_Atomic_reinterpret_as<long,long>(&v13);
  v5 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v4 + 48);
  while ( _InterlockedExchange(v5, v8) )
    ;
  v9 = *v7;
  v13 = 0;
  *(_OWORD *)a2 = v9;
  *((_DWORD *)a2 + 4) = *((_DWORD *)v7 + 4);
  *(_OWORD *)v6 = *(__int128 *)((char *)v7 + 20);
  *(_DWORD *)(v6 + 16) = *((_DWORD *)v7 + 9);
  std::_Atomic_reinterpret_as<int,long>(&v13);
  v11 = (_DWORD *)std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v10 + 48);
  *v11 = v12;
}
