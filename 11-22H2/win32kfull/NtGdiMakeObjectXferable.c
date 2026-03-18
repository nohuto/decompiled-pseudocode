/*
 * XREFs of NtGdiMakeObjectXferable @ 0x1C02A8510
 * Callers:
 *     <none>
 * Callees:
 *     ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C02A79EC (-bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z.c)
 */

__int64 __fastcall NtGdiMakeObjectXferable(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebx

  v4 = a2;
  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v7 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  if ( v7 == 1 && (unsigned int)XFERDCOBJ::bPrepareDCForXfer(a1, v4) )
  {
    LOBYTE(v9) = BYTE2(a1) & 0x1F;
    v10 = HmgMarkXferable(a1, v9);
  }
  else
  {
    v10 = 0;
  }
  GreReleaseHmgrSemaphore(v8);
  return v10;
}
