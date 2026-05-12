/*
 * XREFs of sub_1C001E620 @ 0x1C001E620
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C001FA9C @ 0x1C001FA9C (sub_1C001FA9C.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

__int64 __fastcall sub_1C001E620(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  ULONG v3; // ebx
  unsigned int Options; // edi
  ULONG Length; // esi
  unsigned int v8; // r15d
  _DWORD *v9; // rax
  _DWORD *v10; // r14
  unsigned int v11; // edi
  ULONG v13; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = Options;
  if ( Options <= Length )
    v8 = CurrentStackLocation->Parameters.Read.Length;
  if ( v8 >= 0xFFFFFFE4 )
  {
    v11 = -1073741675;
  }
  else
  {
    v9 = (_DWORD *)sub_1C0007CF4(64LL, v8 + 28, 1918067026LL, *(_QWORD *)(a1 + 8));
    v10 = v9;
    if ( v9 )
    {
      v9[4] = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      *v9 = 8;
      v9[3] = *(_DWORD *)(a1 + 1320);
      v9[6] = v8;
      if ( Options )
        memmove(v9 + 7, a2->AssociatedIrp.MasterIrp, Options);
      v11 = sub_1C001FA9C(a1, (_DWORD)a2, (_DWORD)v10, v8 + 28, 0LL);
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      {
        if ( Length )
        {
          v13 = v10[6];
          if ( v13 )
          {
            if ( Length >= v13 )
              Length = v10[6];
            v3 = Length;
            memmove(a2->AssociatedIrp.MasterIrp, v10 + 7, Length);
          }
        }
      }
      ExFreePoolWithTag(v10, 0x72536152u);
    }
    else
    {
      v11 = -1073741670;
    }
  }
  a2->IoStatus.Information = v3;
  return sub_1C0003440(a2, 0, v11);
}
