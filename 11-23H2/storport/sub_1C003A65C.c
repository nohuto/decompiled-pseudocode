/*
 * XREFs of sub_1C003A65C @ 0x1C003A65C
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00AF4CC @ 0x1C00AF4CC (sub_1C00AF4CC.c)
 *     sub_1C00AF6D8 @ 0x1C00AF6D8 (sub_1C00AF6D8.c)
 *     sub_1C00AF8D0 @ 0x1C00AF8D0 (sub_1C00AF8D0.c)
 *     sub_1C00AFB40 @ 0x1C00AFB40 (sub_1C00AFB40.c)
 *     sub_1C00AFE68 @ 0x1C00AFE68 (sub_1C00AFE68.c)
 *     sub_1C00B013C @ 0x1C00B013C (sub_1C00B013C.c)
 *     sub_1C00B0368 @ 0x1C00B0368 (sub_1C00B0368.c)
 */

__int64 __fastcall sub_1C003A65C(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int *MasterIrp; // rdx
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  ULONG_PTR Length; // [rsp+38h] [rbp+18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = (unsigned int *)a2->AssociatedIrp.MasterIrp;
  v6 = -1073741811;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !MasterIrp )
    goto LABEL_24;
  if ( CurrentStackLocation->Parameters.Create.Options < 8 )
    goto LABEL_24;
  v7 = *MasterIrp;
  if ( *MasterIrp > 0x12 )
    goto LABEL_24;
  v8 = 391184;
  if ( !_bittest(&v8, v7) )
    goto LABEL_24;
  v9 = MasterIrp[1];
  if ( !v9 )
  {
    v10 = v7 - 4;
    if ( v10 )
    {
      v11 = v10 - 7;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  if ( v16 == 2 )
                  {
                    v6 = sub_1C00AFB40(a1, a2, &Length);
                    a2->IoStatus.Information = Length;
                    return sub_1C0003440(a2, 0, v6);
                  }
LABEL_25:
                  a2->IoStatus.Information = 0LL;
                  return sub_1C0003440(a2, 0, v6);
                }
                v17 = sub_1C00B013C(a1, a2, &Length);
              }
              else
              {
                v17 = sub_1C00AF4CC(a1, a2, &Length);
              }
            }
            else
            {
              v17 = sub_1C00AF8D0(a1, a2, &Length);
            }
          }
          else
          {
            v17 = sub_1C00AFE68(a1, a2, &Length);
          }
        }
        else
        {
          v17 = sub_1C00AF6D8(a1, a2, &Length);
        }
      }
      else
      {
        v17 = sub_1C00B0368(a1, a2, &Length);
      }
      v6 = v17;
      a2->IoStatus.Information = Length;
      return sub_1C0003440(a2, 0, v6);
    }
LABEL_24:
    v6 = -1073741808;
    goto LABEL_25;
  }
  if ( v9 != 1 )
    goto LABEL_24;
  v6 = 0;
  return sub_1C0003440(a2, 0, v6);
}
