/*
 * XREFs of sub_14085F410 @ 0x14085F410
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14085F410(int a1, __int64 a2, __int64 a3)
{
  int v5; // edi

  if ( (unsigned int)(a1 - 1) <= 1 )
  {
    if ( !a3 )
      return 3221225712LL;
    memset((void *)(a3 + 12), 0, 0xB4uLL);
    *(_DWORD *)(a3 + 8) = a1;
    *(_QWORD *)a3 = 192LL;
    v5 = a1 - 1;
    if ( !v5 )
    {
      *(_QWORD *)(a3 + 16) = sub_14090AAC0;
      *(_QWORD *)(a3 + 24) = sub_14090AAF0;
      *(_QWORD *)(a3 + 32) = sub_140527CF0;
      *(_QWORD *)(a3 + 40) = sub_140528160;
      *(_QWORD *)(a3 + 48) = sub_140528380;
      *(_QWORD *)(a3 + 56) = sub_14090AB10;
      *(_QWORD *)(a3 + 64) = PoRegisterDeviceNotify;
      *(_QWORD *)(a3 + 72) = sub_140528650;
      *(_QWORD *)(a3 + 80) = sub_140528F50;
      *(_QWORD *)(a3 + 88) = sub_140528440;
      *(_QWORD *)(a3 + 96) = sub_140528E00;
      *(_QWORD *)(a3 + 104) = sub_140528C60;
      *(_QWORD *)(a3 + 112) = sub_14090AA70;
      return 0LL;
    }
    if ( v5 == 1 )
    {
      *(_QWORD *)(a3 + 16) = sub_140824A80;
      *(_QWORD *)(a3 + 24) = sub_14090AAF0;
      *(_QWORD *)(a3 + 32) = sub_140527F70;
      *(_QWORD *)(a3 + 40) = sub_140528320;
      *(_QWORD *)(a3 + 48) = sub_140528380;
      *(_QWORD *)(a3 + 56) = sub_14090AB10;
      *(_QWORD *)(a3 + 64) = PoRegisterDeviceNotify;
      *(_QWORD *)(a3 + 72) = sub_1405286D0;
      *(_QWORD *)(a3 + 80) = sub_140528F50;
      *(_QWORD *)(a3 + 88) = sub_1405284B0;
      *(_QWORD *)(a3 + 96) = sub_140528E60;
      *(_QWORD *)(a3 + 104) = SkIsSecureKernel;
      *(_QWORD *)(a3 + 112) = sub_14090AA70;
      *(_QWORD *)(a3 + 120) = sub_140527CD0;
      *(_QWORD *)(a3 + 128) = sub_140528900;
      *(_QWORD *)(a3 + 136) = sub_140529030;
      *(_QWORD *)(a3 + 144) = sub_140528B30;
      *(_QWORD *)(a3 + 152) = sub_1405283C0;
      *(_QWORD *)(a3 + 160) = sub_1405287F0;
      *(_QWORD *)(a3 + 168) = sub_140528FC0;
      *(_QWORD *)(a3 + 176) = sub_1408459C0;
      *(_QWORD *)(a3 + 184) = sub_14090AA30;
      return 0LL;
    }
  }
  return 3221225711LL;
}
