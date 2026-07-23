/*
 * XREFs of sub_14045F8C2 @ 0x14045F8C2
 * Callers:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140636FAC @ 0x140636FAC (sub_140636FAC.c)
 */

void __fastcall sub_14045F8C2(int a1, __int64 a2, char a3, __int64 a4)
{
  __int16 v5; // di
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ThreadServerSilo; // rax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 *v14; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+4Ch] [rbp-2Ch]

  switch ( a1 )
  {
    case 273:
      v5 = 523;
      break;
    case 272:
      v5 = 522;
      break;
    case 274:
      v5 = 524;
      break;
    case 276:
      v5 = 526;
      break;
    case 275:
      v5 = 525;
      break;
    case -1073741819:
      v5 = 527;
      break;
    default:
      return;
  }
  v13 = 0LL;
  v12 = a2;
  if ( a4 )
    v13 = *(_QWORD *)(a4 + 360);
  v16 = 0;
  v14 = &v12;
  v15 = 16;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_BYTE *)CurrentThread + 1384) & 0x10) != 0 )
  {
    ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
    sub_140281380(ThreadServerSilo, (int)&v14, 1, 0x1000u, v5, 33554690);
  }
  else
  {
    --*((_WORD *)CurrentThread + 243);
    *((_BYTE *)CurrentThread + 1384) |= 0x10u;
    v8 = a3 != 0 ? 33558786 : 50338050;
    v9 = PsGetThreadServerSilo((__int64)CurrentThread);
    sub_140281380(v9, (int)&v14, 1, 0x1000u, v5, v8);
    *((_BYTE *)CurrentThread + 1384) &= ~0x10u;
    v11 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v11 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    if ( qword_140D05008 != -4572 && (*(_DWORD *)(qword_140D05008 + 4572) & 0x1000) != 0 )
    {
      LOBYTE(v10) = a3;
      sub_140636FAC(v13, v12, v10);
    }
  }
}
