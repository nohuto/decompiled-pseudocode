/*
 * XREFs of CreateFlipObject @ 0x1801AA080
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall CreateFlipObject(_QWORD *a1)
{
  int v1; // eax
  int v2; // eax
  unsigned int v3; // ebx

  *a1 = 0LL;
  v1 = NtFlipObjectCreate(0LL, a1);
  v2 = HRESULTFromNTSTATUS(v1);
  v3 = v2;
  if ( v2 < 0 )
    DoStackCaptureDirect(v2, 0x1Au);
  return v3;
}
