/*
 * XREFs of sub_140A53F54 @ 0x140A53F54
 * Callers:
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     sub_140A629D4 @ 0x140A629D4 (sub_140A629D4.c)
 *     sub_140A6350C @ 0x140A6350C (sub_140A6350C.c)
 * Callees:
 *     sub_140396A68 @ 0x140396A68 (sub_140396A68.c)
 *     sub_1403B2F9C @ 0x1403B2F9C (sub_1403B2F9C.c)
 *     sub_1403B3020 @ 0x1403B3020 (sub_1403B3020.c)
 *     sub_1403B32E8 @ 0x1403B32E8 (sub_1403B32E8.c)
 *     sub_1403B3AE0 @ 0x1403B3AE0 (sub_1403B3AE0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 *     sub_14051E90C @ 0x14051E90C (sub_14051E90C.c)
 */

__int64 __fastcall sub_140A53F54(unsigned int a1, unsigned int a2, char a3, const void *a4)
{
  unsigned int v4; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // bp
  _BYTE *v11; // r14
  bool v12; // si
  char v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  int v17; // edx
  __int16 v18; // [rsp+60h] [rbp-8h]
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = a2;
  v4 = 0;
  if ( dword_140D014BC && dword_140C0BB30 >= (unsigned int)dword_140D014BC )
    return 2LL;
  v9 = (unsigned int)sub_1403B3AE0(a3, &v19);
  if ( byte_140C4C448 || (a3 & 2) != 0 )
  {
    byte_140C4E209 = 1;
    if ( (_DWORD)v9 == -1073740024 )
      goto LABEL_6;
  }
  else
  {
    byte_140C4E209 = 0;
  }
  if ( (int)v9 >= 0 )
  {
LABEL_6:
    byte_140C4E208 = (a3 & 4) != 0;
    v10 = sub_1403B32E8(v9, v8);
    v11 = BaseAddress;
    if ( !byte_140C4E20A || (a3 & 3) == 0 || (int)sub_140396A68() >= 0 )
    {
      v12 = 0;
      if ( !v10 )
      {
        _disable();
        v12 = (v18 & 0x200) != 0;
      }
      v13 = byte_140C4E208;
      v11[4] = 0;
      if ( (int)sub_1403B3020(a1, a4, v13) >= 0 )
      {
        if ( v10 )
        {
          v15 = sub_14051E90C(v19, v14, (__int64)v11);
        }
        else
        {
          v15 = -1073741823;
          if ( !*(_QWORD *)(qword_140C54A88 + 128) )
            goto LABEL_29;
          v15 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v19);
        }
        if ( v15 >= 0 )
        {
          v4 = sub_1403B2F9C(v11 + 4, v10);
          if ( v4 != 4 )
            sub_14051E038(qword_140C54A88, 14, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 0x4DCu);
          goto LABEL_17;
        }
LABEL_29:
        sub_14051E038(qword_140C54A88, 13, v15, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 0x4E2u);
        v4 = v17 - 11;
LABEL_17:
        if ( !v10 && v12 )
          _enable();
        goto LABEL_20;
      }
      v4 = 2;
    }
LABEL_20:
    byte_140C4E208 = 0;
    return v4;
  }
  return 2LL;
}
