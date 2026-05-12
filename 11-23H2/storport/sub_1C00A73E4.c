/*
 * XREFs of sub_1C00A73E4 @ 0x1C00A73E4
 * Callers:
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C00144AC @ 0x1C00144AC (sub_1C00144AC.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C003EF50 @ 0x1C003EF50 (sub_1C003EF50.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C00749C4 @ 0x1C00749C4 (sub_1C00749C4.c)
 */

__int64 __fastcall sub_1C00A73E4(__int64 a1, IRP *a2)
{
  signed int v4; // ebp
  _DWORD *Information; // rsi
  unsigned int v6; // r14d
  _DWORD *v7; // rdx
  _DWORD *v8; // r8
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  _DWORD *v11; // rcx
  __int64 v12; // r11
  __int64 v13; // rax
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-68h]
  __int128 v19; // [rsp+30h] [rbp-58h]
  GUID v20; // [rsp+40h] [rbp-48h] BYREF

  v19 = 0LL;
  v4 = sub_1C00144AC(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  if ( v4 >= 0 )
  {
    Information = (_DWORD *)a2->IoStatus.Information;
    if ( Information )
    {
      *(_DWORD *)(a1 + 816) = Information[2];
      *(_DWORD *)(a1 + 820) = Information[3];
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x200) != 0 && !(unsigned __int8)sub_1C00749C4() )
      {
        v6 = 0;
        v7 = Information + 8;
        v8 = Information + 8;
        if ( Information[7] )
        {
          while ( 1 )
          {
            v9 = 0;
            v10 = v7[1];
            *(_WORD *)v8 = *(_WORD *)v7;
            *((_WORD *)v8 + 1) = *((_WORD *)v7 + 1);
            if ( v10 )
              break;
LABEL_13:
            v8[1] = v9;
            if ( v10 )
              v14 = &v7[8 * v10 - 8];
            else
              v14 = v7;
            v7 = v14 + 10;
            if ( v9 )
              v15 = &v8[8 * v9 - 8];
            else
              v15 = v8;
            ++v6;
            v8 = v15 + 10;
            if ( v6 >= Information[7] )
              goto LABEL_20;
          }
          v11 = v7 + 2;
          v12 = v10;
          while ( 1 )
          {
            if ( *((_BYTE *)v11 + 1) != 1 )
              goto LABEL_11;
            if ( (*(_BYTE *)v11 & 8) == 0 )
              break;
LABEL_12:
            v11 += 8;
            if ( !--v12 )
              goto LABEL_13;
          }
          *((_BYTE *)v11 + 1) = 0;
LABEL_11:
          v13 = 8LL * v9++;
          *(_OWORD *)&v8[v13 + 2] = *(_OWORD *)v11;
          *(_OWORD *)&v8[v13 + 6] = *((_OWORD *)v11 + 1);
          goto LABEL_12;
        }
      }
LABEL_20:
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x100) != 0 )
      {
        if ( (unsigned int)sub_1C0007798(a1, 13) )
        {
          *(_QWORD *)&v19 = 0x1000000001LL;
          *((_QWORD *)&v19 + 1) = Information;
          v4 = sub_1C001A364(a1 + 336);
          if ( v4 < 0 )
          {
            if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
              && (HIDWORD(off_1C0093070->Timer) & 2) != 0
              && BYTE1(off_1C0093070->Timer) >= 3u )
            {
              sub_1C003EF50((__int64)off_1C0093070->AttachedDevice, 0x1Du, (__int64)&unk_1C0083210, a1, v4);
            }
            v4 = 0;
          }
        }
      }
    }
  }
  if ( byte_1C0093BE8 )
  {
    v20 = 0LL;
    IoGetActivityIdIrp(a2, &v20);
    if ( (byte_1C0093A02 & 0x20) != 0 )
    {
      LODWORD(v18) = a2->IoStatus.Status;
      sub_1C003275C(v16, &stru_1C0083220, &v20, a2, v18);
    }
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4((__int64)off_1C0093070->AttachedDevice, 0x1Eu, (__int64)&unk_1C0083210, a1, a2, v4, v19);
  }
  return sub_1C0003440(a2, 0, v4);
}
