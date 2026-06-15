/*
 * XREFs of ??_G?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAPEAXI@Z @ 0x18000E340
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x1800250AC (--1CProcess@@MEAA@XZ.c)
 *     ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x180028F00 (-RemoveAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSim.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::wstring::`scalar deleting destructor'(_QWORD *a1)
{
  unsigned __int64 v1; // rdx

  v1 = a1[3];
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*a1, 2 * v1 + 2);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  return a1;
}
