/*
 * XREFs of sub_140A6FB80 @ 0x140A6FB80
 * Callers:
 *     sub_140A6FA44 @ 0x140A6FA44 (sub_140A6FA44.c)
 *     sub_140A7328C @ 0x140A7328C (sub_140A7328C.c)
 *     sub_140A73424 @ 0x140A73424 (sub_140A73424.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403AE2FC @ 0x1403AE2FC (sub_1403AE2FC.c)
 *     sub_1403AE428 @ 0x1403AE428 (sub_1403AE428.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_1405658B4 @ 0x1405658B4 (sub_1405658B4.c)
 *     sub_140565C74 @ 0x140565C74 (sub_140565C74.c)
 *     sub_140565D34 @ 0x140565D34 (sub_140565D34.c)
 *     sub_140565D68 @ 0x140565D68 (sub_140565D68.c)
 *     sub_140565E20 @ 0x140565E20 (sub_140565E20.c)
 *     sub_140573670 @ 0x140573670 (sub_140573670.c)
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 *     sub_140A6FEC4 @ 0x140A6FEC4 (sub_140A6FEC4.c)
 *     sub_140A70084 @ 0x140A70084 (sub_140A70084.c)
 *     sub_140A7042C @ 0x140A7042C (sub_140A7042C.c)
 *     sub_140A70A20 @ 0x140A70A20 (sub_140A70A20.c)
 *     sub_140A70BB8 @ 0x140A70BB8 (sub_140A70BB8.c)
 *     sub_140A70CEC @ 0x140A70CEC (sub_140A70CEC.c)
 *     sub_140A72DF0 @ 0x140A72DF0 (sub_140A72DF0.c)
 *     sub_140A72F18 @ 0x140A72F18 (sub_140A72F18.c)
 *     sub_140A72FE0 @ 0x140A72FE0 (sub_140A72FE0.c)
 *     sub_140A73078 @ 0x140A73078 (sub_140A73078.c)
 *     sub_140A731C8 @ 0x140A731C8 (sub_140A731C8.c)
 *     sub_140A73514 @ 0x140A73514 (sub_140A73514.c)
 *     sub_140A73628 @ 0x140A73628 (sub_140A73628.c)
 *     sub_140A73A64 @ 0x140A73A64 (sub_140A73A64.c)
 *     sub_140A73B08 @ 0x140A73B08 (sub_140A73B08.c)
 *     sub_140A73B94 @ 0x140A73B94 (sub_140A73B94.c)
 *     sub_140A73D80 @ 0x140A73D80 (sub_140A73D80.c)
 *     sub_140A73F44 @ 0x140A73F44 (sub_140A73F44.c)
 *     sub_140A7471C @ 0x140A7471C (sub_140A7471C.c)
 */

