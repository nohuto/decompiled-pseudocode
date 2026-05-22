/*
 * XREFs of ?InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z @ 0x1800E5830
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800E5E68 (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::InjectKeyEvent(
        KeyboardOverriderDispatcher *this,
        unsigned __int16 a2,
        __int16 a3)
{
  char v4; // di
  __int16 v7; // r8
  __int16 v8; // ax
  __int16 v9; // r8
  _OWORD *v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v27; // [rsp+170h] [rbp+70h]
  _WORD v28[2]; // [rsp+190h] [rbp+90h] BYREF
  __int16 v29; // [rsp+194h] [rbp+94h]
  __int64 v30; // [rsp+1B8h] [rbp+B8h]
  __int128 v31; // [rsp+1C0h] [rbp+C0h]

  v4 = a2;
  if ( a2 != 1 && (a2 <= 3u || a2 > 5u) )
    return 2147942487LL;
  if ( !*((_BYTE *)this + 432) )
    goto LABEL_14;
  v7 = *((_WORD *)this + 212);
  v8 = *((_WORD *)this + 208) | 0xE000;
  if ( (v7 & 0x100) == 0 )
    v8 = *((_WORD *)this + 208);
  if ( a3 == v8 )
  {
    if ( (a2 & 1) != 0 )
    {
      *((_WORD *)this + 212) = v7 & 0x7FFF;
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        this,
        (KeyboardOverriderDispatcher *)((char *)this + 64));
    }
    if ( (v4 & 4) != 0 )
    {
      *((_WORD *)this + 212) |= 0x8000u;
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        this,
        (KeyboardOverriderDispatcher *)((char *)this + 64));
    }
    *((_BYTE *)this + 432) = 0;
    memset_0((char *)this + 64, 0, 0x170uLL);
  }
  else
  {
LABEL_14:
    memset_0(v28, 0, 0x40uLL);
    v28[1] = a3;
    v28[0] = -2;
    v9 = 128;
    v29 = 128;
    v10 = *(_OWORD **)(*((_QWORD *)this + 4) + 8 * (*((_QWORD *)this + 6) & (*((_QWORD *)this + 5) - 1LL)));
    v11 = &v26;
    v12 = 2LL;
    do
    {
      v13 = v10[1];
      *(_OWORD *)v11 = *v10;
      v14 = v10[2];
      *((_OWORD *)v11 + 1) = v13;
      v15 = v10[3];
      *((_OWORD *)v11 + 2) = v14;
      v16 = v10[4];
      *((_OWORD *)v11 + 3) = v15;
      v17 = v10[5];
      *((_OWORD *)v11 + 4) = v16;
      v18 = v10[6];
      *((_OWORD *)v11 + 5) = v17;
      v19 = v10[7];
      v10 += 8;
      *((_OWORD *)v11 + 6) = v18;
      v11 += 16;
      *((_OWORD *)v11 - 1) = v19;
      --v12;
    }
    while ( v12 );
    v20 = v10[1];
    *(_OWORD *)v11 = *v10;
    v21 = v10[2];
    *((_OWORD *)v11 + 1) = v20;
    v22 = v10[3];
    *((_OWORD *)v11 + 2) = v21;
    v23 = v10[4];
    *((_OWORD *)v11 + 3) = v22;
    v24 = v10[5];
    *((_OWORD *)v11 + 4) = v23;
    v25 = v10[6];
    *((_OWORD *)v11 + 5) = v24;
    *((_OWORD *)v11 + 6) = v25;
    v30 = v26;
    v31 = v27;
    if ( (v4 & 1) != 0 )
    {
      NtMITSynthesizeKeyboardInput(8LL, v28, (char *)this + 448);
      v9 = v29;
    }
    if ( (v4 & 4) != 0 )
    {
      v29 = v9 | 1;
      NtMITSynthesizeKeyboardInput(8LL, v28, (char *)this + 448);
    }
  }
  return 0LL;
}
