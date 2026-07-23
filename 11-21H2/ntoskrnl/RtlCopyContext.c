/*
 * XREFs of RtlCopyContext @ 0x140702F70
 * Callers:
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 *     sub_1409B4D94 @ 0x1409B4D94 (sub_1409B4D94.c)
 * Callees:
 *     sub_140246EB8 @ 0x140246EB8 (sub_140246EB8.c)
 *     sub_140294C0C @ 0x140294C0C (sub_140294C0C.c)
 *     sub_140294EBC @ 0x140294EBC (sub_140294EBC.c)
 *     sub_140297F80 @ 0x140297F80 (sub_140297F80.c)
 *     sub_1405E7C54 @ 0x1405E7C54 (sub_1405E7C54.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  M128A *v6; // rdi
  M128A *XmmRegisters; // rsi
  NTSTATUS result; // eax
  int v9; // edx
  int *v10; // rax
  int *v11; // r8
  int v12; // r12d
  int v13; // ebp
  ULONG v14; // ebp
  NTSTATUS v15; // ebx
  char v16; // bp
  int v17; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0;
  v19 = 0;
  v6 = 0LL;
  XmmRegisters = 0LL;
  result = sub_140297F80(ContextFlags, 0LL);
  if ( result >= 0 )
  {
    v18 = (_DWORD *)sub_140294C0C((__int64)Context, ContextFlags);
    v10 = (int *)sub_140294C0C((__int64)Source, v9);
    v12 = *v11;
    v13 = *v10;
    result = sub_140297F80(ContextFlags | *v10 | *v11, 0LL);
    if ( result >= 0 )
    {
      v14 = ContextFlags & v13;
      result = sub_140297F80(v14, &v17);
      if ( result >= 0 )
      {
        result = sub_140297F80(v12, &v19);
        v15 = result;
        if ( result >= 0 )
        {
          if ( (~v19 & v17) != 0 )
          {
            return -2147483643;
          }
          else
          {
            sub_140294EBC(1, (__int64)Context, v14, (__int64)Source);
            *v18 |= v12;
            if ( (v19 & 0xFFFFFFFE) != 0 )
            {
              if ( (v14 & 0x10000) != 0 )
              {
                XmmRegisters = (M128A *)((char *)&Source->1 + 460);
                v6 = (M128A *)((char *)&Context->1 + 460);
                if ( (v12 & 0x10020) != 65568 && (v14 & 0x10020) == 65568 )
                  *((_DWORD *)&Context->1 + 118) = 716;
              }
              else if ( (ContextFlags & 0x100000) != 0 )
              {
                XmmRegisters = (M128A *)&Source[1];
                v6 = (M128A *)&Context[1];
              }
              else if ( (ContextFlags & 0x200000) != 0 )
              {
                XmmRegisters = Source->FltSave.XmmRegisters;
                v6 = Context->FltSave.XmmRegisters;
              }
              else if ( (ContextFlags & 0x400000) != 0 )
              {
                XmmRegisters = &Source->VectorRegister[9];
                v6 = &Context->VectorRegister[9];
              }
            }
            v16 = v17;
            if ( (v17 & 2) == 0
              || (result = sub_140246EB8(1, (__int64)v6, (__int64)v6, (__int64)XmmRegisters, (__int64)XmmRegisters),
                  v15 = result,
                  result >= 0) )
            {
              if ( (v16 & 4) == 0 )
                return v15;
              result = sub_1405E7C54(1, (__int64)v6, (__int64)v6, (__int64)XmmRegisters, (__int64)XmmRegisters);
              v15 = result;
              if ( result >= 0 )
                return v15;
            }
          }
        }
      }
    }
  }
  return result;
}