__int64 __fastcall sub_140A6FB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  bool v11; // cf
  __int64 *v12; // r8
  __int64 *v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-89h]
  __int64 v17; // [rsp+28h] [rbp-81h]
  __int64 v18; // [rsp+40h] [rbp-69h] BYREF
  __int128 *v19; // [rsp+48h] [rbp-61h]
  __int128 v20; // [rsp+50h] [rbp-59h] BYREF
  __int64 v21; // [rsp+60h] [rbp-49h] BYREF
  void *v22; // [rsp+68h] [rbp-41h]
  int v23; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v25[2]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v26; // [rsp+90h] [rbp-19h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v28; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+17h]

  v29 = 0LL;
  v25[0] = 3670016LL;
  v21 = 805306368LL;
  v23 = 0;
  byte_140C31E40 = 0;
  v25[1] = &v26;
  v22 = &unk_140CE2A00;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  KdSendPacket(7LL, a2, a3, &xmmword_140C31E60);
  while ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
    {
      if ( (_DWORD)dword_140D06884 == 1 )
        KeQueryPerformanceCounter(0LL);
      v7 = KdReceivePacket(2LL, v25, &v21, &v23, &xmmword_140C31E60);
      if ( v7 == 2 )
        break;
      if ( v7 != 1 )
      {
        switch ( (int)v26 )
        {
          case 12592:
            sub_140A6FEC4(&v26, &v21);
            continue;
          case 12593:
            v20 = 0LL;
            DWORD2(v26) = sub_140A6F124((char *)v27, (__int64)v22, (unsigned __int16)v21, 0, 5, (_DWORD *)&v27 + 3);
            LOWORD(v20) = 56;
            *((_QWORD *)&v20 + 1) = &v26;
            goto LABEL_12;
          case 12594:
            *(_QWORD *)&v20 = 56LL;
            *((_QWORD *)&v20 + 1) = &v26;
            sub_140A70084(&v26, &v21);
            if ( !DWORD2(v26) )
              byte_140C31E40 = 1;
            v13 = (__int64 *)&v20;
            goto LABEL_56;
          case 12595:
            sub_140A73B94(&v26, &v21, a4);
            continue;
          case 12596:
            *(_QWORD *)&v20 = 56LL;
            LOBYTE(v8) = 1;
            *((_QWORD *)&v20 + 1) = &v26;
            DWORD2(v27) = sub_140A7471C(v27, 204LL, v8, 0LL, BugCheckParameter4, v17);
            v11 = DWORD2(v27) != 0;
            goto LABEL_11;
          case 12597:
            *(_QWORD *)&v20 = 56LL;
            *((_QWORD *)&v20 + 1) = &v26;
            v11 = (unsigned __int8)sub_140A7042C((unsigned int)v27) != 0;
LABEL_11:
            DWORD2(v26) = v11 ? 0 : 0xC0000001;
            goto LABEL_12;
          case 12598:
            return (int)v27 >= 0;
          case 12599:
            sub_140A70A20(&v26, &v21);
            continue;
          case 12600:
            sub_140A70BB8(&v26, &v21);
            continue;
          case 12601:
            HIDWORD(v27) = 0;
            v18 = 56LL;
            v19 = &v26;
            v14 = sub_140565C74(1, 0, 1, v27, (_BYTE *)&v27 + 12, SDWORD2(v27), &v20);
            goto LABEL_40;
          case 12602:
            v18 = 56LL;
            v19 = &v26;
            v14 = sub_140565D68(1, 0, 1, v27, (unsigned __int8 *)&v27 + 12, SDWORD2(v27), &v20);
            goto LABEL_40;
          case 12603:
            byte_140D01160 = 1;
            sub_140A6F900(0LL, 0x140000000uLL);
            sub_14042A5E0(0LL, v15);
            HalReturnToFirmware(3);
          case 12604:
            if ( (int)v27 < 0 )
              return 0LL;
            sub_140A70CEC(&v26, a4);
            return 1LL;
          case 12605:
            sub_140A73078(&v26, &v21, v8, &xmmword_140C31E60);
            continue;
          case 12606:
            sub_140A73F44(&v26, &v21);
            continue;
          case 12608:
          case 12609:
          case 12610:
          case 12634:
            continue;
          case 12612:
            v18 = 56LL;
            v19 = &v26;
            DWORD2(v28) = 0;
            v14 = sub_140565C74(SDWORD1(v27), SDWORD2(v27), SHIDWORD(v27), v28, (_BYTE *)&v28 + 8, v27, &v20);
            goto LABEL_40;
          case 12613:
            v18 = 56LL;
            v19 = &v26;
            v14 = sub_140565D68(SDWORD1(v27), SDWORD2(v27), SHIDWORD(v27), v28, (unsigned __int8 *)&v28 + 8, v27, &v20);
            goto LABEL_40;
          case 12614:
            DWORD2(v26) = 0;
            LODWORD(v26) = 12614;
            v18 = 56LL;
            v19 = &v26;
            v28 = xmmword_140C097E0;
            v27 = xmmword_140C097D0;
            v29 = qword_140C097F0;
            goto LABEL_21;
          case 12615:
            if ( !(unsigned int)sub_140A73D80(&v26, &v21) )
              continue;
            return 0LL;
          case 12616:
            sub_140A73514(&v26, &v21);
            continue;
          case 12617:
            sub_140A6F900(0LL, 0x140000000uLL);
            KeBugCheckEx(0xE2u, 0LL, 0LL, 0LL, 0LL);
          case 12624:
            return sub_140573670(WORD3(v26));
          case 12625:
            DWORD2(v26) = -1073741823;
            v18 = 56LL;
            v19 = &v26;
            goto LABEL_21;
          case 12626:
            *(_QWORD *)&v20 = 0LL;
            v18 = 56LL;
            v19 = &v26;
            DWORD2(v26) = sub_140565D34(v27, &v20);
            *(_QWORD *)((char *)&v27 + 4) = v20;
            goto LABEL_21;
          case 12627:
            v18 = 56LL;
            v19 = &v26;
            v24 = *(_QWORD *)((char *)&v27 + 4);
            v14 = sub_140565E20(v27, &v24);
LABEL_40:
            DWORD2(v26) = v14;
LABEL_21:
            v12 = 0LL;
            v13 = &v18;
            goto LABEL_13;
          case 12630:
            sub_140A73628(&v26, &v21);
            continue;
          case 12631:
            sub_140A72F18(&v26, &v21);
            continue;
          case 12632:
            sub_140A73B08(&v26, &v21);
            continue;
          case 12633:
            *(_QWORD *)&v20 = 56LL;
            *((_QWORD *)&v20 + 1) = &v26;
            if ( dword_140C3C3E8 )
              sub_140A73A64(4LL);
            DWORD2(v26) = 0;
LABEL_12:
            v12 = 0LL;
            v13 = (__int64 *)&v20;
            goto LABEL_13;
          case 12635:
            sub_140A72DF0(&v26, &v21);
            continue;
          case 12636:
            sub_140A72FE0(&v26);
            continue;
          case 12639:
            sub_1403AE428(&v26, (unsigned __int16 *)&v21);
            continue;
          case 12640:
            sub_1403AE2FC((__int64)&v26, (__int64)&v21, a4);
            continue;
          case 12641:
            sub_1405658B4((__int64)&v26, 0x140000000LL, v8, v9);
            continue;
          case 12642:
            sub_140A731C8(&v26, &v21);
            continue;
          default:
            LOWORD(v21) = 0;
            v13 = v25;
            DWORD2(v26) = -1073741823;
LABEL_56:
            v12 = &v21;
LABEL_13:
            KdSendPacket(2LL, v13, v12, &xmmword_140C31E60);
            break;
        }
      }
    }
    KdSendPacket(7LL, a2, a3, &xmmword_140C31E60);
  }
  return 1LL;
}
