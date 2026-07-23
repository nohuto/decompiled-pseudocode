/*
 * XREFs of sub_14062F380 @ 0x14062F380
 * Callers:
 *     <none>
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14062F380(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v2; // rdx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // r11
  char v6; // r8
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int8 v8; // al
  char v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+38h] [rbp-28h]
  __int16 v15; // [rsp+3Ch] [rbp-24h]
  char v16; // [rsp+3Eh] [rbp-22h]
  char v17; // [rsp+3Fh] [rbp-21h]
  unsigned __int64 *v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  int v20; // [rsp+4Ch] [rbp-14h]

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 360);
  v3 = 34656770;
  v4 = *((_DWORD *)CurrentThread + 308);
  if ( v2 > 0x7FFFFFFEFFFFLL )
    v3 = 34658818;
  v5 = *((_QWORD *)CurrentThread + 68);
  v16 = 0;
  v14 = v4;
  v6 = 8 * *((_BYTE *)CurrentThread + 195);
  v16 = v6;
  v13 = v2;
  v15 = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = *((_BYTE *)CurrentPrcb + 32);
  if ( v8 != 2 )
  {
    if ( v8 <= 1u )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 )
  {
LABEL_7:
    v9 = v6 | 2;
    goto LABEL_8;
  }
  v9 = v6 | 1;
LABEL_8:
  v3 &= ~0x4000u;
  v16 = v9;
LABEL_9:
  v10 = *((_QWORD *)CurrentThread + 13);
  if ( v10 )
  {
    v11 = v10 + *((unsigned int *)CurrentPrcb + 54);
    while ( *(_DWORD *)(v11 + 116) <= 0xFFu )
    {
      LOBYTE(v10) = *(_BYTE *)(v11 + 116);
      if ( !(_BYTE)v10 )
      {
        v11 = *(_QWORD *)(v11 + 408);
        if ( v11 )
          continue;
      }
      goto LABEL_16;
    }
    LOBYTE(v10) = -1;
  }
LABEL_16:
  v20 = 0;
  v18 = &v13;
  v17 = v10;
  v19 = 16;
  return sub_140281380(*(_QWORD *)(v5 + 2160), (int)&v18, 1, 0x20000002u, 3886, v3);
}
