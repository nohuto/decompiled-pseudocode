/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0307188
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C001D8C0 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C01641F0 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C0164280 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkpIsDrtEnabled @ 0x1C0301864 (DxgkpIsDrtEnabled.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C0307564 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 */

int __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  HANDLE hProcess; // rax
  int v6; // eax
  int v7; // edi
  struct DXGPROCESS *Process; // rax
  struct DXGPROCESS *Current; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-68h] BYREF
  HANDLE v12; // [rsp+28h] [rbp-60h]
  __int64 v13; // [rsp+30h] [rbp-58h]
  int v14; // [rsp+38h] [rbp-50h]
  __int16 v15; // [rsp+3Ch] [rbp-4Ch]
  char v16; // [rsp+3Eh] [rbp-4Ah]

  if ( a1->GetVads.GetVad.VadAddress )
  {
    if ( DxgkpIsDrtEnabled((__int64)a1, a2, a3, a4) )
    {
      hProcess = a1->Evict.hProcess;
      v13 = 0LL;
      v15 = 0;
      v12 = hProcess;
      v14 = 2048;
      v16 = 0;
      v6 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v11, 1);
      v7 = v6;
      if ( v6 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v11);
        v7 = DxgEscapeEvictWorker(a1, Process);
      }
      else
      {
        WdLogSingleEntry2(3LL, a1->GetVads.GetVad.VadAddress, v6);
      }
      if ( (_BYTE)v15 )
        DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v11);
      return v7;
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741823LL);
      return -1073741823;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1, a2, a3, a4);
    return DxgEscapeEvictWorker(a1, Current);
  }
}
