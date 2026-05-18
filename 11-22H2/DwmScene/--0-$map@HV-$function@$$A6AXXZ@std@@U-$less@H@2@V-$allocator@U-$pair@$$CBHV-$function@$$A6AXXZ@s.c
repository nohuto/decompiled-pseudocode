/*
 * XREFs of ??0?$map@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800DFDA0
 * Callers:
 *     ??0SimpleCancellationToken@Internal@Utils@Spectre@@QEAA@XZ @ 0x1800DFE7C (--0SimpleCancellationToken@Internal@Utils@Spectre@@QEAA@XZ.c)
 *     ?Cancel@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXXZ @ 0x1800E0080 (-Cancel@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::map<int,std::function<void (void)>>::map<int,std::function<void (void)>>(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = operator new(0x68uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *a1 = v2;
  return a1;
}
