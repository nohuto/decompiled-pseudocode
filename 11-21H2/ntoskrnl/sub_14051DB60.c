/*
 * XREFs of sub_14051DB60 @ 0x14051DB60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 *     sub_1403B0D74 @ 0x1403B0D74 (sub_1403B0D74.c)
 *     sub_1403D8F10 @ 0x1403D8F10 (sub_1403D8F10.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_14051DB60(ULONG_PTR BugCheckParameter4)
{
  int LockArray_high; // ecx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r9
  KPCR *Pcr; // rdi
  ULONG_PTR v7; // r10
  int v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+34h] [rbp-3Ch]
  int v10; // [rsp+38h] [rbp-38h]
  int v11; // [rsp+3Ch] [rbp-34h]
  int v12; // [rsp+40h] [rbp-30h]
  int v13; // [rsp+44h] [rbp-2Ch]
  int v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+4Ch] [rbp-24h]
  int v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+5Ch] [rbp-14h]
  int v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+64h] [rbp-Ch]
  int v21; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+30h] BYREF
  int v23; // [rsp+A4h] [rbp+34h]

  v9 = 0;
  v15 = 0;
  v17 = 0LL;
  v18 = 0;
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v21 = 0;
  result = sub_1403D8F10(LockArray_high, &v21, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = qword_140C54A88;
    v22 = *(_DWORD *)(qword_140C54A88 + 240);
    v23 = -2;
    if ( *(_DWORD *)(qword_140C54A88 + 224) == 2 && sub_1402520D4(&v22) )
    {
      Pcr = KeGetPcr();
      if ( !BYTE1(Pcr->HalReserved[5]) )
      {
        if ( qword_140C4AB80 )
        {
          if ( qword_140C4AB80 != BugCheckParameter4 )
          {
            sub_14051E038(0, 36, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3413);
            KeBugCheckEx(0x5Cu, 0x200uLL, dword_140C4ADB0, v7, BugCheckParameter4);
          }
        }
        else
        {
          qword_140C4AB80 = BugCheckParameter4;
        }
        sub_1403AEF08(0xCDu, (int)sub_14051F660, 12, v5, -1LL);
        BYTE1(Pcr->HalReserved[5]) = 1;
        goto LABEL_8;
      }
      if ( qword_140C4AB80 == BugCheckParameter4 )
      {
LABEL_8:
        v9 = 0;
        v15 = 0;
        v17 = 0LL;
        v18 = 0;
        v12 = -1;
        v16 = v21;
        v8 = 1;
        v10 = 1;
        v11 = 16;
        v13 = 1;
        v14 = 4;
        v19 = 205;
        v20 = sub_1403B0D74(v4, 0xCDu);
        return sub_140251FD8(v4, (__int64)&v22, (__int64)&v8);
      }
      sub_14051E038(0, 36, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3443);
      return 3221226021LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
