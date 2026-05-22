/*
 * XREFs of ?IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x1800F3670
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800EBAF4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HidLampMultiUpdateReportBuilder::IncludeInNextUpdate(
        HidLampMultiUpdateReportBuilder *this,
        struct LampUpdateState *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *((int *)this + 6);
  if ( (int)v2 >= *((_DWORD *)this + 4) )
    return 2147483659LL;
  *(_DWORD *)(*((_QWORD *)this + 4) + 4 * v2) = *(_DWORD *)a2;
  *(_BYTE *)(*((int *)this + 6) + *((_QWORD *)this + 5)) = *((_BYTE *)a2 + 4);
  *(_BYTE *)(*((int *)this + 6) + *((_QWORD *)this + 6)) = *((_BYTE *)a2 + 5);
  *(_BYTE *)(*((int *)this + 6) + *((_QWORD *)this + 7)) = *((_BYTE *)a2 + 6);
  *(_BYTE *)(*((int *)this + 6) + *((_QWORD *)this + 8)) = *((_BYTE *)a2 + 7);
  result = 0LL;
  ++*((_DWORD *)this + 6);
  return result;
}
