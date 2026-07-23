/*
 * XREFs of sub_14084685C @ 0x14084685C
 * Callers:
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 * Callees:
 *     sub_14025E834 @ 0x14025E834 (sub_14025E834.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403CD468 @ 0x1403CD468 (sub_1403CD468.c)
 *     sub_1403CD4C4 @ 0x1403CD4C4 (sub_1403CD4C4.c)
 *     sub_1403CD4E0 @ 0x1403CD4E0 (sub_1403CD4E0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140503F38 @ 0x140503F38 (sub_140503F38.c)
 *     sub_1405043D8 @ 0x1405043D8 (sub_1405043D8.c)
 *     sub_140510B68 @ 0x140510B68 (sub_140510B68.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 *     sub_140909214 @ 0x140909214 (sub_140909214.c)
 */

_QWORD *__fastcall sub_14084685C(
        unsigned int a1,
        int a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        _DWORD *a12)
{
  _QWORD *v12; // rdi
  int v13; // r12d
  __int64 v14; // rbx
  unsigned int v15; // r13d
  int v16; // esi
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rcx
  __int64 *v22; // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // [rsp+28h] [rbp-E0h]
  char v28; // [rsp+59h] [rbp-AFh]
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v31[4]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v32; // [rsp+90h] [rbp-78h]
  _QWORD v33[20]; // [rsp+A8h] [rbp-60h] BYREF

  v31[0] = 48LL;
  Handle = 0LL;
  v28 = 0;
  v12 = 0LL;
  Object = 0LL;
  v31[3] = 528LL;
  memset(v33, 0, 0x58uLL);
  v13 = sub_14025E834();
  v14 = 640LL;
  v31[1] = 0LL;
  v15 = 0;
  v31[2] = 0LL;
  v32 = 0LL;
  if ( !a5 )
  {
    v15 = 24 * (a8 + 1);
    v14 = v15 + 640LL;
  }
  v16 = a10;
  if ( !a11 && a10 )
  {
    if ( a10 == 2 )
      goto LABEL_36;
    if ( v13 == 1 )
      return v12;
  }
  if ( !a11 || !a10 )
    goto LABEL_6;
  if ( (int)sub_1405043D8(a11, v33) < 0 )
  {
    if ( a10 == 2 )
    {
      v16 = 0;
    }
    else if ( v13 == 1 )
    {
      return v12;
    }
LABEL_6:
    if ( (int)sub_14072B3B0(0, qword_140D06AF8, (int)v31, 0, v27, v14, 0, 0, &Object, 0LL) >= 0 )
    {
      v12 = Object;
      memset(Object, 0, v14);
      if ( ObReferenceObjectByPointer(v12, 0x20000u, qword_140D06AF8, 0) >= 0
        && (int)sub_140729C30((char *)v12, 0LL, 0x20000, 0, 0, 0LL, &Handle) >= 0 )
      {
        ZwClose(Handle);
        v12[1] = &qword_140006150;
        v18 = &unk_140C4E040;
        *((_BYTE *)v12 + 145) = a6;
        *(_DWORD *)v12 = 41943041;
        if ( a3 >= 0x20 )
          v18 = &unk_140C4E120;
        v12[15] = 0LL;
        v12[16] = 0LL;
        *((_BYTE *)v12 + 144) = 0;
        v12[19] = v18;
        if ( a3 < 0x40 )
          v19 = (1LL << a3) - 1;
        else
          v19 = -1LL;
        v12[17] = v19;
        if ( v19 >= v18[17] )
        {
          v12[39] = 0LL;
          *((_BYTE *)v12 + 338) = 0;
          v12[24] = v12 + 23;
          v12[23] = v12 + 23;
          v12[22] = 0LL;
          *((_BYTE *)v12 + 216) = 0;
          *((_DWORD *)v12 + 56) = a1;
          *((_BYTE *)v12 + 434) = a4;
          *((_BYTE *)v12 + 437) = a7;
          v12[56] = a9;
          *((_BYTE *)v12 + 433) = a5;
          *((_DWORD *)v12 + 94) = -1;
          *((_DWORD *)v12 + 110) = a3;
          *((_DWORD *)v12 + 155) = v15;
          *((_DWORD *)v12 + 37) = 3;
          *((_DWORD *)v12 + 154) = 0;
          v12[70] = 0LL;
          v12[72] = v12 + 71;
          v12[71] = v12 + 71;
          *((_BYTE *)v12 + 584) = 0;
          *((_DWORD *)v12 + 152) = 0;
          v12[61] = sub_1405129B0;
          v12[62] = v12;
          v12[59] = 0LL;
          if ( !a1 )
          {
            *((_DWORD *)v12 + 56) = 0;
            v20 = 0;
            *((_BYTE *)v12 + 337) = 1;
LABEL_16:
            *a12 = v20;
            *((_DWORD *)v12 + 61) = a2;
            *((_DWORD *)v12 + 128) = 0;
            v12[65] = a11;
            if ( v16 )
            {
              v25 = v12[66];
              if ( v25 )
              {
                if ( !sub_140510B68(v25) )
                {
                  if ( (int)sub_14042A5E0(v12[65], 0LL) < 0 )
                  {
                    if ( v16 != 2 && v13 == 1 )
                      goto LABEL_61;
                  }
                  else
                  {
                    *((_DWORD *)v12 + 128) = v16;
                  }
                }
              }
            }
            v12[63] = 0LL;
            if ( (int)sub_1403CD4E0((__int64)v12, (__int64 *)0xFFFFFFFFFFFFFFFFLL) >= 0 )
            {
LABEL_18:
              *(_QWORD *)(v12[63] + 56LL) = v12;
              goto LABEL_19;
            }
            v26 = *((_DWORD *)v12 + 128);
            if ( !v26 )
              goto LABEL_61;
            if ( v26 == 2 )
            {
              *((_DWORD *)v12 + 128) = 0;
              goto LABEL_60;
            }
            if ( v13 != 1 )
            {
LABEL_60:
              *((_DWORD *)v12 + 128) = 0;
              if ( (int)sub_1403CD4E0((__int64)v12, (__int64 *)0xFFFFFFFFFFFFFFFFLL) >= 0 )
                goto LABEL_18;
            }
LABEL_61:
            ObfDereferenceObject(v12);
            v12 = 0LL;
            Object = 0LL;
LABEL_19:
            if ( !v28 )
              goto LABEL_20;
            goto LABEL_35;
          }
          if ( a4 )
            v24 = sub_140909214(v12, a1, a3, 0LL);
          else
            v24 = sub_140908F2C(v12, a1, a3, 0LL);
          if ( v24 >= 0 )
          {
            v20 = *((_DWORD *)v12 + 56);
            *((_BYTE *)v12 + 337) = 0;
            goto LABEL_16;
          }
        }
        ObfDereferenceObject(v12);
      }
    }
    v12 = 0LL;
    goto LABEL_19;
  }
  v28 = 1;
  sub_14042A5E0(v33[1], 0LL);
  if ( a10 == 2 )
  {
LABEL_36:
    v16 = 0;
    goto LABEL_6;
  }
  if ( v13 != 1 )
    goto LABEL_6;
LABEL_35:
  sub_14042A5E0(v33[1], v17);
LABEL_20:
  if ( v12 )
  {
    if ( sub_1403CD4C4((__int64)v12) )
    {
      v22 = &qword_140009A20;
      goto LABEL_24;
    }
    if ( sub_1403CD468(v21) )
    {
      v22 = &qword_140006010;
LABEL_24:
      v12[1] = v22;
    }
  }
  return v12;
}
