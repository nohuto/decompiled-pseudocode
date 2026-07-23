/*
 * XREFs of sub_140A556B0 @ 0x140A556B0
 * Callers:
 *     <none>
 * Callees:
 *     RxInitializeTopLevelIrpPackage @ 0x1403BEAF0 (RxInitializeTopLevelIrpPackage.c)
 *     sub_1403BEC78 @ 0x1403BEC78 (sub_1403BEC78.c)
 *     sub_140A55C3C @ 0x140A55C3C (sub_140A55C3C.c)
 *     sub_140AF9A34 @ 0x140AF9A34 (sub_140AF9A34.c)
 */

__int64 __fastcall sub_140A556B0(int a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  v3 = 0;
  if ( a1 )
  {
    v4 = a1 - 12;
    if ( v4 )
    {
      v5 = v4 - 4;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          v3 = sub_140A55C3C(a3);
          if ( v3 >= 0 )
            off_140C020C0[0] = (__int64 (__fastcall *)())RtlCopyMemoryNonTemporal;
        }
      }
      else
      {
        sub_1403BEC78();
        qword_140C54AC0 = 0LL;
        qword_140C54AC8 = 0LL;
        dword_140C54AD0 = 0;
      }
    }
    else if ( byte_140C4BEF1 )
    {
      sub_140AF9A34(a3);
    }
  }
  else
  {
    v7 = *(_QWORD *)(a3 + 240);
    qword_140C54AC8 = 0LL;
    dword_140C54AD0 = 0;
    qword_140C54AC0 = a3;
    v8 = *(_QWORD *)(v7 + 2960);
    v9 = *(_QWORD *)(v7 + 2968);
    qword_140C54AB0 = v8;
    qword_140C54AA8 = v8 + v9;
    qword_140C54AB8 = v8 + v9 - 1;
    qword_140C01D68 = (__int64)sub_140509490;
    qword_140C01D70 = (__int64)sub_140509570;
    qword_140C54AA0 = v8;
    RxInitializeTopLevelIrpPackage();
  }
  return (unsigned int)v3;
}
