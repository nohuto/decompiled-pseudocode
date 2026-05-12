/*
 * XREFs of ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4
 * Callers:
 *     sub_1C0016980 @ 0x1C0016980 (sub_1C0016980.c)
 *     sub_1C003A87C @ 0x1C003A87C (sub_1C003A87C.c)
 *     WorkerRoutine @ 0x1C0063A70 (WorkerRoutine.c)
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C00073B8 @ 0x1C00073B8 (sub_1C00073B8.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0016EE0 @ 0x1C0016EE0 (sub_1C0016EE0.c)
 *     sub_1C00173C4 @ 0x1C00173C4 (sub_1C00173C4.c)
 *     sub_1C00183B8 @ 0x1C00183B8 (sub_1C00183B8.c)
 *     sub_1C001840C @ 0x1C001840C (sub_1C001840C.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 */

__int64 __fastcall CMSPAddress::get_DynamicTerminalClasses(CMSPAddress *this, struct tagVARIANT *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r8d
  char v12; // dl
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  _BYTE Dst[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h]
  _BYTE *v19; // [rsp+50h] [rbp-B0h]
  __int16 v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _OWORD v22[6]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-10h]
  int v24; // [rsp+F8h] [rbp-8h]
  __int64 v25; // [rsp+100h] [rbp+0h]

  v2 = (unsigned int)a2;
  memset_0(Dst, 0, 0x60uLL);
  result = sub_1C0016EE0((__int64 *)this, v2, (__int64)Dst);
  if ( (int)result < 0 )
    return result;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 0xEu)
    && BYTE1(off_1C0093070->Timer) >= 5u )
  {
    sub_1C003EEB0(off_1C0093070->AttachedDevice, 10LL, &unk_1C0089838, Dst[4], Dst[5], Dst[6]);
  }
  v5 = sub_1C00173C4((unsigned int)&unk_1C0082000, (_DWORD)this, v2, (unsigned int)Dst, 36);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 0xEu)
    && BYTE1(off_1C0093070->Timer) >= 5u )
  {
    sub_1C003EE1C(off_1C0093070->AttachedDevice, 11LL, &unk_1C0089838, (unsigned int)v5);
  }
  if ( v5 < 0 )
  {
LABEL_23:
    sub_1C001840C(this, Dst);
    goto LABEL_24;
  }
  v6 = sub_1C00173C4((unsigned int)&unk_1C0082010, (_DWORD)this, v2, (unsigned int)Dst, 255);
  v5 = v6;
  if ( v6 != -1073741801 && v6 != -1073741670 )
  {
    if ( (Dst[0] & 1) == 0
      || (v13 = sub_1C00173C4((unsigned int)&unk_1C0082020, (_DWORD)this, v2, (unsigned int)Dst, 255),
          v5 = v13,
          v13 != -1073741801)
      && v13 != -1073741670 )
    {
      if ( (Dst[0] & 2) == 0
        || (v14 = sub_1C00173C4((unsigned int)&unk_1C0082050, (_DWORD)this, v2, (unsigned int)Dst, 255),
            v5 = v14,
            v14 != -1073741801)
        && v14 != -1073741670 )
      {
        if ( !byte_1C0093AE4 && ((*v19 & 0x1F) == 0 || (*v19 & 0x1F) == 0x14) )
        {
          v7 = (unsigned __int8)v19[4];
          if ( (unsigned __int8)v7 >= 0x37u )
          {
            v15 = v7 + 5;
            if ( (unsigned __int64)(v7 + 5) > 0xFF )
              v15 = 255;
            sub_1C00173C4((unsigned int)&unk_1C0082040, (_DWORD)this, v2, (unsigned int)Dst, v15);
          }
        }
        if ( (Dst[0] & 4) != 0 )
        {
          sub_1C00173C4((unsigned int)&unk_1C0082030, (_DWORD)this, v2, (unsigned int)Dst, 572);
        }
        else if ( v18 && sub_1C0004890(v18, 11) )
        {
          memset_0((char *)v22 + 8, 0, 0x68uLL);
          v8 = *(_QWORD *)this + 336LL;
          v25 = v18 + 88;
          *(_QWORD *)&v22[0] = 0x7800000002LL;
          v5 = sub_1C0018524(v8, 11LL, v22);
          if ( v5 >= 0
            || (v16 = *(_QWORD *)this + 336LL,
                *(_QWORD *)&v22[0] = 0x6C00000001LL,
                v5 = sub_1C0018524(v16, 11LL, v22),
                v5 >= 0) )
          {
            v9 = sub_1C0007CF4(64LL, 108LL, 842096978LL, *(_QWORD *)(*(_QWORD *)this + 8LL));
            v21 = v9;
            if ( !v9 )
            {
              v5 = -1073741801;
              goto LABEL_24;
            }
            *(_OWORD *)v9 = v22[0];
            *(_OWORD *)(v9 + 16) = v22[1];
            *(_OWORD *)(v9 + 32) = v22[2];
            *(_OWORD *)(v9 + 48) = v22[3];
            *(_OWORD *)(v9 + 64) = v22[4];
            *(_OWORD *)(v9 + 80) = v22[5];
            *(_QWORD *)(v9 + 96) = v23;
            *(_DWORD *)(v9 + 104) = v24;
            sub_1C00073B8(v21 + 8, 17);
            sub_1C00073B8(v21 + 25, v10 + 48);
            sub_1C00073B8(v21 + 90, v11);
          }
          else
          {
            v5 = 0;
          }
        }
        v12 = *v19 & 0x1F;
        if ( v12 == 20 )
        {
          v20 |= 2u;
        }
        else if ( (Dst[0] & 0x18) == 24 && v12 == 0 )
        {
          sub_1C00173C4((unsigned int)&unk_1C0082470, (_DWORD)this, v2, (unsigned int)Dst, 64);
        }
        goto LABEL_23;
      }
    }
  }
LABEL_24:
  sub_1C00183B8(this, Dst);
  if ( v5 != -1073741801 && v5 != -1073741670 )
    return 0;
  return (unsigned int)v5;
}
