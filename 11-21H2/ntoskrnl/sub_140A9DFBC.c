/*
 * XREFs of sub_140A9DFBC @ 0x140A9DFBC
 * Callers:
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 *     sub_140A9D69C @ 0x140A9D69C (sub_140A9D69C.c)
 *     sub_140A9FBB0 @ 0x140A9FBB0 (sub_140A9FBB0.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x1402AA8A0 (KeExpandKernelStackAndCalloutEx.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     sub_1405E47F4 @ 0x1405E47F4 (sub_1405E47F4.c)
 *     sub_140A9DE70 @ 0x140A9DE70 (sub_140A9DE70.c)
 */

void __fastcall sub_140A9DFBC(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 *v8; // rdx
  __int128 Parameter; // [rsp+30h] [rbp-18h] BYREF

  Parameter = 0LL;
  if ( (dword_140C1AA7C & 0x1000) == 0 || a2 != 1850304854 )
  {
    if ( qword_140D575A8 )
    {
      if ( !sub_140359DE0(a1) )
      {
        v8 = (__int64 *)((char *)qword_140D575A8
                       + 424 * (_InterlockedIncrement(&dword_140D5760C) & (unsigned int)(dword_140D57518 - 1)));
        v8[2] = (__int64)KeGetCurrentThread();
        *v8 = a1;
        v8[1] = a3;
        *(_QWORD *)&Parameter = v8;
        DWORD2(Parameter) = a2;
        BYTE12(Parameter) = a4;
        if ( (dword_140C1AA7C & 2) == 0 )
        {
          if ( KeGetCurrentIrql() > 1u || (unsigned int)sub_1405E47F4() )
            sub_140A9DE70(&Parameter);
          else
            KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)sub_140A9DE70, &Parameter, 0xE30uLL, 1u, 0LL);
        }
      }
    }
  }
}
