/*
 * XREFs of sub_1403ED150 @ 0x1403ED150
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_1402585E8 @ 0x1402585E8 (sub_1402585E8.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     KeAreApcsDisabled @ 0x1402D61E0 (KeAreApcsDisabled.c)
 *     KeCheckProcessorGroupAffinity @ 0x140389050 (KeCheckProcessorGroupAffinity.c)
 *     sub_1403F966C @ 0x1403F966C (sub_1403F966C.c)
 *     sub_1403F974C @ 0x1403F974C (sub_1403F974C.c)
 *     sub_1403FA684 @ 0x1403FA684 (sub_1403FA684.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140459FFC @ 0x140459FFC (sub_140459FFC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140ACF0E0 @ 0x140ACF0E0 (sub_140ACF0E0.c)
 *     sub_140ACFC24 @ 0x140ACFC24 (sub_140ACFC24.c)
 *     sub_140AD049C @ 0x140AD049C (sub_140AD049C.c)
 *     sub_140AD0678 @ 0x140AD0678 (sub_140AD0678.c)
 *     sub_140AD0CE4 @ 0x140AD0CE4 (sub_140AD0CE4.c)
 *     sub_140AD1FE0 @ 0x140AD1FE0 (sub_140AD1FE0.c)
 *     sub_140AD1FF0 @ 0x140AD1FF0 (sub_140AD1FF0.c)
 *     sub_140AD2000 @ 0x140AD2000 (sub_140AD2000.c)
 *     sub_140AD2010 @ 0x140AD2010 (sub_140AD2010.c)
 *     sub_140AD2020 @ 0x140AD2020 (sub_140AD2020.c)
 *     sub_140AD2040 @ 0x140AD2040 (sub_140AD2040.c)
 *     sub_140AD2050 @ 0x140AD2050 (sub_140AD2050.c)
 *     sub_140AD2100 @ 0x140AD2100 (sub_140AD2100.c)
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 *     sub_140AD23C0 @ 0x140AD23C0 (sub_140AD23C0.c)
 *     sub_140AD25B8 @ 0x140AD25B8 (sub_140AD25B8.c)
 *     sub_140AD6FD0 @ 0x140AD6FD0 (sub_140AD6FD0.c)
 */

__int64 __fastcall sub_1403ED150(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rsi
  int v6; // eax
  int v7; // r14d
  int v8; // ecx
  int v9; // edi
  __int64 v10; // r14
  __int64 Pool2; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned int v15; // eax
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int128 v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // ecx
  int v27; // ecx
  unsigned int v28; // r10d
  __int64 v29; // rbx
  __int64 v30; // rdx
  int v31; // ecx
  unsigned int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // r10d
  __int64 v39; // r14
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rax
  unsigned __int128 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned int *v46; // rax
  int v47; // ecx
  unsigned __int64 v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // r12
  unsigned int v52; // r15d
  unsigned __int64 v53; // rbx
  unsigned int v54; // esi
  unsigned __int64 v55; // rax
  unsigned __int128 v56; // rax
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // r9
  char *v59; // r13
  __int64 v60; // r10
  int v61; // ecx
  __int64 v62; // rax
  int v63; // eax
  unsigned int v64; // r15d
  unsigned int v65; // r15d
  bool v66; // zf
  __int64 v67; // rdx
  int v68; // r10d
  unsigned __int64 v69; // rbx
  unsigned __int64 v70; // rsi
  __int64 v71; // r9
  const char *v72; // rsi
  __int64 v73; // r8
  __int64 v74; // r9
  const char *v75; // rax
  unsigned int v76; // r10d
  __int64 v77; // r14
  unsigned __int64 v78; // rbx
  unsigned int v79; // r11d
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rbx
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  unsigned __int64 i32; // rax
  unsigned int v86; // edx
  unsigned int v87; // ebx
  unsigned __int8 v88; // r15
  unsigned __int64 v89; // rsi
  __int64 v90; // r13
  unsigned __int64 v91; // r12
  unsigned __int64 v92; // r14
  int v93; // eax
  bool v94; // zf
  int v95; // edx
  __int64 v96; // rbx
  unsigned int *v97; // rbx
  unsigned __int64 v98; // r12
  unsigned __int64 v99; // r13
  __int64 v100; // r8
  _QWORD *v101; // r9
  const char *v102; // rax
  int v103; // r11d
  __int64 v104; // r15
  unsigned __int64 v105; // r14
  unsigned __int64 v106; // rsi
  unsigned int v107; // r10d
  __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rsi
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rdx
  __int64 v113; // rax
  unsigned __int64 i31; // rax
  unsigned int v115; // esi
  unsigned __int8 v116; // r12
  unsigned __int64 v117; // r14
  unsigned __int64 v118; // r13
  unsigned __int64 v119; // r15
  int v120; // eax
  int *v121; // rsi
  bool v122; // zf
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rbx
  unsigned __int16 v126; // dx
  _QWORD *v127; // rsi
  __int64 v128; // r8
  _QWORD *v129; // r9
  const char *v130; // rax
  int v131; // r10d
  __int64 v132; // r14
  unsigned __int64 v133; // rbx
  unsigned int v134; // r11d
  __int64 v135; // rax
  __int64 v136; // rbx
  unsigned __int128 v137; // rax
  __int64 v138; // r8
  unsigned __int64 v139; // rax
  __int64 v140; // rax
  unsigned __int64 i30; // rax
  unsigned int v142; // ebx
  __int64 v143; // rcx
  __int64 v144; // rdx
  unsigned __int8 v145; // r12
  unsigned __int64 v146; // rsi
  unsigned __int64 v147; // r13
  unsigned __int64 v148; // r14
  int v149; // eax
  __int64 v150; // r9
  __int64 v151; // rcx
  __int64 v152; // rcx
  unsigned int i29; // ebx
  __int64 v154; // rcx
  unsigned __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r9
  unsigned __int64 v158; // rdx
  unsigned __int64 v159; // r8
  unsigned __int64 v160; // r9
  int v161; // eax
  unsigned __int64 v162; // rax
  unsigned __int128 v163; // rax
  void (*v164)(void); // rax
  int v165; // r14d
  __int64 v166; // rbx
  unsigned int v167; // ecx
  unsigned __int8 v168; // si
  volatile signed __int8 **v169; // r8
  volatile signed __int8 *v170; // rdx
  unsigned __int64 v171; // r14
  __int64 v172; // r12
  unsigned __int64 v173; // r13
  __int64 *v174; // rax
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 *v177; // r15
  _BYTE *v178; // rbx
  char v179; // cl
  __int64 v180; // rdx
  int *v181; // rcx
  __int64 v182; // rcx
  __int64 v183; // rax
  bool v184; // zf
  int *v185; // rcx
  unsigned int v186; // eax
  void (*v187)(void); // rax
  int v188; // r13d
  __int64 v189; // rbx
  unsigned int v190; // ecx
  unsigned __int8 v191; // si
  __int64 v192; // r8
  __int64 v193; // r9
  _QWORD **v194; // r15
  _QWORD *v195; // r14
  unsigned __int64 v196; // rbx
  int *v197; // rcx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  _QWORD **v201; // r12
  _QWORD *v202; // r14
  unsigned __int8 v203; // r15
  int v204; // r13d
  int *v205; // rsi
  unsigned __int8 v206; // r15
  __int64 v207; // rcx
  char *v208; // rbx
  const char *v209; // rsi
  __int64 v210; // r8
  const char *v211; // rax
  unsigned int v212; // r10d
  __int64 v213; // r14
  unsigned __int64 v214; // rbx
  unsigned int v215; // r11d
  __int64 v216; // rax
  __int64 v217; // rbx
  unsigned __int64 v218; // rax
  __int64 v219; // rax
  unsigned __int64 i28; // rax
  unsigned int v221; // ebx
  __int64 v222; // rdx
  unsigned __int8 v223; // r12
  unsigned __int64 v224; // rsi
  unsigned __int64 v225; // r13
  int v226; // eax
  unsigned int v227; // edx
  __int64 v228; // r14
  int v229; // ecx
  __int64 v230; // rbx
  __int64 v231; // rsi
  unsigned __int64 v232; // rbx
  unsigned __int64 v233; // rsi
  __int64 v234; // r9
  int v235; // eax
  __int64 v236; // rcx
  unsigned __int8 v237; // r14
  __int64 v238; // rdx
  unsigned int *v239; // rcx
  unsigned int *v240; // rbx
  char v241; // r15
  unsigned __int64 v242; // r12
  __int64 v243; // r8
  __int64 *v244; // r9
  unsigned int *v245; // r10
  __int64 v246; // rcx
  __int64 v247; // rax
  __int64 v248; // rax
  ULONG_PTR v249; // rax
  __int64 v250; // rsi
  unsigned int *v251; // r12
  void (*v252)(void); // rax
  __int64 v253; // rbx
  unsigned int v254; // ecx
  void (__fastcall *v255)(__int64, _QWORD); // rax
  unsigned __int64 *v256; // r9
  __int64 v257; // r13
  unsigned __int64 v258; // r8
  __int64 v259; // rdx
  __int64 v260; // rax
  _QWORD **v261; // r15
  _QWORD *v262; // rsi
  unsigned int v263; // r13d
  unsigned __int8 v264; // r12
  unsigned int *v265; // r14
  char *v266; // rbx
  __int64 v267; // rcx
  unsigned int *v268; // r8
  int *v269; // rcx
  _QWORD **v270; // r10
  _QWORD *i20; // r9
  int v272; // r12d
  unsigned int *v273; // r13
  __int64 v274; // rbx
  void (*v275)(void); // rax
  unsigned int v276; // ecx
  unsigned __int8 v277; // r14
  volatile signed __int8 **v278; // r8
  volatile signed __int8 *v279; // rdx
  __int64 v280; // r9
  _QWORD **v281; // r15
  _QWORD *v282; // rsi
  __int64 v283; // rax
  int *v284; // r13
  char *v285; // rcx
  __int64 v286; // r8
  __int64 v287; // rdx
  __int64 v288; // rbx
  _QWORD **v289; // r15
  __int64 (*v290)(void); // rax
  __int64 v291; // rcx
  __int64 v292; // rdx
  unsigned int v293; // r13d
  unsigned int *v294; // rcx
  __int64 v295; // r12
  _QWORD *v296; // rax
  __int64 v297; // r8
  unsigned __int64 v298; // rax
  __int64 v299; // rcx
  int v300; // ebx
  unsigned __int64 v301; // rax
  unsigned __int128 v302; // rax
  unsigned __int64 v303; // rsi
  __int64 v304; // rax
  unsigned __int64 v305; // rdx
  unsigned __int64 v306; // r8
  __int64 v307; // r9
  __int64 v308; // r11
  int v309; // r10d
  unsigned __int64 *v310; // r9
  unsigned __int64 v311; // r8
  unsigned __int64 v312; // rax
  unsigned __int128 v313; // rax
  unsigned __int64 v314; // rax
  unsigned __int128 v315; // rax
  unsigned int v316; // ebx
  unsigned __int64 v317; // r9
  unsigned __int64 v318; // rax
  unsigned __int128 v319; // rax
  unsigned __int64 v320; // rax
  unsigned __int128 v321; // rax
  __int64 v322; // r14
  _QWORD *v323; // rbx
  __int64 v324; // rsi
  __int64 v325; // rax
  unsigned __int64 v326; // rsi
  unsigned int *v327; // r15
  unsigned __int64 v328; // rbx
  int v329; // ecx
  int *v330; // rcx
  unsigned __int64 v331; // rax
  unsigned __int128 v332; // rax
  int v333; // ecx
  int v334; // ecx
  int v335; // ecx
  char *v336; // rbx
  int i21; // r13d
  unsigned int v338; // esi
  __int64 v339; // r14
  __int64 v340; // r8
  __int64 v341; // r9
  _QWORD *v342; // rcx
  int v343; // edx
  char v344; // al
  __int64 v345; // rax
  __int64 v346; // rcx
  __int64 (__fastcall *v347)(_QWORD); // rax
  __int64 v348; // r14
  char *v349; // r12
  char *v350; // rbx
  int v351; // r15d
  __int64 v352; // rsi
  __int64 v353; // r8
  _QWORD *v354; // rcx
  int v355; // edx
  char v356; // al
  __int64 v357; // rax
  __int64 v358; // rax
  __int64 (__fastcall *v359)(__int64); // rax
  ULONG_PTR *v360; // rax
  ULONG_PTR v361; // r13
  int *v362; // rdx
  __int64 v363; // rax
  __int64 v364; // rax
  __int64 v365; // rax
  __int64 (__fastcall *v366)(ULONG_PTR, char *); // rax
  __int64 v367; // rax
  ULONG_PTR v368; // r15
  unsigned int v369; // r11d
  int v370; // r14d
  _DWORD *v371; // r12
  int v372; // ecx
  int *v373; // rax
  __int64 v374; // r8
  __int64 v375; // rdx
  unsigned int v376; // esi
  int v377; // r10d
  ULONG_PTR v378; // rbx
  __int64 v379; // r9
  int v380; // ecx
  int v381; // ecx
  int v382; // ecx
  int v383; // ecx
  __int64 v384; // rax
  int v385; // eax
  unsigned __int64 v386; // rcx
  __int64 v387; // r11
  int v388; // eax
  char **v389; // rbx
  int v390; // esi
  __int64 v391; // rcx
  __int64 v392; // rdx
  char *v393; // rdx
  __int64 v394; // r9
  ULONG_PTR v395; // rax
  __int64 v396; // rdx
  __int64 (__fastcall *v397)(ULONG_PTR, __int64, _QWORD, int *); // rax
  __int64 v398; // rdx
  __int64 (__fastcall *v399)(ULONG_PTR, __int64, __int64, int *); // rax
  __int64 v400; // rax
  __int64 v401; // rdx
  __int64 (__fastcall *v402)(ULONG_PTR, __int64, __int64, int *); // rax
  __int64 (__fastcall *v403)(ULONG_PTR); // rax
  __int64 v404; // rbx
  __int64 v405; // r8
  __int64 v406; // rax
  __int64 v407; // r8
  __int64 v408; // rsi
  int v409; // r9d
  unsigned int v410; // eax
  ULONG_PTR v411; // r14
  int v412; // ecx
  unsigned int v413; // eax
  __int64 v414; // r9
  _QWORD *v415; // rcx
  int v416; // r8d
  unsigned __int64 v417; // rdx
  int v418; // ebx
  __int64 v419; // r15
  ULONG_PTR *v420; // r13
  unsigned int *v421; // rdi
  __int64 v422; // r12
  __int64 v423; // rdx
  _QWORD *v424; // rsi
  int v425; // ecx
  _QWORD *v426; // rax
  _QWORD *v427; // r10
  const char *v428; // rax
  int v429; // r11d
  __int64 v430; // rbx
  unsigned __int64 v431; // r8
  unsigned int v432; // r9d
  __int64 v433; // rdx
  __int64 v434; // rax
  __int64 v435; // r8
  unsigned __int64 v436; // rcx
  unsigned int v437; // edx
  unsigned __int64 v438; // r9
  __int64 v439; // rax
  unsigned __int64 i23; // rax
  _DWORD *v441; // rbx
  ULONG_PTR v442; // r15
  int v443; // r13d
  int v444; // eax
  _BYTE *v445; // rsi
  unsigned int v446; // r9d
  _QWORD *v447; // r14
  unsigned int *v448; // r12
  int v449; // ecx
  _QWORD *v450; // rax
  __int64 v451; // rdx
  _QWORD *v452; // r10
  const char *v453; // rax
  int v454; // ebx
  __int64 v455; // r15
  unsigned __int64 v456; // rcx
  unsigned __int64 v457; // r8
  unsigned int v458; // r11d
  __int64 v459; // rdx
  unsigned __int64 v460; // rax
  __int64 v461; // r8
  unsigned __int64 v462; // rcx
  unsigned __int64 v463; // rdx
  __int64 v464; // rax
  unsigned __int64 i24; // rax
  _DWORD *v466; // rdx
  int v467; // r15d
  __int64 v468; // r14
  unsigned int v469; // eax
  _BYTE *v470; // rbx
  int v471; // ecx
  unsigned int v472; // eax
  __int64 v473; // r8
  int v474; // edx
  unsigned __int64 v475; // rcx
  int v476; // esi
  _BYTE *v477; // r14
  _QWORD *v478; // rax
  int v479; // ecx
  __int64 v480; // rdx
  const char *v481; // r12
  __int64 v482; // r15
  int v483; // r11d
  __int64 v484; // rsi
  const char *v485; // rax
  unsigned int v486; // r10d
  __int64 v487; // rdx
  unsigned __int64 v488; // rax
  __int64 v489; // r8
  unsigned __int64 v490; // rcx
  unsigned int v491; // edx
  unsigned __int64 v492; // r10
  __int64 v493; // rax
  unsigned __int64 i25; // rax
  __int64 v495; // rdx
  _DWORD *v496; // rsi
  ULONG_PTR v497; // r15
  __int64 v498; // r14
  __int64 v499; // rax
  int v500; // ecx
  _QWORD *v501; // rax
  _QWORD *v502; // rax
  ULONG_PTR v503; // rsi
  __int64 v504; // rax
  __int64 v505; // r8
  __int64 v506; // r14
  unsigned int v507; // r12d
  unsigned int *v508; // r15
  unsigned int v509; // r10d
  unsigned int v510; // ecx
  __int64 v511; // rax
  _DWORD *v512; // rdx
  unsigned int v513; // r13d
  unsigned int v514; // r13d
  unsigned int v515; // eax
  __int64 v516; // rax
  unsigned int v517; // esi
  unsigned int v518; // r12d
  unsigned int v519; // esi
  unsigned int *v520; // rax
  __int64 v521; // r9
  unsigned int *v522; // r14
  ULONG_PTR v523; // r8
  unsigned int *v524; // rax
  __int64 v525; // r8
  unsigned int v526; // eax
  __int64 v527; // r14
  _DWORD *v528; // r13
  int v529; // ecx
  __int64 v530; // rsi
  unsigned int v531; // eax
  _BYTE *v532; // r11
  int v533; // ecx
  unsigned int v534; // eax
  __int64 v535; // r8
  int v536; // edx
  unsigned __int64 v537; // rcx
  int v538; // ebx
  _BYTE *v539; // rdx
  _QWORD *v540; // rax
  int v541; // ecx
  __int64 v542; // r8
  unsigned int *v543; // rax
  unsigned __int64 v544; // rcx
  unsigned __int64 i26; // rax
  bool v546; // cl
  unsigned __int64 v547; // r15
  __int64 v548; // rax
  __int64 v549; // r8
  unsigned int *v550; // rax
  __int64 v551; // rdx
  _DWORD *v552; // rax
  unsigned int v553; // r10d
  __int64 v554; // rcx
  int v555; // r14d
  int v556; // eax
  __int16 v557; // ax
  int v558; // r10d
  unsigned __int8 *v559; // r8
  unsigned __int8 *v560; // r9
  __int64 *v561; // r11
  unsigned __int8 *v562; // rbx
  unsigned __int8 *v563; // rsi
  __int64 v564; // rdx
  __int64 v565; // rax
  unsigned int v566; // r8d
  __int64 *v567; // r9
  __int64 v568; // rcx
  __int64 v569; // rax
  __int64 v570; // rdx
  __int64 v571; // rax
  int v572; // r9d
  unsigned __int8 *v573; // r8
  __int64 v574; // rdx
  __int64 v575; // rax
  int v576; // r9d
  unsigned __int8 *v577; // r8
  __int64 v578; // rdx
  __int64 v579; // rax
  int v580; // ecx
  ULONG_PTR v581; // r9
  unsigned int v582; // esi
  __int64 v583; // r12
  unsigned int *v584; // r8
  unsigned int *v585; // rdx
  unsigned int v586; // esi
  unsigned int v587; // r13d
  unsigned int v588; // eax
  unsigned int v589; // r15d
  bool v590; // cf
  unsigned int *v591; // rdx
  unsigned __int64 v592; // rbx
  unsigned __int64 *v593; // r8
  unsigned __int64 v594; // r11
  unsigned int *v595; // rdx
  __int64 v596; // rax
  _QWORD *v597; // r10
  int v598; // r14d
  unsigned __int64 v599; // rsi
  const char *v600; // rax
  unsigned __int64 v601; // r8
  unsigned int v602; // r11d
  __int64 v603; // rdx
  __int64 v604; // rax
  __int64 v605; // r8
  unsigned __int64 v606; // rcx
  unsigned __int64 v607; // rdx
  __int64 v608; // rax
  unsigned __int64 v609; // rax
  unsigned int *v610; // r15
  unsigned int v611; // r12d
  char *v612; // rax
  char v613; // r8
  __int64 v614; // rbx
  ULONG_PTR v615; // rcx
  unsigned int *v616; // rdx
  unsigned __int64 v617; // rsi
  unsigned __int64 *v618; // r8
  unsigned __int64 v619; // rbx
  __int64 v620; // rax
  _QWORD *v621; // r11
  int v622; // r15d
  unsigned __int64 v623; // r14
  const char *v624; // rax
  unsigned __int64 v625; // r8
  unsigned int v626; // r10d
  __int64 v627; // rdx
  __int64 v628; // rax
  __int64 v629; // r8
  unsigned __int64 v630; // rcx
  unsigned __int64 v631; // rdx
  __int64 v632; // rax
  unsigned __int64 i27; // rax
  unsigned int *v634; // r15
  ULONG_PTR v635; // rbx
  unsigned int *v636; // rdx
  unsigned __int64 *v637; // r8
  __int64 v638; // rax
  unsigned int v639; // r9d
  unsigned __int64 v640; // rbx
  unsigned __int64 v641; // r11
  __int64 v642; // rax
  _QWORD *v643; // r10
  int v644; // r14d
  unsigned __int64 v645; // rsi
  const char *v646; // rax
  unsigned __int64 v647; // r8
  unsigned int v648; // r11d
  __int64 v649; // rdx
  __int64 v650; // rax
  __int64 v651; // r8
  unsigned __int64 v652; // rcx
  unsigned int v653; // r9d
  unsigned __int64 v654; // rdx
  __int64 v655; // rax
  unsigned __int64 v656; // rax
  __int64 v657; // r8
  char *v658; // rax
  _BYTE *v659; // rax
  char *v660; // rdx
  char *v661; // rbx
  __int64 v662; // r12
  int v663; // eax
  __int64 v664; // rdx
  __int64 v665; // rsi
  __int64 v666; // r14
  __int64 v667; // rax
  int v668; // edx
  char v669; // al
  __int64 v670; // rax
  __int64 v671; // rax
  char *v672; // rbx
  unsigned __int8 v673; // r14
  __int64 i22; // rsi
  __int64 v675; // r8
  __int64 v676; // r9
  _QWORD *v677; // rcx
  int v678; // edx
  char v679; // al
  __int64 v680; // rax
  __int64 v681; // rax
  char *v682; // rbx
  __int64 v683; // r8
  __int64 v684; // r9
  _QWORD *v685; // rcx
  int v686; // edx
  char v687; // al
  __int64 v688; // rax
  __int64 v689; // rax
  __int64 v690; // rsi
  int v691; // eax
  int v692; // ebx
  unsigned __int64 v693; // rbx
  _BYTE *v694; // rcx
  __int64 v695; // rdx
  __int64 v696; // rax
  __int64 v697; // r14
  __int64 v698; // rsi
  unsigned __int64 v699; // rax
  __int64 v700; // r8
  __int64 v701; // r9
  __int64 v702; // rcx
  unsigned __int64 v703; // rbx
  unsigned __int64 v704; // rcx
  _QWORD *v705; // rsi
  __int64 v706; // r8
  _QWORD *v707; // r9
  const char *v708; // rax
  unsigned int v709; // r11d
  __int64 v710; // r14
  unsigned __int64 v711; // rbx
  unsigned int v712; // r10d
  __int64 v713; // rdx
  __int64 v714; // rax
  __int64 v715; // rbx
  unsigned __int64 v716; // rdx
  __int64 v717; // rax
  unsigned __int64 i19; // rax
  unsigned int v719; // ebx
  __int64 v720; // rdx
  unsigned __int8 v721; // r15
  unsigned __int64 v722; // rsi
  __int64 v723; // r13
  unsigned __int64 v724; // r12
  unsigned __int64 v725; // r14
  int v726; // eax
  __int64 *v727; // r9
  unsigned __int64 *v728; // r10
  __int64 v729; // rax
  __int64 v730; // rdx
  __int64 v731; // rax
  __int64 v732; // rdx
  unsigned __int8 v733; // r14
  unsigned __int64 v734; // rbx
  __int64 v735; // r12
  unsigned __int64 v736; // r15
  unsigned __int64 v737; // rsi
  int v738; // eax
  __int64 v739; // r8
  __int16 v740; // ax
  __int64 v741; // rcx
  int (__fastcall *v742)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *); // rax
  __int64 v743; // rcx
  __int64 (*v744)(void); // rax
  __int64 v745; // rax
  __int64 (*v746)(void); // rax
  __int64 v747; // rax
  unsigned int v748; // r10d
  unsigned __int8 v749; // dl
  __int64 v750; // r15
  _QWORD *v751; // rsi
  __int64 v752; // r9
  _QWORD *v753; // r10
  const char *v754; // rax
  int v755; // ebx
  __int64 v756; // r14
  unsigned int v757; // r11d
  __int64 v758; // rdx
  unsigned __int64 v759; // rax
  __int64 v760; // r8
  unsigned __int64 v761; // rcx
  unsigned int v762; // r9d
  unsigned __int64 v763; // rdx
  unsigned __int8 v764; // dl
  __int64 v765; // rax
  unsigned __int64 i17; // rax
  unsigned int v767; // r10d
  unsigned int *v768; // rsi
  unsigned int *v769; // r9
  unsigned int v770; // ebx
  const char *v771; // rax
  __int64 v772; // r14
  unsigned int v773; // r11d
  __int64 v774; // rdx
  unsigned __int64 v775; // rax
  __int64 v776; // r8
  unsigned int v777; // r10d
  unsigned __int64 v778; // rdx
  __int64 v779; // rax
  unsigned __int64 i18; // rax
  __int64 v781; // rax
  _QWORD *v782; // rcx
  int v783; // edx
  char v784; // al
  __int64 v785; // rax
  _QWORD *v786; // rsi
  _QWORD *v787; // r9
  int v788; // r11d
  const char *v789; // rax
  __int64 v790; // r14
  unsigned __int64 v791; // rbx
  unsigned int v792; // r10d
  __int64 v793; // rdx
  __int64 v794; // rax
  __int64 v795; // rbx
  unsigned __int64 v796; // rcx
  __int64 v797; // r8
  unsigned __int64 v798; // rdx
  __int64 v799; // rax
  unsigned __int64 i15; // rax
  unsigned int v801; // ebx
  __int64 v802; // rcx
  __int64 v803; // rdx
  unsigned __int8 v804; // r12
  unsigned __int64 v805; // rsi
  unsigned __int64 v806; // r13
  unsigned __int64 v807; // r14
  int v808; // eax
  unsigned int v809; // r9d
  unsigned int *v810; // r10
  unsigned int v811; // r11d
  const char *v812; // rax
  __int64 v813; // r14
  unsigned int v814; // ebx
  __int64 v815; // rdx
  unsigned __int64 v816; // rax
  __int64 v817; // r8
  unsigned __int64 v818; // rdx
  __int64 v819; // rax
  unsigned __int64 i16; // rax
  __int64 v821; // rcx
  __int64 v822; // rax
  const char *v823; // rsi
  __int64 v824; // r8
  __int64 v825; // r9
  const char *v826; // rax
  int v827; // r10d
  __int64 m; // r14
  unsigned __int64 v829; // rbx
  unsigned int v830; // r11d
  __int64 v831; // rax
  __int64 v832; // rbx
  unsigned __int128 v833; // rax
  char v834; // r10
  __int64 v835; // rdx
  __int64 v836; // r8
  unsigned __int64 v837; // rax
  __int64 v838; // rax
  unsigned __int64 n; // rax
  unsigned int v840; // ebx
  __int64 v841; // rcx
  unsigned __int8 v842; // r12
  unsigned __int64 v843; // rsi
  unsigned __int64 v844; // r13
  unsigned __int64 v845; // r14
  int v846; // eax
  __int64 v847; // rcx
  __int64 v848; // rcx
  unsigned __int8 v849; // r14
  __int64 v850; // rdx
  unsigned int *v851; // rcx
  unsigned int *v852; // rbx
  char v853; // r15
  unsigned __int64 v854; // r12
  __int64 v855; // r8
  __int64 *v856; // r9
  unsigned int *v857; // r10
  __int64 v858; // rcx
  __int64 v859; // rax
  __int64 v860; // rax
  __int64 v861; // r8
  __int64 v862; // r9
  __int64 v863; // rcx
  unsigned __int8 v864; // r14
  unsigned int *v865; // rcx
  unsigned __int64 v866; // rax
  unsigned __int64 v867; // rsi
  unsigned __int64 v868; // rcx
  unsigned __int64 v869; // rdx
  unsigned int v870; // eax
  int v871; // edx
  unsigned __int64 v872; // rbx
  unsigned __int64 v873; // rsi
  int *v874; // rsi
  int v875; // eax
  __int64 v876; // rbx
  __int64 v877; // rdx
  __int64 v878; // rax
  const char *v879; // rsi
  __int64 v880; // r8
  const char *v881; // rax
  int v882; // r10d
  __int64 mm; // r14
  unsigned __int64 v884; // rbx
  unsigned int v885; // r11d
  __int64 v886; // rdx
  __int64 v887; // rax
  __int64 v888; // rbx
  unsigned __int64 v889; // rcx
  unsigned __int64 v890; // rdx
  __int64 v891; // rax
  unsigned __int64 nn; // rax
  unsigned int v893; // edx
  unsigned int v894; // ebx
  __int64 v895; // rcx
  unsigned __int8 v896; // r15
  unsigned __int64 v897; // rsi
  __int64 v898; // r13
  unsigned __int64 v899; // r12
  unsigned __int64 v900; // r14
  int v901; // eax
  __int64 v902; // rax
  __int64 v903; // rcx
  const char *v904; // rsi
  __int64 v905; // r8
  const char *v906; // rax
  int v907; // r10d
  __int64 i1; // r14
  unsigned __int64 v909; // rbx
  unsigned int v910; // r11d
  __int64 v911; // rax
  __int64 v912; // rbx
  unsigned __int128 v913; // rax
  unsigned __int64 v914; // rax
  __int64 v915; // rax
  unsigned __int64 i2; // rax
  __int64 v917; // rcx
  __int64 v918; // rdx
  unsigned __int8 v919; // r12
  unsigned __int64 v920; // rsi
  unsigned __int64 v921; // r13
  int v922; // eax
  __int64 v923; // rdx
  __int64 v924; // rax
  int v925; // eax
  __int64 v926; // rbx
  __int64 (__fastcall *v927)(_QWORD); // rax
  unsigned int v928; // r12d
  __int64 v929; // rax
  __int64 v930; // r14
  char *v931; // rsi
  unsigned __int64 v932; // rbx
  __int64 v933; // r8
  __int64 v934; // r9
  char v935; // r13
  int *v936; // r12
  __int64 v937; // r12
  unsigned __int64 v938; // rbx
  int *v939; // r15
  unsigned __int64 *v940; // rax
  unsigned __int64 *v941; // rbx
  unsigned __int64 v942; // rcx
  _QWORD *v943; // r12
  unsigned __int8 v944; // r12
  __int64 v945; // r13
  __int64 v946; // rdx
  unsigned __int64 v947; // r15
  unsigned __int64 v948; // rcx
  __int64 v949; // r8
  _QWORD *v950; // rcx
  int v951; // edx
  char v952; // al
  char *v953; // rsi
  unsigned __int64 v954; // rbx
  __int64 v955; // r8
  __int64 v956; // r9
  char v957; // r13
  int *v958; // r12
  __int64 v959; // r12
  unsigned __int64 v960; // rbx
  char v961; // al
  int *v962; // r15
  unsigned __int64 *v963; // rax
  unsigned __int64 *v964; // rbx
  unsigned __int64 v965; // rcx
  unsigned __int8 v966; // r12
  __int64 v967; // r13
  __int64 v968; // rdx
  unsigned __int64 v969; // r15
  unsigned __int64 v970; // rcx
  __int64 v971; // r8
  _QWORD *v972; // rcx
  int v973; // edx
  char v974; // al
  __int64 (__fastcall *v975)(__int64); // rax
  __int64 v976; // r15
  unsigned __int64 v977; // rbx
  unsigned int v978; // r13d
  __int64 v979; // rax
  __int64 v980; // rdx
  __int64 v981; // r9
  __int64 v982; // r8
  int *v983; // r14
  char v984; // si
  char v985; // r12
  __int64 v986; // r14
  unsigned __int64 v987; // rbx
  char v988; // al
  int *v989; // rsi
  unsigned __int64 *v990; // rax
  unsigned __int64 *v991; // rbx
  unsigned __int64 v992; // rcx
  _QWORD *v993; // r14
  __int64 v994; // r12
  char *v995; // r14
  __int64 v996; // rdx
  unsigned __int64 v997; // rsi
  unsigned __int64 v998; // rcx
  __int64 v999; // r8
  _QWORD *v1000; // rcx
  int v1001; // edx
  char v1002; // al
  unsigned __int64 v1003; // rcx
  unsigned int *v1004; // r9
  unsigned int *v1005; // rbx
  unsigned __int64 v1006; // r10
  char *v1007; // r14
  unsigned int v1008; // r11d
  unsigned __int64 v1009; // rdx
  unsigned int v1010; // eax
  unsigned __int64 v1011; // r12
  __int64 v1012; // r9
  _QWORD *v1013; // r10
  int v1014; // ebx
  const char *v1015; // rax
  unsigned __int64 v1016; // rsi
  __int64 v1017; // r15
  unsigned __int64 v1018; // r8
  unsigned int v1019; // r11d
  __int64 v1020; // rdx
  __int64 v1021; // rax
  __int64 v1022; // r8
  unsigned __int64 v1023; // rcx
  __int64 v1024; // r9
  unsigned __int64 v1025; // rdx
  __int64 v1026; // rax
  unsigned __int64 j; // rax
  unsigned int v1028; // r13d
  unsigned __int8 v1029; // r14
  unsigned __int64 v1030; // rbx
  __int64 v1031; // r12
  unsigned __int64 v1032; // r15
  unsigned __int64 v1033; // rsi
  int v1034; // eax
  __int64 v1035; // rcx
  unsigned __int64 v1036; // rax
  __int64 v1037; // rcx
  unsigned int *v1038; // rdx
  __int64 v1039; // r15
  unsigned __int64 v1040; // r14
  __int64 v1041; // r8
  _QWORD *v1042; // r9
  int v1043; // r10d
  const char *v1044; // rax
  unsigned __int64 v1045; // rsi
  __int64 v1046; // r12
  unsigned __int64 v1047; // rbx
  unsigned int v1048; // r11d
  __int64 v1049; // rax
  __int64 v1050; // rbx
  unsigned __int128 v1051; // rax
  unsigned __int64 v1052; // rax
  __int64 v1053; // rax
  unsigned __int64 k; // rax
  unsigned int v1055; // ecx
  unsigned int v1056; // ebx
  unsigned __int8 v1057; // r15
  unsigned __int64 v1058; // rsi
  __int64 v1059; // r13
  unsigned __int64 v1060; // r12
  unsigned __int64 v1061; // r14
  int v1062; // eax
  unsigned int *v1063; // rcx
  __int64 v1064; // rax
  _QWORD *v1065; // rsi
  __int64 v1066; // r8
  _QWORD *v1067; // r9
  const char *v1068; // rax
  unsigned int v1069; // r10d
  __int64 v1070; // r14
  unsigned __int64 v1071; // rbx
  unsigned int v1072; // r11d
  __int64 v1073; // rax
  __int64 v1074; // rbx
  unsigned __int64 v1075; // rax
  __int64 v1076; // rax
  unsigned __int64 i; // rax
  unsigned int v1078; // ebx
  __int64 v1079; // rdx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v1081; // rsi
  unsigned __int64 v1082; // r13
  unsigned __int64 v1083; // r14
  int v1084; // eax
  int v1085; // r12d
  __int64 **v1086; // r15
  unsigned int v1087; // eax
  __int64 v1088; // r13
  char *v1089; // rbx
  __int64 v1090; // r14
  __int64 v1091; // rsi
  __int64 v1092; // r8
  _QWORD *v1093; // rcx
  int v1094; // edx
  char v1095; // al
  __int64 v1096; // rax
  __int64 v1097; // rax
  const char *v1098; // rsi
  __int64 v1099; // r8
  __int64 v1100; // r9
  const char *v1101; // rax
  unsigned int v1102; // r10d
  __int64 v1103; // r14
  unsigned __int64 v1104; // rbx
  unsigned int v1105; // r11d
  __int64 v1106; // rax
  __int64 v1107; // rbx
  unsigned __int64 v1108; // rax
  __int64 v1109; // rax
  unsigned __int64 i4; // rax
  unsigned int v1111; // ebx
  __int64 v1112; // rdx
  unsigned __int8 v1113; // r12
  unsigned __int64 v1114; // rsi
  unsigned __int64 v1115; // r13
  unsigned __int64 v1116; // r14
  int v1117; // eax
  __int64 v1118; // rax
  __int64 v1119; // rcx
  unsigned int v1120; // edx
  unsigned __int64 v1121; // rbx
  unsigned __int64 v1122; // rsi
  __int64 v1123; // r9
  const char *v1124; // rsi
  __int64 v1125; // r8
  const char *v1126; // rax
  unsigned int v1127; // r10d
  __int64 v1128; // r14
  unsigned __int64 v1129; // rbx
  unsigned int v1130; // r11d
  __int64 v1131; // rax
  __int64 v1132; // rbx
  unsigned __int64 v1133; // rax
  __int64 v1134; // rax
  unsigned __int64 i5; // rax
  unsigned int v1136; // edx
  unsigned int v1137; // ebx
  unsigned __int8 v1138; // r15
  unsigned __int64 v1139; // rsi
  __int64 v1140; // r13
  unsigned __int64 v1141; // r12
  int v1142; // eax
  __int64 v1143; // rsi
  __int64 v1144; // rcx
  int v1145; // eax
  __int64 v1146; // rcx
  unsigned int v1147; // ebx
  bool i3; // zf
  _QWORD *v1149; // rcx
  int v1150; // edx
  char v1151; // al
  int v1152; // esi
  __int64 v1153; // r14
  unsigned int v1154; // ecx
  char v1155; // bl
  volatile signed __int8 **v1156; // r8
  volatile signed __int8 *v1157; // rdx
  unsigned __int8 v1158; // bl
  unsigned int v1159; // eax
  int v1160; // edx
  unsigned __int64 v1161; // rbx
  unsigned __int64 v1162; // rsi
  __int64 v1163; // r9
  const char *v1164; // rsi
  __int64 v1165; // r8
  __int64 v1166; // r9
  const char *v1167; // rax
  int v1168; // r11d
  __int64 i6; // r14
  unsigned __int64 v1170; // rbx
  unsigned int v1171; // r10d
  __int64 v1172; // rdx
  __int64 v1173; // rax
  __int64 v1174; // rbx
  __int64 v1175; // rcx
  unsigned __int64 v1176; // rdx
  __int64 v1177; // rax
  unsigned __int64 i7; // rax
  unsigned int v1179; // edx
  unsigned int v1180; // ebx
  __int64 v1181; // rcx
  unsigned __int8 v1182; // r15
  unsigned __int64 v1183; // rsi
  __int64 v1184; // r13
  unsigned __int64 v1185; // r12
  unsigned __int64 v1186; // r14
  int v1187; // eax
  __int64 v1188; // r13
  __int64 v1189; // rax
  _DWORD *v1190; // r14
  unsigned int v1191; // r15d
  int v1192; // esi
  __int64 v1193; // rcx
  const char *v1194; // rsi
  __int64 v1195; // r8
  const char *v1196; // rax
  int v1197; // r11d
  __int64 i8; // r14
  unsigned __int64 v1199; // rbx
  unsigned int v1200; // r10d
  __int64 v1201; // rdx
  __int64 v1202; // rax
  __int64 v1203; // rbx
  __int64 v1204; // rcx
  unsigned __int64 v1205; // rdx
  __int64 v1206; // rax
  unsigned __int64 i9; // rax
  unsigned int v1208; // ebx
  __int64 v1209; // rcx
  __int64 v1210; // rdx
  unsigned __int8 v1211; // r12
  unsigned __int64 v1212; // rsi
  unsigned __int64 v1213; // r13
  int v1214; // eax
  unsigned int v1215; // eax
  unsigned int v1216; // r11d
  unsigned int v1217; // r12d
  int v1218; // eax
  __int16 v1219; // ax
  char *v1220; // r8
  int v1221; // r10d
  unsigned __int8 *v1222; // r9
  __int64 v1223; // rdx
  __int64 v1224; // rax
  __int64 *v1225; // r9
  unsigned int v1226; // r8d
  unsigned __int64 *v1227; // r10
  __int64 v1228; // rax
  __int64 v1229; // rdx
  __int64 v1230; // rax
  unsigned __int8 *v1231; // r8
  int v1232; // r10d
  unsigned __int8 *v1233; // r9
  __int64 v1234; // rdx
  __int64 v1235; // rax
  unsigned __int8 *v1236; // r8
  int v1237; // r10d
  unsigned __int8 *v1238; // r9
  __int64 v1239; // rdx
  __int64 v1240; // rax
  int v1241; // eax
  __int64 v1242; // rbx
  int v1243; // eax
  __int64 v1244; // r9
  int v1245; // eax
  ULONG_PTR v1246; // rcx
  unsigned __int8 v1247; // bl
  __int64 v1248; // rdx
  int v1249; // eax
  unsigned __int64 v1250; // rbx
  unsigned __int64 v1251; // rsi
  __int64 v1252; // r8
  __int64 v1253; // r9
  const char *v1254; // r11
  __int64 v1255; // r8
  __int64 v1256; // r9
  const char *v1257; // rax
  int v1258; // esi
  __int64 i10; // r14
  unsigned __int64 v1260; // rbx
  unsigned int v1261; // r10d
  __int64 v1262; // rdx
  __int64 v1263; // rax
  __int64 v1264; // rbx
  __int64 v1265; // rcx
  unsigned int v1266; // r8d
  unsigned __int64 v1267; // rdx
  __int64 v1268; // rax
  unsigned __int64 i11; // rax
  unsigned int v1270; // edx
  unsigned int v1271; // ebx
  __int64 v1272; // rcx
  __int64 v1273; // r8
  unsigned __int8 v1274; // r15
  unsigned __int64 v1275; // rsi
  __int64 v1276; // r13
  unsigned __int64 v1277; // r12
  unsigned __int64 v1278; // r14
  int v1279; // eax
  unsigned __int64 v1280; // rcx
  const char *v1281; // rsi
  __int64 v1282; // r8
  const char *v1283; // rax
  int v1284; // r11d
  __int64 i12; // r14
  unsigned __int64 v1286; // rbx
  unsigned int v1287; // r10d
  __int64 v1288; // rdx
  __int64 v1289; // rax
  __int64 v1290; // rbx
  __int64 v1291; // rcx
  unsigned __int64 v1292; // rdx
  __int64 v1293; // rax
  unsigned __int64 i13; // rax
  __int64 v1295; // rcx
  __int64 v1296; // rdx
  unsigned __int8 v1297; // r12
  unsigned __int64 v1298; // rsi
  unsigned __int64 v1299; // r13
  int v1300; // eax
  __int64 v1301; // rcx
  int *v1302; // r13
  int *v1303; // r12
  unsigned int *v1304; // rbx
  unsigned int *v1305; // rsi
  __int64 v1306; // rdx
  unsigned __int64 v1307; // r15
  unsigned int v1308; // r14d
  int v1309; // r10d
  const char *v1310; // rax
  __int64 v1311; // r11
  unsigned __int64 v1312; // rcx
  unsigned __int64 v1313; // r13
  unsigned __int64 v1314; // r9
  __int64 v1315; // rdx
  __int64 v1316; // rax
  __int64 v1317; // r13
  unsigned __int64 v1318; // rcx
  unsigned int v1319; // edx
  __int64 v1320; // rax
  unsigned __int64 i14; // rax
  unsigned int v1322; // r13d
  unsigned int v1323; // eax
  _BYTE *v1324; // rsi
  char *v1325; // rbx
  char v1326; // cl
  volatile signed __int32 *v1327; // rcx
  struct _KPRCB *v1328; // rdx
  __int64 v1329; // r8
  int v1330; // ecx
  struct _KPRCB *v1331; // rax
  unsigned __int64 v1332; // rcx
  int *v1333; // rcx
  __int64 v1334; // rdx
  unsigned __int8 v1335; // r14
  unsigned __int64 v1336; // rbx
  __int64 v1337; // r12
  unsigned __int64 v1338; // r15
  unsigned __int64 v1339; // rsi
  int v1340; // eax
  bool v1341; // zf
  __int64 v1342; // rax
  __int64 v1343; // rcx
  __int64 v1344; // rcx
  unsigned __int8 v1345; // r14
  __int64 v1346; // rdx
  unsigned int *v1347; // rcx
  unsigned int *v1348; // rbx
  char v1349; // r15
  unsigned __int64 v1350; // r12
  __int64 v1351; // r8
  __int64 *v1352; // r9
  unsigned int *v1353; // r10
  __int64 v1354; // rcx
  __int64 v1355; // rax
  __int64 v1356; // rax
  __int64 v1357; // r9
  __int64 v1358; // r9
  _QWORD *v1359; // rbx
  int v1360; // r11d
  _QWORD *v1361; // r10
  __int64 v1362; // r14
  const char *v1363; // rax
  unsigned int v1364; // esi
  __int64 v1365; // rax
  __int64 v1366; // r8
  unsigned __int128 v1367; // rax
  unsigned __int64 v1368; // rax
  __int64 v1369; // rax
  int v1370; // eax
  int v1371; // r10d
  int v1372; // r10d
  __int64 v1373; // rbx
  unsigned int v1374; // ebx
  __int64 v1375; // rax
  unsigned int v1376; // esi
  unsigned __int64 v1377; // rax
  __int64 v1378; // r9
  __int64 v1379; // rdx
  int v1380; // ecx
  _QWORD *v1381; // rax
  __int64 v1382; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v1384; // rcx
  unsigned __int64 v1385; // rdx
  unsigned __int64 v1386; // rdx
  _QWORD *v1387; // r14
  __int64 v1388; // rsi
  __int64 v1389; // rdx
  __int64 v1390; // r8
  int v1391; // ecx
  _QWORD *v1392; // rax
  unsigned __int64 v1393; // rcx
  __int64 v1394; // r15
  unsigned __int16 v1395; // ax
  unsigned __int64 v1396; // rdx
  __int64 v1397; // r9
  unsigned __int16 v1398; // r12
  __int64 v1399; // r11
  _QWORD *v1400; // r8
  const char *v1401; // rcx
  unsigned __int64 v1402; // rbx
  unsigned int v1403; // r10d
  __int64 v1404; // rdx
  __int64 v1405; // rax
  __int64 v1406; // rbx
  unsigned __int64 v1407; // rcx
  unsigned int v1408; // esi
  __int64 v1409; // rax
  unsigned __int64 ii; // rax
  unsigned int v1411; // ebx
  __int64 v1412; // r9
  _QWORD *v1413; // rcx
  int v1414; // edx
  char v1415; // al
  int v1416; // eax
  __int64 v1417; // rdx
  void (__fastcall *v1418)(_BYTE *, __int64); // rax
  unsigned int v1419; // r10d
  __int64 v1420; // rcx
  unsigned int *v1421; // r8
  __int64 v1422; // rsi
  unsigned __int64 v1423; // r13
  __int64 v1424; // r12
  __int64 v1425; // r15
  unsigned __int8 v1426; // r14
  __int16 v1427; // r9
  int v1428; // eax
  __int64 v1429; // rcx
  unsigned __int64 v1430; // rbx
  __int64 v1431; // rdx
  unsigned int *v1432; // r15
  __int64 v1433; // rax
  __int64 v1434; // rax
  __int64 v1435; // r12
  __int64 v1436; // rax
  unsigned int *v1437; // rax
  __int64 v1438; // rcx
  unsigned __int64 v1439; // rbx
  unsigned __int64 v1440; // rdx
  struct _KPRCB *v1441; // r8
  _QWORD *v1442; // r14
  _QWORD *v1443; // r8
  int v1444; // ebx
  const char *v1445; // rax
  int v1446; // r10d
  __int64 v1447; // r11
  int v1448; // r9d
  unsigned __int64 v1449; // rsi
  __int64 v1450; // rdx
  __int64 v1451; // rax
  __int64 *v1452; // r8
  __int64 v1453; // rsi
  unsigned __int64 v1454; // rcx
  int v1455; // r15d
  int v1456; // edx
  __int64 v1457; // r9
  __int64 v1458; // rax
  unsigned __int64 jj; // rax
  unsigned int *v1460; // rax
  __int64 v1461; // rax
  unsigned int v1462; // esi
  _QWORD *v1463; // rdx
  int v1464; // r9d
  unsigned __int64 v1465; // rbx
  const char *v1466; // rax
  __int64 v1467; // rax
  int v1468; // r8d
  __int64 v1469; // rax
  unsigned __int64 kk; // rax
  unsigned int v1471; // ebx
  __int64 v1472; // r9
  __int64 v1473; // rdx
  unsigned __int64 v1474; // rcx
  __int64 v1475; // rax
  __int64 v1476; // rdx
  int v1477; // eax
  __int64 v1478; // rbx
  __int64 v1479; // rbx
  int v1480; // eax
  __int64 v1481; // r12
  __int64 v1482; // r13
  __int64 v1483; // rbx
  __int64 v1484; // rsi
  struct _KPRCB *v1485; // rdx
  unsigned __int64 v1486; // r11
  unsigned __int64 v1487; // rdi
  __int64 v1488; // r14
  unsigned __int64 v1489; // r15
  PSLIST_ENTRY v1490; // r10
  unsigned int v1491; // r8d
  PSLIST_ENTRY v1492; // r9
  unsigned __int64 v1493; // rsi
  _QWORD *v1494; // rdx
  unsigned __int64 v1495; // rcx
  unsigned __int64 v1496; // rax
  __int64 v1497; // rbx
  _QWORD *v1498; // rcx
  char *Next; // r8
  int v1500; // r10d
  signed __int64 v1501; // r8
  unsigned int v1502; // ebx
  unsigned int v1503; // ebx
  unsigned __int8 EffectiveIrql; // al
  unsigned int v1505; // ebx
  unsigned __int8 v1506; // al
  unsigned int v1507; // ebx
  unsigned __int8 v1508; // al
  int v1509; // ecx
  int v1510; // ecx
  int v1511; // ecx
  int v1512; // ecx
  int v1513; // ecx
  volatile signed __int32 *v1514; // rax
  unsigned int v1515; // ebx
  unsigned __int8 v1516; // al
  signed __int32 v1517[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v1518; // [rsp+28h] [rbp-D8h]
  __int64 *v1519; // [rsp+38h] [rbp-C8h]
  int *v1520; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v1521; // [rsp+58h] [rbp-A8h]
  unsigned int v1522; // [rsp+60h] [rbp-A0h]
  unsigned int *v1523; // [rsp+68h] [rbp-98h]
  __int64 v1524; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  __int64 v1526; // [rsp+80h] [rbp-80h]
  int v1527; // [rsp+88h] [rbp-78h]
  unsigned int *v1528; // [rsp+90h] [rbp-70h]
  unsigned int *v1529; // [rsp+98h] [rbp-68h]
  unsigned __int8 v1530; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int8 v1531; // [rsp+A1h] [rbp-5Fh] BYREF
  char v1532[2]; // [rsp+A2h] [rbp-5Eh] BYREF
  int v1533; // [rsp+A4h] [rbp-5Ch]
  unsigned int *v1534; // [rsp+A8h] [rbp-58h]
  int v1535; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v1536; // [rsp+B8h] [rbp-48h]
  __int64 v1537; // [rsp+C0h] [rbp-40h]
  __int64 v1538; // [rsp+C8h] [rbp-38h]
  unsigned int v1539; // [rsp+D0h] [rbp-30h]
  int v1540; // [rsp+D4h] [rbp-2Ch]
  char *v1541; // [rsp+D8h] [rbp-28h]
  __int64 v1542; // [rsp+E0h] [rbp-20h] BYREF
  PSLIST_ENTRY v1543; // [rsp+E8h] [rbp-18h]
  unsigned int v1544; // [rsp+F0h] [rbp-10h]
  _BYTE *v1545; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v1546; // [rsp+100h] [rbp+0h]
  unsigned int v1547; // [rsp+108h] [rbp+8h]
  _BYTE *v1548; // [rsp+110h] [rbp+10h] BYREF
  __int64 v1549; // [rsp+118h] [rbp+18h]
  __int64 v1550; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v1551; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v1552; // [rsp+12Ch] [rbp+2Ch] BYREF
  __int64 v1553; // [rsp+130h] [rbp+30h]
  unsigned int v1554; // [rsp+138h] [rbp+38h] BYREF
  int v1555; // [rsp+140h] [rbp+40h]
  unsigned __int64 v1556; // [rsp+148h] [rbp+48h]
  unsigned __int64 v1557; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v1558; // [rsp+158h] [rbp+58h]
  int v1559; // [rsp+160h] [rbp+60h] BYREF
  __int64 v1560; // [rsp+168h] [rbp+68h]
  int v1561; // [rsp+170h] [rbp+70h] BYREF
  __int64 v1562; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v1563; // [rsp+180h] [rbp+80h]
  unsigned __int64 v1564; // [rsp+188h] [rbp+88h]
  __int64 v1565; // [rsp+190h] [rbp+90h]
  unsigned __int64 v1566; // [rsp+198h] [rbp+98h]
  int v1567; // [rsp+1A0h] [rbp+A0h]
  int v1568; // [rsp+1A4h] [rbp+A4h]
  int v1569; // [rsp+1A8h] [rbp+A8h]
  int v1570; // [rsp+1ACh] [rbp+ACh]
  int v1571; // [rsp+1B0h] [rbp+B0h]
  int v1572; // [rsp+1B4h] [rbp+B4h]
  int v1573; // [rsp+1B8h] [rbp+B8h]
  int v1574; // [rsp+1BCh] [rbp+BCh]
  int v1575; // [rsp+1C0h] [rbp+C0h]
  int v1576; // [rsp+1C4h] [rbp+C4h]
  int v1577; // [rsp+1C8h] [rbp+C8h]
  int v1578; // [rsp+1CCh] [rbp+CCh]
  int v1579; // [rsp+1D0h] [rbp+D0h]
  int v1580; // [rsp+1D4h] [rbp+D4h]
  int v1581; // [rsp+1D8h] [rbp+D8h]
  int v1582; // [rsp+1DCh] [rbp+DCh]
  int v1583; // [rsp+1E0h] [rbp+E0h]
  __int64 v1584; // [rsp+1E8h] [rbp+E8h]
  __int64 v1585; // [rsp+1F0h] [rbp+F0h] BYREF
  int v1586; // [rsp+1F8h] [rbp+F8h]
  int v1587; // [rsp+1FCh] [rbp+FCh]
  int v1588; // [rsp+200h] [rbp+100h] BYREF
  _DWORD v1589[6]; // [rsp+208h] [rbp+108h] BYREF
  __int16 v1590; // [rsp+220h] [rbp+120h] BYREF
  _QWORD *v1591; // [rsp+222h] [rbp+122h]
  ULONG_PTR v1592; // [rsp+230h] [rbp+130h]
  __int64 v1593; // [rsp+238h] [rbp+138h] BYREF
  __int64 v1594; // [rsp+240h] [rbp+140h] BYREF
  __int64 v1595; // [rsp+248h] [rbp+148h] BYREF
  char v1596; // [rsp+250h] [rbp+150h] BYREF
  __int64 v1597; // [rsp+258h] [rbp+158h] BYREF
  __int64 v1598; // [rsp+260h] [rbp+160h]
  __int64 v1599; // [rsp+268h] [rbp+168h]
  __int64 v1600; // [rsp+270h] [rbp+170h] BYREF
  __int64 v1601; // [rsp+278h] [rbp+178h] BYREF
  __int128 v1602; // [rsp+280h] [rbp+180h]
  __int128 v1603; // [rsp+290h] [rbp+190h]
  __int16 v1604; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _KPRCB *v1605; // [rsp+2A2h] [rbp+1A2h]
  __int16 v1606; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v1607; // [rsp+2B2h] [rbp+1B2h]
  __int16 v1608; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v1609; // [rsp+2C2h] [rbp+1C2h]
  __int16 v1610; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v1611; // [rsp+2D2h] [rbp+1D2h]
  _BYTE *v1612; // [rsp+2E0h] [rbp+1E0h]
  __int64 v1613; // [rsp+2E8h] [rbp+1E8h] BYREF
  unsigned int v1614; // [rsp+2F0h] [rbp+1F0h]
  int v1615; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int v1616; // [rsp+300h] [rbp+200h]
  _DWORD *v1617; // [rsp+308h] [rbp+208h]
  _WORD v1618[4]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE *v1619; // [rsp+318h] [rbp+218h]
  _WORD v1620[4]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE *v1621; // [rsp+328h] [rbp+228h]
  unsigned int v1622; // [rsp+330h] [rbp+230h]
  ULONG_PTR v1623; // [rsp+338h] [rbp+238h] BYREF
  __int64 v1624; // [rsp+340h] [rbp+240h]
  __int64 v1625; // [rsp+348h] [rbp+248h]
  __int64 v1626; // [rsp+350h] [rbp+250h]
  __int64 v1627; // [rsp+358h] [rbp+258h]
  __int64 v1628; // [rsp+360h] [rbp+260h]
  _BYTE v1629[16]; // [rsp+368h] [rbp+268h] BYREF
  _BYTE v1630[16]; // [rsp+378h] [rbp+278h] BYREF
  _BYTE v1631[16]; // [rsp+388h] [rbp+288h] BYREF
  __int64 v1632; // [rsp+398h] [rbp+298h] BYREF
  __int16 v1633; // [rsp+3A0h] [rbp+2A0h]
  __int16 v1634; // [rsp+3A2h] [rbp+2A2h]
  unsigned __int64 v1635; // [rsp+3B8h] [rbp+2B8h]
  int v1636; // [rsp+3C0h] [rbp+2C0h]
  unsigned int v1637; // [rsp+3C4h] [rbp+2C4h]
  unsigned __int64 v1638; // [rsp+3C8h] [rbp+2C8h]
  _BYTE v1639[16]; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v1640; // [rsp+3E0h] [rbp+2E0h]
  __int64 v1641; // [rsp+3E8h] [rbp+2E8h]
  char v1642[8]; // [rsp+3F0h] [rbp+2F0h] BYREF
  char v1643[8]; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v1644; // [rsp+400h] [rbp+300h]
  __int64 v1645; // [rsp+408h] [rbp+308h]
  __int64 v1646; // [rsp+410h] [rbp+310h]
  unsigned int *v1647; // [rsp+418h] [rbp+318h]
  __int64 v1648; // [rsp+420h] [rbp+320h]
  __int64 v1649; // [rsp+428h] [rbp+328h]
  __int64 v1650; // [rsp+430h] [rbp+330h]
  char v1651[8]; // [rsp+438h] [rbp+338h] BYREF
  char v1652[8]; // [rsp+440h] [rbp+340h] BYREF
  char v1653[8]; // [rsp+448h] [rbp+348h] BYREF
  __int64 v1654; // [rsp+450h] [rbp+350h]
  __int64 v1655; // [rsp+458h] [rbp+358h]
  __int64 v1656; // [rsp+460h] [rbp+360h]
  __int64 v1657; // [rsp+468h] [rbp+368h]
  __int64 v1658; // [rsp+470h] [rbp+370h]
  __int64 v1659; // [rsp+478h] [rbp+378h]
  __int64 v1660; // [rsp+480h] [rbp+380h]
  __int64 v1661; // [rsp+488h] [rbp+388h]
  __int64 v1662; // [rsp+490h] [rbp+390h]
  __int64 v1663; // [rsp+498h] [rbp+398h]
  __int64 v1664; // [rsp+4A0h] [rbp+3A0h]
  char v1665[8]; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int64 v1666; // [rsp+4B0h] [rbp+3B0h]
  __int64 v1667; // [rsp+4B8h] [rbp+3B8h]
  __int64 v1668; // [rsp+4C0h] [rbp+3C0h]
  __int64 v1669; // [rsp+4C8h] [rbp+3C8h]
  __int64 v1670; // [rsp+4D8h] [rbp+3D8h]
  __int64 v1671; // [rsp+4E0h] [rbp+3E0h]
  __int64 v1672; // [rsp+4E8h] [rbp+3E8h]
  ULONG_PTR v1673; // [rsp+4F0h] [rbp+3F0h]
  __int64 v1674; // [rsp+4F8h] [rbp+3F8h]
  ULONG_PTR v1675; // [rsp+500h] [rbp+400h]
  __int64 v1676; // [rsp+508h] [rbp+408h]
  unsigned __int64 v1677; // [rsp+510h] [rbp+410h]
  __int64 v1678; // [rsp+518h] [rbp+418h]
  __int64 v1679; // [rsp+520h] [rbp+420h]
  __int64 v1680; // [rsp+528h] [rbp+428h]
  __int64 v1681; // [rsp+530h] [rbp+430h]
  __int64 v1682; // [rsp+538h] [rbp+438h]
  unsigned __int64 v1683; // [rsp+540h] [rbp+440h]
  unsigned __int64 v1684; // [rsp+548h] [rbp+448h]
  unsigned __int64 v1685; // [rsp+550h] [rbp+450h]
  __int64 v1686; // [rsp+558h] [rbp+458h]
  __int64 v1687; // [rsp+560h] [rbp+460h]
  __int64 v1688; // [rsp+568h] [rbp+468h]
  __int64 v1689; // [rsp+570h] [rbp+470h]
  __int64 v1690; // [rsp+578h] [rbp+478h]
  __int64 v1691; // [rsp+580h] [rbp+480h]
  __int64 v1692; // [rsp+588h] [rbp+488h]
  _BYTE v1693[16]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v1694[16]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v1695[16]; // [rsp+5B0h] [rbp+4B0h] BYREF
  ULONG_PTR v1696; // [rsp+5C0h] [rbp+4C0h]
  _BYTE v1697[16]; // [rsp+5C8h] [rbp+4C8h] BYREF
  _BYTE v1698[16]; // [rsp+5D8h] [rbp+4D8h] BYREF
  _BYTE v1699[16]; // [rsp+5E8h] [rbp+4E8h] BYREF
  _BYTE v1700[16]; // [rsp+5F8h] [rbp+4F8h] BYREF
  _BYTE v1701[16]; // [rsp+608h] [rbp+508h] BYREF
  _BYTE v1702[16]; // [rsp+618h] [rbp+518h] BYREF
  _BYTE v1703[16]; // [rsp+628h] [rbp+528h] BYREF
  _BYTE v1704[16]; // [rsp+638h] [rbp+538h] BYREF
  _BYTE v1705[16]; // [rsp+648h] [rbp+548h] BYREF
  _BYTE v1706[16]; // [rsp+658h] [rbp+558h] BYREF
  __int64 v1707; // [rsp+668h] [rbp+568h]
  _BYTE v1708[24]; // [rsp+670h] [rbp+570h] BYREF
  char v1709[8]; // [rsp+688h] [rbp+588h] BYREF
  ULONG_PTR v1710; // [rsp+690h] [rbp+590h]
  int v1711; // [rsp+69Ch] [rbp+59Ch]
  __int64 v1712; // [rsp+6A0h] [rbp+5A0h]
  __int64 v1713; // [rsp+6A8h] [rbp+5A8h]
  _BYTE v1714[16]; // [rsp+6B0h] [rbp+5B0h] BYREF
  char v1715[16]; // [rsp+6C0h] [rbp+5C0h] BYREF
  char v1716[16]; // [rsp+6D0h] [rbp+5D0h] BYREF
  char v1717[8]; // [rsp+6E0h] [rbp+5E0h] BYREF
  unsigned __int64 v1718; // [rsp+6E8h] [rbp+5E8h]
  char v1719[8]; // [rsp+6F8h] [rbp+5F8h] BYREF
  unsigned __int64 v1720; // [rsp+700h] [rbp+600h]
  _BYTE v1721[48]; // [rsp+710h] [rbp+610h] BYREF
  _BYTE v1722[24]; // [rsp+740h] [rbp+640h] BYREF
  _BYTE v1723[48]; // [rsp+758h] [rbp+658h] BYREF
  unsigned __int8 *v1724; // [rsp+788h] [rbp+688h]
  int v1726; // [rsp+800h] [rbp+700h]
  unsigned __int64 v1727; // [rsp+800h] [rbp+700h]
  __int64 v1728; // [rsp+800h] [rbp+700h]
  BOOL v1729; // [rsp+800h] [rbp+700h]
  unsigned __int8 v1730; // [rsp+800h] [rbp+700h]
  __int64 v1731; // [rsp+800h] [rbp+700h]
  unsigned int v1732; // [rsp+800h] [rbp+700h]
  int v1733; // [rsp+800h] [rbp+700h]
  int v1734; // [rsp+800h] [rbp+700h]
  int v1735; // [rsp+800h] [rbp+700h]
  unsigned int v1736; // [rsp+800h] [rbp+700h]
  __int16 v1737; // [rsp+800h] [rbp+700h]
  int v1738; // [rsp+800h] [rbp+700h]
  __int64 v1739; // [rsp+800h] [rbp+700h]
  __int64 v1740; // [rsp+800h] [rbp+700h]
  __int64 v1741; // [rsp+800h] [rbp+700h]
  unsigned __int8 v1742; // [rsp+800h] [rbp+700h]
  unsigned __int8 v1743; // [rsp+800h] [rbp+700h]
  __int64 v1744; // [rsp+800h] [rbp+700h]
  unsigned int v1745; // [rsp+800h] [rbp+700h]
  unsigned int *v1746; // [rsp+800h] [rbp+700h]
  __int64 v1747; // [rsp+800h] [rbp+700h]
  __int64 **v1748; // [rsp+800h] [rbp+700h]
  __int64 v1749; // [rsp+800h] [rbp+700h]
  int v1750; // [rsp+800h] [rbp+700h]
  __int64 v1751; // [rsp+800h] [rbp+700h]
  unsigned __int16 v1752; // [rsp+800h] [rbp+700h]
  __int16 v1753; // [rsp+800h] [rbp+700h]
  char v1754; // [rsp+808h] [rbp+708h] BYREF

  v2 = a2;
  if ( !dword_140D06840 )
    KeBugCheck(0x33u);
  v4 = *(_QWORD *)&qword_140D06848;
  _InterlockedOr(v1517, 0);
  if ( !v4 )
    return 3221225635LL;
  if ( *(_QWORD *)a1 < 0x40uLL
    || *(_QWORD *)(a1 + 8) != (unsigned int)sub_140459FFC()
    || (*(_DWORD *)(a1 + 20) & 0x7FFFFFFE) != 0
    || *(_QWORD *)(a1 + 24)
    || *(_QWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 40)
    || *(_QWORD *)(v2 + 16)
    || *(_QWORD *)(v2 + 24)
    || *(_QWORD *)(v2 + 32)
    || *(_DWORD *)(v2 + 4) >= *(_DWORD *)(v4 + 2004) )
  {
    return 3221225485LL;
  }
  v6 = *(_DWORD *)(a1 + 48);
  v7 = 1;
  v8 = *(_DWORD *)(a1 + 52);
  v9 = *(_DWORD *)(a1 + 20) & 1;
  if ( v6 )
  {
    if ( v6 <= 0 )
      return 3221225485LL;
    if ( v6 > 4 )
    {
      if ( v6 == 5 && !v8 )
      {
        if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
        {
          v1503 = KeAreAllApcsDisabled();
          EffectiveIrql = KeGetEffectiveIrql();
          KeBugCheckEx(0xC8u, ((unsigned __int64)EffectiveIrql << 16) | 0xFF, v1503, 0LL, 0LL);
        }
        goto LABEL_34;
      }
      return 3221225485LL;
    }
    if ( v8 != 16 || !sub_1402585E8(*(_QWORD *)(a1 + 56), 0) )
      return 3221225485LL;
    if ( *(int *)(a1 + 20) >= 0 )
    {
      if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
      {
        v1507 = KeAreAllApcsDisabled();
        v1508 = KeGetEffectiveIrql();
        KeBugCheckEx(0xC8u, ((unsigned __int64)v1508 << 16) | 0xFF, v1507, 0LL, 0LL);
      }
    }
    else if ( KeGetEffectiveIrql() > 1u )
    {
      v1505 = KeAreAllApcsDisabled();
      v1506 = KeGetEffectiveIrql();
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1506 << 16) | 0xFF, v1505, 0LL, 0LL);
    }
  }
  else
  {
    if ( v8 != 16 || (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) - 1LL) > 0xFFFFFFFE )
      return 3221225485LL;
    if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
    {
      v1515 = KeAreAllApcsDisabled();
      v1516 = KeGetEffectiveIrql();
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1516 << 16) | 0xFF, v1515, 0LL, 0LL);
    }
  }
LABEL_34:
  v1565 = 2744LL;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v4 + 2648) + 2751LL;
    v1565 = v10;
    if ( v10 != 2744 )
    {
      Pool2 = ExAllocatePool2(64LL, v10, 1953384779LL);
      v7 = 1;
      goto LABEL_40;
    }
    v7 = 1;
  }
  ++dword_140C0DC14;
  v1543 = ExpInterlockedPopEntrySList(&stru_140C0DC00);
  v12 = (__int64)v1543;
  if ( v1543 )
    goto LABEL_41;
  ++dword_140C0DC18;
  Pool2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C0DC30)(
            (unsigned int)dword_140C0DC24,
            (unsigned int)dword_140C0DC2C,
            (unsigned int)dword_140C0DC28);
LABEL_40:
  v1543 = (PSLIST_ENTRY)Pool2;
  v12 = Pool2;
LABEL_41:
  if ( !v12 )
    return 3221225626LL;
  v13 = v12 + 32;
  v1549 = v12 + 32;
  memmove((void *)(v12 + 32), (const void *)v4, 0xA68uLL);
  *(_QWORD *)(v12 + 2656) = v4;
  *(_QWORD *)(v12 + 2664) = v12 + 2696;
  *(_DWORD *)(v12 + 2056) = *(_DWORD *)v2;
  *(_DWORD *)(v12 + 2060) = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v12 + 2064) = 0;
  *(_DWORD *)(v12 + 2072) = 0;
  *(_DWORD *)(v12 + 2428) |= 0x1000u;
  if ( v9 )
    *(_QWORD *)(v12 + 2672) = (v12 + 2751) & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = *(_DWORD *)(a1 + 16);
  v1521 = v12 + 32;
  v16 = v12 + 32;
  if ( v15 > 0x80000 )
    v15 = 0x80000;
  *(_DWORD *)(v12 + 2068) = v15;
  v1540 = 0;
  if ( !v15 )
    v15 = 1;
  v1555 = 0;
  *(_DWORD *)(v12 + 2068) = v15;
  v17 = 6LL;
  v1598 = a1;
  v1599 = v2;
  v18 = *(unsigned int *)(v12 + 2392);
  if ( (_DWORD)v18 != -1 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v12 + 648))(v18, v14, 6LL);
    if ( v19 || (v19 = (*(__int64 (__fastcall **)(_QWORD))(v12 + 656))(0LL)) != 0 )
    {
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(v12 + 672))(v19, v1721) >= 0 )
      {
        *(_QWORD *)(v12 + 2408) = v19;
        v29 = (*(__int64 (**)(void))(v12 + 712))();
        v30 = (*(__int64 (__fastcall **)(__int64))(v12 + 744))(v29);
        if ( v30 )
        {
          (*(void (__fastcall **)(__int64, __int64))(v12 + 760))(v29, v30);
          v31 = 0;
        }
        else
        {
          v31 = 4;
        }
        v32 = *(_DWORD *)(v12 + 2428) & 0xFFFFFFFB;
        v1555 = 1;
        *(_DWORD *)(v12 + 2428) = v31 | v32;
        *(_DWORD *)(v12 + 2064) += 0x10000;
        goto LABEL_93;
      }
      (*(void (__fastcall **)(__int64))(v12 + 664))(v19);
    }
    v17 = 6LL;
  }
  v20 = *(_DWORD *)(v12 + 2428);
  if ( (v20 & 8) != 0 && (v20 & 0x1000) == 0 )
  {
    v21 = __rdtsc();
    v22 = (__ROR8__(v21, 3) ^ v21) * (unsigned __int128)0x7010008004002001uLL;
    v1676 = *((_QWORD *)&v22 + 1);
    if ( (((unsigned __int8)v22 ^ BYTE8(v22)) & 3) == 0 )
    {
      v23 = __rdtsc();
      v24 = (__ROR8__(v23, 3) ^ v23) * (unsigned __int128)0x7010008004002001uLL;
      v1679 = *((_QWORD *)&v24 + 1);
      v25 = ((unsigned __int64)v24 ^ *((_QWORD *)&v24 + 1)) % 0xB;
      if ( (unsigned int)v25 > 5 )
      {
        v33 = v25 - 6;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              if ( v35 == 1 )
              {
                v1572 = -1333354875;
                v28 = __ROR4__(-1333354868, 33);
              }
              else
              {
                v36 = __rdtsc();
                v37 = __ROR8__(v36, 3);
                v1680 = ((v37 ^ v36) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v38 = (67117057 * (v37 ^ v36)) ^ v1680;
                v28 = ((((((v38 % 0x1A + 97) << 8) | ((v38 >> 5)
                                                    - 26
                                                    * ((unsigned int)((1321528399 * (unsigned __int64)(v38 >> 5)) >> 32) >> 3)
                                                    + 65)) << 8) | ((v38 >> 10)
                                                                  - 26
                                                                  * ((unsigned int)((1321528399
                                                                                   * (unsigned __int64)(v38 >> 10)) >> 32) >> 3)
                                                                  + 97)) << 8) | ((v38 >> 15) % 0x1A + 65);
              }
            }
            else
            {
              v1573 = 1684422978;
              v28 = __ROR4__(1684422978, 8);
            }
          }
          else
          {
            v1574 = -2100910376;
            v28 = __ROL4__(-2100910376, 7);
          }
        }
        else
        {
          v1575 = 1314342514;
          v28 = __ROR4__(1314342516, 24);
        }
      }
      else if ( (_DWORD)v25 == 5 )
      {
        v1571 = 680282605;
        v28 = __ROR4__(680282605, 5);
      }
      else if ( (_DWORD)v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 == 1 )
            {
              v1568 = -1474152136;
              v28 = __ROR4__(-1474152133, 15);
            }
            else
            {
              v1567 = 1728537748;
              v28 = __ROL4__(1728537748, 4);
            }
          }
          else
          {
            v1569 = -2051698419;
            v28 = __ROR4__(-2051698419, 2);
          }
        }
        else
        {
          v1570 = -1297272415;
          v28 = __ROL4__(-1297272415, 1);
        }
      }
      else
      {
        v1580 = -795291432;
        v28 = __ROR4__(-795291432, 6);
      }
      v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v12 + 264))(64LL, *(_QWORD *)(v12 + 1880), v28);
      if ( v39 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v12 + 440))(v39, *(unsigned __int16 *)(v12 + 1888));
        v40 = *(unsigned int *)(*(_QWORD *)(v12 + 1752) + *(_QWORD *)(v12 + 1296));
        if ( (_DWORD)v40 )
        {
          v41 = __rdtsc();
          v42 = (__ROR8__(v41, 3) ^ v41) * (unsigned __int128)0x7010008004002001uLL;
          v1681 = *((_QWORD *)&v42 + 1);
          v40 = (*((_QWORD *)&v42 + 1) ^ (unsigned __int64)v42) % v40;
        }
        v43 = 0LL;
        while ( 1 )
        {
          v44 = (*(__int64 (__fastcall **)(__int64))(v12 + 960))(v43);
          v45 = v44;
          if ( !v44 )
            goto LABEL_90;
          v43 = v44;
          if ( !(_DWORD)v40 )
            break;
          LODWORD(v40) = v40 - 1;
        }
        if ( (*(int (__fastcall **)(__int64))(v12 + 944))(v44) < 0 )
        {
          (*(void (__fastcall **)(__int64))(v12 + 968))(v45);
LABEL_90:
          (*(void (__fastcall **)(__int64))(v12 + 272))(v39);
          goto LABEL_91;
        }
        (*(void (__fastcall **)(__int64, _BYTE *))(v12 + 1096))(v45, v1721);
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(v12 + 472))(v45, v39, 0LL, 0LL, 0LL);
        v55 = __rdtsc();
        v56 = (__ROR8__(v55, 3) ^ v55) * (unsigned __int128)0x7010008004002001uLL;
        v1682 = *((_QWORD *)&v56 + 1);
        v57 = ((unsigned __int64)v56 ^ *((_QWORD *)&v56 + 1))
            % (*(unsigned int (__fastcall **)(__int64))(v12 + 464))(v39);
        _disable();
        _enable();
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v12 + 432))(v1639, 0LL);
        (*(void (__fastcall **)(_BYTE *, __int64))(v12 + 448))(v1708, v39);
        while ( (*(int (__fastcall **)(unsigned int *, _BYTE *))(v12 + 456))(&v1551, v1708) >= 0 )
        {
          if ( !(_DWORD)v57 )
          {
            (*(void (__fastcall **)(_BYTE *, _QWORD))(v12 + 432))(v1639, v1551);
            break;
          }
          LODWORD(v57) = v57 - 1;
        }
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v12 + 480))(v1639, v1706);
        (*(void (__fastcall **)(__int64))(v12 + 272))(v39);
        v7 = 1;
        v1540 = 1;
        goto LABEL_93;
      }
LABEL_91:
      v7 = 1;
    }
  }
  v1540 = 0;
LABEL_93:
  v1553 = 0LL;
  v46 = &v1554;
  v47 = 4;
  v48 = 0xFFFFFFFFLL;
  do
  {
    *(_BYTE *)v46 = 0;
    v46 = (unsigned int *)((char *)v46 + 1);
    --v47;
  }
  while ( v47 );
  v49 = *(_DWORD *)(v12 + 2068);
  v50 = *(unsigned int *)(v12 + 2056);
  v1539 = *(_DWORD *)(v12 + 2056);
  if ( *(_DWORD *)(v12 + 2064) >= v49 )
    goto LABEL_2475;
  v51 = v1683;
  v52 = v50;
  v53 = v1684;
  v54 = v1622;
  v1556 = v1683;
  v1564 = v1684;
  v1547 = v1622;
  v1544 = v1614;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v16 + 2392) & 0x110000) != 0x110000 )
      __writedr(7u, 0LL);
    if ( v52 == *(_DWORD *)(v16 + 2004) )
      break;
    v17 = v16;
    if ( *(_QWORD *)(v16 + 2624) )
      v17 = *(_QWORD *)(v16 + 2624);
    v58 = 0LL;
    v59 = (char *)(v17 + *(unsigned int *)(v17 + 2000));
    v1520 = (int *)v59;
    if ( (_DWORD)v1553 && HIDWORD(v1553) <= v52 )
    {
      v58 = HIDWORD(v1553);
      v59 = (char *)(v17 + v1554);
      v1520 = (int *)v59;
    }
    if ( (_DWORD)v58 != v52 )
    {
      v60 = v52 - (unsigned int)v58;
      v58 = v52;
      while ( 1 )
      {
        v50 = *(unsigned int *)v59;
        if ( (int)v50 > 12 )
          break;
        if ( (_DWORD)v50 == 12 )
          goto LABEL_130;
        v61 = v50 - 1;
        if ( !v61 )
          goto LABEL_130;
        v50 = (unsigned int)(v61 - 6);
        if ( (_DWORD)v50 )
        {
          v50 = (unsigned int)(v50 - 1);
          if ( !(_DWORD)v50 )
          {
            v63 = *((unsigned __int16 *)v59 + 16);
LABEL_135:
            v62 = (v63 + 55) & 0xFFFFFFF8;
            goto LABEL_136;
          }
          if ( (_DWORD)v50 != 2 )
            goto LABEL_132;
          v62 = (unsigned int)(16 * (*((_DWORD *)v59 + 7) + 3));
        }
        else
        {
          v62 = (unsigned int)(24 * (*((_DWORD *)v59 + 6) + 2));
        }
LABEL_136:
        v59 += v62;
        if ( !--v60 )
        {
          v51 = v1556;
          v53 = v1564;
          v54 = v1547;
          v1520 = (int *)v59;
          goto LABEL_138;
        }
      }
      if ( (_DWORD)v50 == 28 )
      {
        v63 = *((unsigned __int16 *)v59 + 20);
        goto LABEL_135;
      }
      if ( (_DWORD)v50 == 30 )
      {
        v50 = *((_DWORD *)v59 + 9) != 0 ? (unsigned int)(*((_DWORD *)v59 + 9) - 1) : 0;
        v48 = ((*((_DWORD *)v59 + 9) != 0 ? *((_DWORD *)v59 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
        v62 = (unsigned int)v48 + 24 * (*((unsigned __int16 *)v59 + 20) + 2);
        goto LABEL_136;
      }
      if ( (int)v50 <= 32 )
      {
LABEL_132:
        v62 = 48LL;
        goto LABEL_136;
      }
      if ( (int)v50 <= 34 )
      {
        v50 = *((_DWORD *)v59 + 8) & 0xFFF;
        v48 = (v50 + *((unsigned int *)v59 + 10) + 4095LL) >> 12;
        v62 = (unsigned int)(20 * v48 + 48);
        goto LABEL_136;
      }
      if ( (_DWORD)v50 != 43 )
        goto LABEL_132;
LABEL_130:
      v50 = *((unsigned int *)v59 + 4);
      v48 = v50 / 0xC;
      v62 = 4 * (unsigned int)(v50 / 0xC) + 48;
      goto LABEL_136;
    }
LABEL_138:
    LODWORD(v1553) = 1;
    HIDWORD(v1553) = v58;
    v64 = 0;
    v1554 = (_DWORD)v59 - v17;
    if ( !*(_DWORD *)(v16 + 2028) )
    {
      v17 = 0LL;
      v50 = *(int *)v59;
      v48 = *(unsigned int *)(v1598 + 48);
      v58 = *(_QWORD *)(v1598 + 56);
      if ( (int)v50 > 21 )
      {
        if ( (_DWORD)v50 == 24 )
          goto LABEL_176;
        if ( (int)v50 <= 27 )
          goto LABEL_148;
        if ( (int)v50 <= 29 )
          goto LABEL_176;
        if ( (unsigned int)v50 > 0x23 || (v17 = 0x940000000LL, !_bittest64((const __int64 *)&v17, v50)) )
        {
          if ( (unsigned int)(v50 - 43) > 1 )
            goto LABEL_148;
        }
LABEL_171:
        if ( (_DWORD)v48 )
          goto LABEL_148;
      }
      else
      {
        if ( (_DWORD)v50 == 21 )
        {
          v17 = *((unsigned int *)v59 + 11);
          if ( (_DWORD)v48 != 4 )
            goto LABEL_148;
          goto LABEL_163;
        }
        if ( (v50 & 0x80000000) != 0LL )
          goto LABEL_148;
        if ( (int)v50 <= 1 )
          goto LABEL_171;
        if ( (int)v50 > 3 )
        {
          if ( (_DWORD)v50 != 7 )
          {
            if ( (_DWORD)v50 != 8 )
            {
              if ( (_DWORD)v50 != 9 && (unsigned int)(v50 - 11) > 3 )
                goto LABEL_148;
              goto LABEL_171;
            }
LABEL_176:
            if ( (_DWORD)v48 != 5 )
              goto LABEL_148;
LABEL_177:
            ++*(_QWORD *)(v1599 + 8);
            goto LABEL_178;
          }
          v17 = *((unsigned int *)v59 + 7);
          v66 = (_DWORD)v48 == 1;
LABEL_154:
          if ( !v66 )
            goto LABEL_148;
          goto LABEL_163;
        }
        if ( (_DWORD)v48 )
        {
          if ( (unsigned int)(v50 - 2) <= 1 )
          {
            v17 = *((unsigned int *)v59 + 10);
            if ( (_DWORD)v50 == 3 && (_DWORD)v48 != 2 )
              goto LABEL_148;
            if ( (_DWORD)v50 == 2 )
            {
              v66 = (_DWORD)v48 == 3;
              goto LABEL_154;
            }
          }
LABEL_163:
          if ( !(unsigned int)KeCheckProcessorGroupAffinity(*(_QWORD *)(v1598 + 56), v17) )
            goto LABEL_148;
          goto LABEL_177;
        }
      }
      v67 = *((unsigned int *)v59 + 4);
      if ( !(_DWORD)v67 )
        goto LABEL_148;
      v17 = *(_QWORD *)v58;
      v50 = *((_QWORD *)v59 + 1);
      v1616 = *(_DWORD *)(v58 + 8);
      v48 = v50 + v67;
      v1685 = v17;
      if ( v50 >= v17 + v1616 || v48 <= v17 )
        goto LABEL_148;
      goto LABEL_177;
    }
LABEL_178:
    v68 = *(_DWORD *)v59;
    v1726 = *(_DWORD *)v59;
    if ( *(int *)v59 > 28 )
    {
      if ( v68 <= 37 )
      {
        if ( v68 == 37 )
        {
          v50 = 2LL;
          if ( (*(_DWORD *)(v16 + 2396) & 2) != 0
            || !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(v16 + 1048))(2LL, v48)
            || *(_DWORD *)(v16 + 2240) )
          {
            goto LABEL_148;
          }
          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2264) = *(int *)v59;
          goto LABEL_1807;
        }
        if ( v68 == 29 )
        {
          v1065 = (_QWORD *)*((_QWORD *)v59 + 1);
          v1066 = *((unsigned int *)v59 + 4);
          v1067 = v1065;
          *(_DWORD *)(v16 + 2032) += v1066;
          v1068 = (const char *)v1065;
          v1069 = *(_DWORD *)(v16 + 2012);
          v1070 = *(_QWORD *)(v16 + 2016);
          v50 = (unsigned __int64)v1065 + v1066;
          if ( v1065 < (_QWORD *)((char *)v1065 + v1066) )
          {
            do
            {
              _mm_prefetch(v1068, 0);
              v1068 += 64;
            }
            while ( (unsigned __int64)v1068 < v50 );
          }
          v1071 = *(_QWORD *)(v16 + 2016);
          v1072 = (unsigned int)v1066 >> 7;
          if ( (unsigned int)v1066 >> 7 )
          {
            do
            {
              v1073 = 8LL;
              do
              {
                v1074 = v1067[1] ^ __ROL8__(*v1067 ^ v1071, v1069);
                v1067 += 2;
                v1071 = __ROL8__(v1074, v1069);
                --v1073;
              }
              while ( v1073 );
              v50 = __ROL8__(v1070 ^ ((char *)v1067 - (char *)v1065), 17) ^ v1070 ^ ((char *)v1067 - (char *)v1065);
              v1664 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1069 = ((unsigned __int8)v50 ^ (unsigned __int8)(v1664 ^ v1069)) & 0x3F;
              if ( !v1069 )
                v1069 = 1;
              --v1072;
            }
            while ( v1072 );
            v16 = v1521;
          }
          v17 = v1066 & 0x7F;
          if ( (unsigned int)v17 >= 8 )
          {
            v1075 = (unsigned __int64)(unsigned int)v17 >> 3;
            do
            {
              v50 = v1069;
              v1071 = __ROL8__(*v1067++ ^ v1071, v1069);
              v17 = (unsigned int)(v17 - 8);
              --v1075;
            }
            while ( v1075 );
          }
          for ( ; (_DWORD)v17; v17 = (unsigned int)(v17 - 1) )
          {
            v1076 = *(unsigned __int8 *)v1067;
            v50 = v1069;
            v1067 = (_QWORD *)((char *)v1067 + 1);
            v1071 = __ROL8__(v1076 ^ v1071, v1069);
          }
          for ( i = v1071; ; LODWORD(v1071) = i ^ v1071 )
          {
            i >>= 31;
            if ( !i )
              break;
          }
          v1078 = v1071 & 0x7FFFFFFF;
          if ( v1078 == *((_DWORD *)v59 + 5) )
            goto LABEL_1781;
          if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
            v64 = 1;
          v50 = *((unsigned int *)v59 + 4);
          v1079 = *((_QWORD *)v59 + 1);
          if ( *((_DWORD *)v59 + 4) )
          {
            v17 = 64LL;
            if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1081 = v1079 & 0xFFFFFFFFFFFFF000uLL;
              v1747 = (v1079 + v50 - 1) | 0xFFF;
              v1082 = (v1079 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1083 = CurrentIrql;
                while ( 1 )
                {
                  v1084 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD *))(v16 + 1112))(
                            v1081,
                            0LL,
                            v17,
                            v1067);
                  if ( v1084 != -1073741267 )
                    break;
                  if ( v64 )
                    goto LABEL_1799;
                  if ( CurrentIrql > 1u )
                    goto LABEL_1779;
                  v1083 = CurrentIrql;
                  __writecr8(CurrentIrql);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1084 < 0 )
                  break;
LABEL_1779:
                v1081 += 4096LL;
                v1082 += 4096LL;
                if ( v1082 == v1747 )
                {
                  __writecr8(v1083);
                  v59 = (char *)v1520;
                  goto LABEL_1781;
                }
              }
LABEL_1799:
              __writecr8(v1083);
              v59 = (char *)v1520;
            }
          }
          if ( *(_DWORD *)(v16 + 2240) )
          {
LABEL_1781:
            v1085 = 1;
          }
          else
          {
            v1085 = 1;
            *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v1078;
            v50 = *((_QWORD *)v59 + 1);
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *(int *)v59;
              *(_QWORD *)(v16 + 2272) = v50;
              *(_DWORD *)(v16 + 2240) = 1;
              sub_140AD049C(v16, 0LL, v17, v1067);
            }
          }
          v1086 = (__int64 **)*((_QWORD *)v59 + 1);
          v1087 = *((_DWORD *)v59 + 4) >> 4;
          v1748 = v1086;
          if ( v1087 )
          {
            v1088 = v1087;
            v1526 = v1087;
            do
            {
              v1089 = (char *)v1520;
              v1090 = **v1086;
              v1595 = 0LL;
              v1091 = (*(__int64 (__fastcall **)(__int64, __int64 *, unsigned __int64, _QWORD *))(v16 + 768))(
                        v1090,
                        &v1595,
                        v17,
                        v1067);
              if ( v1091 )
              {
                do
                {
                  ++v1085;
                  if ( !(*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(v1091, v1665) )
                  {
                    if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                    {
                      v1093 = *(_QWORD **)(v16 + 2632);
                      v1094 = 48;
                      v1092 = 6LL;
                      do
                      {
                        v1094 -= 8;
                        *v1093 = *(_QWORD *)v1089;
                        v1089 += 8;
                        ++v1093;
                        --v1092;
                      }
                      while ( v1092 );
                      if ( v1094 )
                      {
                        do
                        {
                          v1095 = *v1089++;
                          *(_BYTE *)v1093 = v1095;
                          v1093 = (_QWORD *)((char *)v1093 + 1);
                          --v1094;
                        }
                        while ( v1094 );
                        v16 = v1521;
                      }
                      v1089 = *(char **)(v16 + 2632);
                    }
                    *((_QWORD *)v1089 + 3) = v1091;
                    *((_QWORD *)v1089 + 4) = v1090;
                    v1096 = *(_QWORD *)(v16 + 1384);
                    *(_QWORD *)v1096 = v1089;
                    *(_DWORD *)(v1096 + 16) = 48;
                    v1097 = *(_QWORD *)(v16 + 1384);
                    *(_QWORD *)(v1097 + 8) = v1091;
                    *(_DWORD *)(v1097 + 20) = 4096;
                    if ( !*(_DWORD *)(v16 + 2240) )
                    {
                      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v16 + 2256) = v1089 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v16 + 2264) = *(int *)v1089;
                      *(_QWORD *)(v16 + 2272) = 6LL;
                      *(_DWORD *)(v16 + 2240) = 1;
                      sub_140AD049C(v16, 0LL, v1092, 1LL);
                    }
                  }
                  v1091 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 768))(v1090, &v1595);
                }
                while ( v1091 );
                v1086 = v1748;
                v1088 = v1526;
              }
              v1086 += 2;
              v1085 = 1;
              --v1088;
              v1748 = v1086;
              v1526 = v1088;
            }
            while ( v1088 );
          }
          goto LABEL_148;
        }
        v50 = (unsigned int)(v68 - 30);
        if ( v68 == 30 )
        {
          if ( (v59[42] & 1) != 0 )
          {
            if ( !*(_QWORD *)(v16 + 2376) )
              goto LABEL_1748;
            v50 = *(unsigned int *)(v16 + 2396);
            if ( (v50 & 4) != 0 )
              goto LABEL_1748;
            if ( *(_DWORD *)(v16 + 2028) )
            {
              if ( (v50 & 0x20) != 0 )
                goto LABEL_1748;
            }
            else
            {
              *(_DWORD *)(v16 + 2396) = v50 ^ ((unsigned __int8)v50 ^ (unsigned __int8)(8 * v50)) & 0x20;
            }
          }
          v17 = *(unsigned int *)(v16 + 2028);
          v1003 = *((unsigned int *)v59 + 9);
          v1529 = (unsigned int *)*((_QWORD *)v59 + 1);
          v1004 = &v1529[3 * v17];
          v1005 = v1004 + 3;
          v1526 = (__int64)v1004;
          v1528 = v1004 + 3;
          v1006 = v1003 / 0xC;
          BugCheckParameter2 = v1003 / 0xC;
          v1534 = &v1529[3 * (unsigned int)(v1003 / 0xC)];
          v1007 = &v59[v17 + 48];
          v1524 = (__int64)v1007;
          v1008 = v1003 / 0xC - 1;
          v1745 = v1008;
          if ( (unsigned int)(v1003 / 0xC) )
          {
            v1009 = (unsigned __int64)&v59[((v1008 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
            v1538 = v1009;
          }
          else
          {
            v1009 = (unsigned __int64)(v59 + 48);
            v1538 = (__int64)(v59 + 48);
            v1745 = v1003 / 0xC - 1;
          }
          v50 = 3LL * *((unsigned __int16 *)v59 + 20);
          v1523 = (unsigned int *)(v1009 + 24LL * *((unsigned __int16 *)v59 + 20));
          if ( (_DWORD)v1006 && (unsigned int)v17 < v1008 )
          {
            do
            {
              if ( *v1007 >= 0 )
              {
                v1010 = v1004[1];
                v1011 = *((_QWORD *)v59 + 3) + v1010;
                v1012 = *v1005 - v1010;
                *(_DWORD *)(v16 + 2032) += v1012;
                v1013 = (_QWORD *)v1011;
                v1014 = *(_DWORD *)(v16 + 2012);
                v1015 = (const char *)v1011;
                v1016 = *(_QWORD *)(v16 + 2016);
                v1536 = v1011;
                v1017 = (unsigned int)v1012;
                if ( v1011 < v1011 + v1012 )
                {
                  do
                  {
                    _mm_prefetch(v1015, 0);
                    v1015 += 64;
                  }
                  while ( (unsigned __int64)v1015 < v1011 + v1012 );
                }
                v1018 = v1016;
                v1019 = (unsigned int)v1012 >> 7;
                if ( (unsigned int)v1012 >> 7 )
                {
                  do
                  {
                    v1020 = 8LL;
                    do
                    {
                      v1021 = v1018 ^ *v1013;
                      v1022 = v1013[1];
                      v1013 += 2;
                      v1018 = __ROL8__(__ROL8__(v1021, v1014) ^ v1022, v1014);
                      --v1020;
                    }
                    while ( v1020 );
                    v1023 = __ROL8__(v1016 ^ ((unsigned __int64)v1013 - v1011), 17) ^ v1016 ^ ((unsigned __int64)v1013
                                                                                             - v1011);
                    v1662 = (v1023 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v1014 = ((unsigned __int8)v1023 ^ (unsigned __int8)(v1662 ^ v1014)) & 0x3F;
                    if ( !v1014 )
                      LOBYTE(v1014) = 1;
                    --v1019;
                  }
                  while ( v1019 );
                  v16 = v1521;
                }
                v1024 = v1012 & 0x7F;
                if ( (unsigned int)v1024 >= 8 )
                {
                  v1025 = (unsigned __int64)(unsigned int)v1024 >> 3;
                  do
                  {
                    v1018 = __ROL8__(*v1013++ ^ v1018, v1014);
                    v1024 = (unsigned int)(v1024 - 8);
                    --v1025;
                  }
                  while ( v1025 );
                }
                if ( (_DWORD)v1024 )
                {
                  do
                  {
                    v1026 = *(unsigned __int8 *)v1013;
                    v1013 = (_QWORD *)((char *)v1013 + 1);
                    v1018 = __ROL8__(v1026 ^ v1018, v1014);
                    v1024 = (unsigned int)(v1024 - 1);
                  }
                  while ( (_DWORD)v1024 );
                  v1007 = (char *)v1524;
                }
                for ( j = v1018; ; LOBYTE(v1018) = j ^ v1018 )
                {
                  j >>= 7;
                  if ( !j )
                    break;
                }
                v50 = (unsigned __int8)*v1007;
                v1028 = v1018 & 0x7F;
                if ( v1028 == (*v1007 & 0x7F) )
                  goto LABEL_1695;
                if ( v1017 && (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                {
                  v1029 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v1030 = v1011 & 0xFFFFFFFFFFFFF000uLL;
                  v1031 = (v1017 - 1 + v1011) | 0xFFF;
                  v1032 = v1030 - 1;
                  while ( 1 )
                  {
                    v1033 = v1029;
                    while ( 1 )
                    {
                      v1034 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v1030, 0LL);
                      if ( v1034 != -1073741267 )
                        break;
                      if ( v1029 > 1u )
                        goto LABEL_1693;
                      v1033 = v1029;
                      __writecr8(v1029);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v1034 < 0 )
                      break;
LABEL_1693:
                    v1030 += 4096LL;
                    v1032 += 4096LL;
                    if ( v1032 == v1031 )
                    {
                      __writecr8(v1033);
                      goto LABEL_1695;
                    }
                  }
                  __writecr8(v1033);
                  v1011 = v1536;
                  LOBYTE(v50) = *(_BYTE *)v1524;
                }
                v1036 = v50 & 0x7F;
                if ( *(_DWORD *)(v16 + 2240) )
                {
LABEL_1695:
                  v59 = (char *)v1520;
                }
                else
                {
                  v1037 = v1028;
                  v59 = (char *)v1520;
                  v50 = v1036 ^ v1037;
                  *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v50;
                  if ( !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v59;
                    *(_QWORD *)(v16 + 2272) = v1011;
                    *(_DWORD *)(v16 + 2240) = 1;
                    sub_140AD049C(v16, 0LL, v1018, v1024);
                  }
                }
                v1004 = (unsigned int *)v1526;
                *(_DWORD *)(v16 + 2032) += 64;
                v1007 = (char *)v1524;
                v1005 = v1528;
              }
              ++v1007;
              v1004 += 3;
              v1524 = (__int64)v1007;
              v1005 += 3;
              v1526 = (__int64)v1004;
              v1528 = v1005;
            }
            while ( v1005 < v1534 && *(_DWORD *)(v16 + 2032) < *(_DWORD *)(v16 + 2036) );
            LODWORD(v1006) = BugCheckParameter2;
            v17 = (unsigned int)(((int)v1004 - (int)v1529) / 12);
            *(_DWORD *)(v16 + 2028) = v17;
            v1009 = v1538;
            if ( (unsigned int)v17 < v1745 )
              goto LABEL_148;
          }
          if ( *(_DWORD *)(v16 + 2032) >= *(_DWORD *)(v16 + 2036) )
            goto LABEL_148;
          if ( (_DWORD)v1006 )
          {
            v17 = (unsigned int)(v17 - v1006 + 1);
            v1035 = 3 * v17;
          }
          else
          {
            v1035 = 3LL * (unsigned int)v17;
          }
          v50 = v1009 + 8 * v1035;
          v1528 = (unsigned int *)v50;
          while ( 1 )
          {
            v1038 = (unsigned int *)(v50 + 8);
            v1039 = 2LL;
            v1524 = 2LL;
            v1746 = (unsigned int *)(v50 + 8);
            do
            {
              if ( (*v1038 & 0x80000000) == 0 )
              {
                v1040 = *((_QWORD *)v59 + 3) + *(v1038 - 2);
                v1041 = *(v1038 - 1) - *(v1038 - 2);
                *(_DWORD *)(v16 + 2032) += v1041;
                v1042 = (_QWORD *)v1040;
                v1043 = *(_DWORD *)(v16 + 2012);
                v1044 = (const char *)v1040;
                v1045 = *(_QWORD *)(v16 + 2016);
                v1046 = (unsigned int)v1041;
                v1526 = v1040;
                v1536 = (unsigned int)v1041;
                if ( v1040 < v1040 + v1041 )
                {
                  do
                  {
                    _mm_prefetch(v1044, 0);
                    v1044 += 64;
                  }
                  while ( (unsigned __int64)v1044 < v1040 + v1041 );
                }
                v1047 = v1045;
                v1048 = (unsigned int)v1041 >> 7;
                if ( (unsigned int)v1041 >> 7 )
                {
                  do
                  {
                    v1049 = 8LL;
                    do
                    {
                      v1050 = v1042[1] ^ __ROL8__(*v1042 ^ v1047, v1043);
                      v1042 += 2;
                      v1047 = __ROL8__(v1050, v1043);
                      --v1049;
                    }
                    while ( v1049 );
                    v1051 = (__ROL8__(v1045 ^ ((unsigned __int64)v1042 - v1040), 17) ^ v1045 ^ ((unsigned __int64)v1042
                                                                                              - v1040))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v1663 = *((_QWORD *)&v1051 + 1);
                    v1043 = ((unsigned __int8)v1051 ^ (unsigned __int8)(BYTE8(v1051) ^ v1043)) & 0x3F;
                    if ( !v1043 )
                      LOBYTE(v1043) = 1;
                    --v1048;
                  }
                  while ( v1048 );
                  v16 = v1521;
                  v1046 = v1536;
                  v1038 = v1746;
                  v1039 = v1524;
                }
                v17 = v1041 & 0x7F;
                if ( (unsigned int)v17 >= 8 )
                {
                  v1052 = (unsigned __int64)(unsigned int)v17 >> 3;
                  do
                  {
                    v1047 = __ROL8__(*v1042++ ^ v1047, v1043);
                    v17 = (unsigned int)(v17 - 8);
                    --v1052;
                  }
                  while ( v1052 );
                }
                if ( (_DWORD)v17 )
                {
                  do
                  {
                    v1053 = *(unsigned __int8 *)v1042;
                    v1042 = (_QWORD *)((char *)v1042 + 1);
                    v1047 = __ROL8__(v1053 ^ v1047, v1043);
                    v17 = (unsigned int)(v17 - 1);
                  }
                  while ( (_DWORD)v17 );
                  v16 = v1521;
                }
                for ( k = v1047; ; LODWORD(v1047) = k ^ v1047 )
                {
                  k >>= 31;
                  if ( !k )
                    break;
                }
                v1055 = *v1038;
                v1056 = v1047 & 0x7FFFFFFF;
                if ( v1056 != (*v1038 & 0x7FFFFFFF) )
                {
                  if ( v1046 )
                  {
                    v17 = 64LL;
                    if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                    {
                      v1057 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v1058 = v1040 & 0xFFFFFFFFFFFFF000uLL;
                      v1059 = (v1040 + v1046 - 1) | 0xFFF;
                      v1060 = (v1040 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v1061 = v1057;
                        while ( 1 )
                        {
                          v1062 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD *))(v16 + 1112))(
                                    v1058,
                                    0LL,
                                    v17,
                                    v1042);
                          if ( v1062 != -1073741267 )
                            break;
                          if ( v1057 > 1u )
                            goto LABEL_1738;
                          v1061 = v1057;
                          __writecr8(v1057);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v1062 < 0 )
                          break;
LABEL_1738:
                        v1058 += 4096LL;
                        v1060 += 4096LL;
                        if ( v1060 == v1059 )
                        {
                          __writecr8(v1061);
                          v1038 = v1746;
                          v1039 = v1524;
                          goto LABEL_1740;
                        }
                      }
                      __writecr8(v1061);
                      v1038 = v1746;
                      v1040 = v1526;
                      v1039 = v1524;
                      v59 = (char *)v1520;
                      v1055 = *v1746;
                    }
                  }
                  v1064 = v1055;
                  if ( !*(_DWORD *)(v16 + 2240) )
                  {
                    LODWORD(v1064) = v1055 & 0x7FFFFFFF;
                    *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1064 ^ v1056;
                    if ( !*(_DWORD *)(v16 + 2240) )
                    {
                      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v16 + 2264) = *(int *)v59;
                      *(_QWORD *)(v16 + 2272) = v1040;
                      *(_DWORD *)(v16 + 2240) = 1;
                      sub_140AD049C(v16, 0LL, v17, v1042);
                      v1038 = v1746;
                    }
                  }
                }
              }
LABEL_1740:
              v59 = (char *)v1520;
              v1038 += 3;
              --v1039;
              v1746 = v1038;
              v1524 = v1039;
            }
            while ( v1039 );
            v1063 = v1528;
            ++*(_DWORD *)(v16 + 2028);
            v50 = (unsigned __int64)(v1063 + 6);
            v1528 = (unsigned int *)v50;
            if ( (unsigned int *)v50 == v1523 )
              goto LABEL_1748;
            if ( *(_DWORD *)(v16 + 2032) >= *(_DWORD *)(v16 + 2036) )
              goto LABEL_148;
          }
        }
        v50 = (unsigned int)(v68 - 31);
        if ( v68 != 31 )
        {
          if ( v68 == 32 )
          {
            sub_1403FA684(v16, v59);
            goto LABEL_148;
          }
          if ( v68 == 33 )
          {
            sub_1403F974C(v16, v59);
            goto LABEL_148;
          }
          v50 = (unsigned int)(v68 - 35);
          if ( v68 != 35 )
          {
            if ( v68 == 36 )
            {
              v823 = (const char *)*((_QWORD *)v59 + 1);
              v824 = *((unsigned int *)v59 + 4);
              v825 = (__int64)v823;
              *(_DWORD *)(v16 + 2032) += v824;
              v826 = v823;
              v827 = *(_DWORD *)(v16 + 2012);
              for ( m = *(_QWORD *)(v16 + 2016); v826 < &v823[v824]; v826 += 64 )
                _mm_prefetch(v826, 0);
              v829 = *(_QWORD *)(v16 + 2016);
              v830 = (unsigned int)v824 >> 7;
              if ( (unsigned int)v824 >> 7 )
              {
                do
                {
                  v831 = 8LL;
                  do
                  {
                    v832 = *(_QWORD *)(v825 + 8) ^ __ROL8__(*(_QWORD *)v825 ^ v829, v827);
                    v825 += 16LL;
                    v829 = __ROL8__(v832, v827);
                    --v831;
                  }
                  while ( v831 );
                  v833 = (__ROL8__(m ^ (v825 - (_QWORD)v823), 17) ^ m ^ (unsigned __int64)(v825 - (_QWORD)v823))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v1659 = *((_QWORD *)&v833 + 1);
                  v834 = v833 ^ BYTE8(v833) ^ v827;
                  v835 = 0xFFFFFFFFLL;
                  v827 = v834 & 0x3F;
                  if ( !v827 )
                    LOBYTE(v827) = 1;
                  --v830;
                }
                while ( v830 );
                v16 = v1521;
              }
              else
              {
                v835 = 0xFFFFFFFFLL;
              }
              v836 = v824 & 0x7F;
              if ( (unsigned int)v836 >= 8 )
              {
                v837 = (unsigned __int64)(unsigned int)v836 >> 3;
                do
                {
                  v829 = __ROL8__(*(_QWORD *)v825 ^ v829, v827);
                  v825 += 8LL;
                  v836 = (unsigned int)(v836 - 8);
                  --v837;
                }
                while ( v837 );
              }
              for ( ; (_DWORD)v836; v836 = (unsigned int)(v836 - 1) )
              {
                v838 = *(unsigned __int8 *)v825++;
                v829 = __ROL8__(v838 ^ v829, v827);
              }
              for ( n = v829; ; LODWORD(v829) = n ^ v829 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v840 = v829 & 0x7FFFFFFF;
              if ( v840 == *((_DWORD *)v59 + 5) )
                goto LABEL_1399;
              v836 = 0LL;
              if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
                v64 = 1;
              v841 = *((unsigned int *)v59 + 4);
              v835 = *((_QWORD *)v59 + 1);
              if ( *((_DWORD *)v59 + 4) )
              {
                v825 = 64LL;
                if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                {
                  v842 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v843 = v835 & 0xFFFFFFFFFFFFF000uLL;
                  v1740 = (v835 + v841 - 1) | 0xFFF;
                  v844 = (v835 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v845 = v842;
                    while ( 1 )
                    {
                      v846 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v843, 0LL);
                      v836 = 0LL;
                      if ( v846 != -1073741267 )
                        break;
                      if ( v64 )
                        goto LABEL_1395;
                      if ( v842 > 1u )
                        goto LABEL_1393;
                      v845 = v842;
                      __writecr8(v842);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v846 < 0 )
                      break;
LABEL_1393:
                    v843 += 4096LL;
                    v844 += 4096LL;
                    if ( v844 == v1740 )
                    {
                      __writecr8(v845);
                      v59 = (char *)v1520;
LABEL_1399:
                      v848 = *(_QWORD *)(v16 + 1304);
                      v849 = KeGetCurrentIrql();
                      __writecr8(0xFuLL);
                      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(v16 + 320))(v848, v835, v836, v825);
                      v851 = **(unsigned int ***)(v16 + 1512);
                      v852 = v851 + 4;
                      v853 = *((_BYTE *)v851 + 12);
                      v854 = (unsigned __int64)&v851[6 * *v851 + 4];
                      do
                      {
                        v855 = 24LL;
                        v856 = (__int64 *)(v59 + 24);
                        v857 = v852;
                        do
                        {
                          v858 = *(_QWORD *)v857;
                          v857 += 2;
                          v859 = *v856++;
                          if ( v858 != v859 )
                            goto LABEL_1407;
                          v855 = (unsigned int)(v855 - 8);
                        }
                        while ( (unsigned int)v855 >= 8 );
                        if ( !(_DWORD)v855 )
                          break;
                        while ( 1 )
                        {
                          v850 = *(unsigned __int8 *)v857;
                          v857 = (unsigned int *)((char *)v857 + 1);
                          v860 = *(unsigned __int8 *)v856;
                          v856 = (__int64 *)((char *)v856 + 1);
                          if ( v850 != v860 )
                            break;
                          v66 = (_DWORD)v855 == 1;
                          v855 = (unsigned int)(v855 - 1);
                          if ( v66 )
                            goto LABEL_1408;
                        }
LABEL_1407:
                        v852 += 6;
                      }
                      while ( (unsigned __int64)v852 < v854 );
LABEL_1408:
                      v16 = v1521;
                      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v1521 + 384))(
                        *(_QWORD *)(v1521 + 1304),
                        v850,
                        v855,
                        v856);
                      __writecr8(v849);
                      if ( !v853 )
                        goto LABEL_2553;
                      if ( (*(_DWORD *)(v16 + 2396) & 0x10) != 0 && !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *(int *)v59;
                        *(_QWORD *)(v16 + 2272) = 1LL;
                        *(_DWORD *)(v16 + 2240) = 1;
                        sub_140AD049C(v16, 0LL, v861, v862);
                      }
                      if ( *((_QWORD *)v59 + 3) != 1LL )
                      {
LABEL_2553:
                        if ( v852 == (unsigned int *)v854 && !*(_DWORD *)(v16 + 2240) )
                        {
                          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v16 + 2264) = *(int *)v59;
                          *(_QWORD *)(v16 + 2272) = v852;
                          *(_DWORD *)(v16 + 2240) = 1;
                          sub_140AD049C(v16, 0LL, v861, v862);
                        }
                      }
                      v863 = *(_QWORD *)(v16 + 1304);
                      v864 = KeGetCurrentIrql();
                      __writecr8(0xFuLL);
                      (*(void (__fastcall **)(__int64))(v16 + 320))(v863);
                      v865 = **(unsigned int ***)(v16 + 1512);
                      v240 = v865 + 4;
                      v866 = 0LL;
                      v867 = (unsigned __int64)&v865[6 * *v865 + 4];
                      do
                      {
                        v240 += 6;
                        v869 = v866;
                        if ( (unsigned __int64)v240 >= v867 )
                          break;
                        v868 = *((_QWORD *)v240 + 1);
                        if ( v868 < v866 )
                          break;
                        if ( (v868 & 0xFFFFFFFFFFFFF000uLL) != v868 )
                          break;
                        v866 = v868 + v240[4];
                        if ( v866 <= v868 )
                          break;
                      }
                      while ( v866 != v869 );
                      (*(void (__fastcall **)(_QWORD, unsigned __int64))(v16 + 384))(*(_QWORD *)(v16 + 1304), v869);
                      __writecr8(v864);
                      if ( v240 == (unsigned int *)v867 || *(_DWORD *)(v16 + 2240) )
                        goto LABEL_148;
                      v249 = v16 - 0x5C5FC0A76E374B18LL;
LABEL_483:
                      *(_QWORD *)(v16 + 2248) = v249;
                      *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v16 + 2264) = *(int *)v59;
                      *(_QWORD *)(v16 + 2272) = v240;
LABEL_1133:
                      *(_DWORD *)(v16 + 2240) = 1;
                      sub_140AD049C(v16, 0LL, v17, v58);
                      goto LABEL_148;
                    }
                  }
LABEL_1395:
                  __writecr8(v845);
                  v59 = (char *)v1520;
                }
              }
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v840 ^ (unsigned __int64)*((unsigned int *)v59 + 5);
                v847 = *((_QWORD *)v59 + 1);
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *(int *)v59;
                  *(_QWORD *)(v16 + 2272) = v847;
                  *(_DWORD *)(v16 + 2240) = 1;
                  sub_140AD049C(v16, 0LL, 0LL, v825);
                }
              }
              goto LABEL_1399;
            }
LABEL_2297:
            v1371 = v68 - 2;
            if ( v1371 )
            {
              v1372 = v1371 - 1;
              if ( !v1372 )
              {
                (*(void (__fastcall **)(_BYTE *, _QWORD))(v16 + 400))(v1700, *((unsigned int *)v59 + 10));
                (*(void (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1700, v1701);
                sub_140AD1FE0(&v1590, v1716);
                v1387 = v1591;
                v1388 = *((unsigned int *)v59 + 4);
                if ( (*(_BYTE *)(v16 + 2115) & 2) != 0 )
                {
                  v1389 = *(_QWORD *)(v16 + 2216);
                  v1390 = 38LL;
                  v1391 = 304;
                  v1392 = (_QWORD *)v1389;
                  do
                  {
                    *v1392 = 0LL;
                    v1391 -= 8;
                    ++v1392;
                    --v1390;
                  }
                  while ( v1390 );
                  if ( v1391 )
                  {
                    v1390 = 0xFFFFFFFFLL;
                    do
                    {
                      *(_BYTE *)v1392 = 0;
                      v1392 = (_QWORD *)((char *)v1392 + 1);
                      --v1391;
                    }
                    while ( v1391 );
                  }
                  *(_OWORD *)(v1389 + 16) = *(_OWORD *)(v16 + 2064);
                  *(_OWORD *)(v1389 + 32) = *(_OWORD *)(v16 + 2080);
                  *(_OWORD *)(v1389 + 288) = *(_OWORD *)(v16 + 2096);
                  v1608 = 303;
                  v1609 = v1389;
                  *(_WORD *)(v1389 + 16) = v16 + 2112;
                  v1696 = v16 + 2112;
                  *(_WORD *)(v1389 + 22) = (unsigned int)(v16 + 2112) >> 16;
                  *(_DWORD *)(v1389 + 24) = (v16 + 2112) >> 32;
                  _disable();
                  __sidt(v1631);
                  __lidt(&v1608);
                  __writedr(7u, 0LL);
                  *(_WORD *)(v1389 + 16) = v16 + 2118;
                  v1393 = (v16 + 2118) >> 16;
                  *(_WORD *)(v1389 + 22) = v1393;
                  *(_DWORD *)(v1389 + 24) = (v16 + 2118) >> 32;
                  if ( (*(_BYTE *)(v16 + 2115) & 0x20) != 0 )
                  {
                    *(_WORD *)(v16 + 2162) = sub_140AD2000(v1393, v1389, v1390, 1LL);
                    __writedr(0, v16 + 2162);
                    __writedr(7u, 0x70001uLL);
                    *(_QWORD *)(v16 + 2224) = sub_140AD2040(v16 + 2162);
                    __writedr(7u, 0LL);
                    __writedr(0, 0LL);
                  }
                  else
                  {
                    *(_QWORD *)(v16 + 2224) = sub_140AD2050(v1393, v1389, v1390, 1LL);
                  }
                  *(_DWORD *)(v16 + 2232) = HIDWORD(KeGetPcr()[1].LockArray);
                  __lidt(v1631);
                  _enable();
                }
                v1394 = (unsigned __int16)sub_140AD1FF0();
                v1395 = sub_140AD2010();
                *(_DWORD *)(v16 + 2032) += v1388;
                v1396 = (unsigned __int64)v1387 + v1388;
                v1397 = *(unsigned int *)(v16 + 2012);
                v1398 = v1395;
                v1399 = *(_QWORD *)(v16 + 2016);
                v1400 = v1387;
                v1752 = v1395;
                v1401 = (const char *)v1387;
                if ( v1387 < (_QWORD *)((char *)v1387 + v1388) )
                {
                  do
                  {
                    _mm_prefetch(v1401, 0);
                    v1401 += 64;
                  }
                  while ( (unsigned __int64)v1401 < v1396 );
                }
                v1402 = *(_QWORD *)(v16 + 2016);
                v1403 = (unsigned int)v1388 >> 7;
                if ( (unsigned int)v1388 >> 7 )
                {
                  do
                  {
                    v1404 = 8LL;
                    do
                    {
                      v1405 = v1402 ^ *v1400;
                      v1406 = v1400[1];
                      v1400 += 2;
                      v1402 = __ROL8__(__ROL8__(v1405, v1397) ^ v1406, v1397);
                      --v1404;
                    }
                    while ( v1404 );
                    v1407 = __ROL8__(v1399 ^ ((char *)v1400 - (char *)v1387), 17) ^ v1399 ^ ((char *)v1400
                                                                                           - (char *)v1387);
                    v1396 = (v1407 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v1677 = v1396;
                    v1397 = ((unsigned __int8)v1396 ^ (unsigned __int8)(v1407 ^ v1397)) & 0x3F;
                    if ( !(_DWORD)v1397 )
                      v1397 = 1LL;
                    --v1403;
                  }
                  while ( v1403 );
                  v16 = v1521;
                  v1398 = v1752;
                }
                v1408 = v1388 & 0x7F;
                if ( v1408 >= 8 )
                {
                  v1396 = (unsigned __int64)v1408 >> 3;
                  do
                  {
                    v1402 = __ROL8__(*v1400++ ^ v1402, v1397);
                    v1408 -= 8;
                    --v1396;
                  }
                  while ( v1396 );
                }
                if ( v1408 )
                {
                  do
                  {
                    v1409 = *(unsigned __int8 *)v1400;
                    v1400 = (_QWORD *)((char *)v1400 + 1);
                    v1402 = __ROL8__(v1409 ^ v1402, v1397);
                    --v1408;
                  }
                  while ( v1408 );
                  v16 = v1521;
                }
                for ( ii = v1402; ; LODWORD(v1402) = ii ^ v1402 )
                {
                  ii >>= 31;
                  if ( !ii )
                    break;
                }
                v1411 = v1402 & 0x7FFFFFFF;
                (*(void (__fastcall **)(_BYTE *, unsigned __int64, _QWORD *, __int64))(v16 + 392))(
                  v1701,
                  v1396,
                  v1400,
                  v1397);
                if ( v1411 != *((_DWORD *)v59 + 5) || v1590 != *((_WORD *)v59 + 22) || (_WORD)v1394 || v1398 != 64 )
                {
                  if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                  {
                    v1413 = *(_QWORD **)(v16 + 2632);
                    v1414 = 48;
                    v17 = 6LL;
                    v1412 = 1LL;
                    do
                    {
                      v1414 -= 8;
                      *v1413 = *(_QWORD *)v59;
                      v59 += 8;
                      ++v1413;
                      --v17;
                    }
                    while ( v17 );
                    if ( v1414 )
                    {
                      do
                      {
                        v1415 = *v59++;
                        *(_BYTE *)v1413 = v1415;
                        v1413 = (_QWORD *)((char *)v1413 + 1);
                        --v1414;
                      }
                      while ( v1414 );
                      v16 = v1521;
                    }
                    v59 = *(char **)(v16 + 2632);
                  }
                  *((_QWORD *)v59 + 3) = v1591;
                  *((_QWORD *)v59 + 4) = v1411;
                  if ( (_WORD)v1394 )
                  {
                    *((_QWORD *)v59 + 3) = v1394;
                  }
                  else if ( v1398 != 64 )
                  {
                    *((_QWORD *)v59 + 3) = v1398;
                  }
                  v1416 = *(_DWORD *)(v16 + 2240);
                  if ( !v1416 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v1411;
                    v1416 = *(_DWORD *)(v16 + 2240);
                  }
                  v50 = *((_QWORD *)v59 + 1);
                  if ( !v1416 )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v59;
                    *(_QWORD *)(v16 + 2272) = v50;
                    *(_DWORD *)(v16 + 2240) = 1;
                    sub_140AD049C(v16, 0LL, v17, v1412);
                  }
                }
                *(_DWORD *)(v16 + 2032) += 0x8000;
                goto LABEL_148;
              }
              if ( v1372 != 20 )
              {
                if ( *(_DWORD *)(v16 + 2240) )
                  goto LABEL_148;
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = 257LL;
LABEL_1807:
                *(_QWORD *)(v16 + 2272) = 0LL;
                goto LABEL_1133;
              }
              (*(void (__fastcall **)(_BYTE *, _QWORD))(v16 + 400))(v1698, *((unsigned int *)v59 + 10));
              (*(void (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1698, v1699);
              v1373 = *(_QWORD *)(v16 + 2520);
              if ( v1373 )
              {
                v1374 = *(_DWORD *)(v1373 + 800);
                v1375 = *(_QWORD *)(v16 + 2520);
                if ( v1375 )
                {
                  v1376 = *(_DWORD *)(v1375 + 832);
LABEL_2307:
                  (*(void (__fastcall **)(_BYTE *))(v16 + 392))(v1699);
                  if ( (*(_BYTE *)(v16 + 2115) & 0x10) != 0 )
                  {
                    _disable();
                    v1379 = *(_QWORD *)(v16 + 2216);
                    v1380 = 304;
                    v1381 = (_QWORD *)v1379;
                    v1382 = 38LL;
                    do
                    {
                      *v1381 = 0LL;
                      v1380 -= 8;
                      ++v1381;
                      --v1382;
                    }
                    while ( v1382 );
                    for ( ; v1380; --v1380 )
                    {
                      *(_BYTE *)v1381 = 0;
                      v1381 = (_QWORD *)((char *)v1381 + 1);
                    }
                    *(_OWORD *)(v1379 + 16) = *(_OWORD *)(v16 + 2064);
                    *(_OWORD *)(v1379 + 32) = *(_OWORD *)(v16 + 2080);
                    *(_OWORD *)(v1379 + 288) = *(_OWORD *)(v16 + 2096);
                    v1606 = 303;
                    v1607 = v1379;
                    *(_WORD *)(v1379 + 16) = v16 + 2112;
                    v1675 = v16 + 2112;
                    *(_WORD *)(v1379 + 22) = (unsigned int)(v16 + 2112) >> 16;
                    *(_DWORD *)(v1379 + 24) = (v16 + 2112) >> 32;
                    __sidt(v1630);
                    __lidt(&v1606);
                    if ( (*(_DWORD *)(v16 + 2396) & 0x20000) == 0 )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      **(_QWORD **)(v16 + 1176) = v16 - 0x5C5FC0A76E374B18LL;
                      **(_QWORD **)(v16 + 1184) = CurrentPrcb;
                      **(_QWORD **)(v16 + 1192) = 0LL;
                      **(_QWORD **)(v16 + 1200) = 277LL;
                    }
                    sub_140AD2020();
                    if ( (*(_DWORD *)(v16 + 2396) & 0x20000) == 0 )
                    {
                      **(_QWORD **)(v16 + 1176) = 0xA3A03F5891C8B4E8uLL;
                      **(_QWORD **)(v16 + 1184) = 0LL;
                      **(_QWORD **)(v16 + 1192) = 0LL;
                      **(_QWORD **)(v16 + 1200) = 0LL;
                    }
                    __lidt(v1630);
                    _enable();
                  }
                  v1384 = *((unsigned int *)v59 + 6);
                  if ( (v1374 & *((_DWORD *)v59 + 7)) != (_DWORD)v1384
                    || (v1374 & 0x10000) == 0 && (_BYTE)v1374 != 0xD1 && (unsigned __int8)(v1374 + 3) > 1u )
                  {
                    v1385 = v1384 | ((unsigned __int64)*((unsigned int *)v59 + 10) << 48) | 0x32000000000LL;
                    if ( !*(_DWORD *)(v16 + 2240) )
                    {
                      *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1374 ^ v1384;
                      if ( !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *(int *)v59;
                        *(_QWORD *)(v16 + 2272) = v1385;
                        *(_DWORD *)(v16 + 2240) = 1;
                        sub_140AD049C(v16, 0LL, v17, v1378);
                      }
                    }
                  }
                  v50 = *((unsigned int *)v59 + 8);
                  if ( (v1376 & *((_DWORD *)v59 + 9)) != (_DWORD)v50
                    || (v1376 & 0x10000) == 0 && (_BYTE)v1376 != 0xD1 && (unsigned __int8)(v1376 + 3) > 1u )
                  {
                    v1386 = v50 | ((unsigned __int64)*((unsigned int *)v59 + 10) << 48) | 0x34000000000LL;
                    if ( !*(_DWORD *)(v16 + 2240) )
                    {
                      v50 ^= v1376;
                      *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v50;
                      if ( !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *(int *)v59;
                        *(_QWORD *)(v16 + 2272) = v1386;
                        *(_DWORD *)(v16 + 2240) = 1;
                        sub_140AD049C(v16, 0LL, v17, v1378);
                      }
                    }
                  }
                  *(_DWORD *)(v16 + 2032) += 0x8000;
                  goto LABEL_148;
                }
              }
              else
              {
                v1374 = __readmsr(0x832u);
              }
              v1377 = __readmsr(0x834u);
              v1376 = v1377;
              goto LABEL_2307;
            }
            v1417 = *((unsigned int *)v59 + 10);
            v1418 = *(void (__fastcall **)(_BYTE *, __int64))(v16 + 400);
            v1527 = 0;
            v1418(v1702, v1417);
            (*(void (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1702, v1703);
            sub_140AD1FE0(v1715, &v1610);
            v1419 = 0;
            v1536 = v1611;
            v1420 = v1611 + 4;
            v1524 = v1611 + 4;
            v1522 = 0;
            while ( 2 )
            {
              v1421 = 0LL;
              v1557 = *(_QWORD *)(v16 + 2192);
              v1422 = 0LL;
              v1423 = *(_QWORD *)(v16 + 2200);
              v1424 = *(unsigned int *)(v16 + 2168);
              v1523 = 0LL;
              v1425 = *(unsigned int *)(v16 + 2164);
              v1526 = 0LL;
              v1426 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              v1427 = *(_WORD *)v1420;
              LOWORD(v1566) = *(_WORD *)(v1420 - 4);
              WORD1(v1566) = *(_WORD *)(v1420 + 2);
              v1428 = *(_DWORD *)(v1420 + 4);
              v1429 = *(_QWORD *)(v16 + 1520);
              HIDWORD(v1566) = v1428;
              v1430 = v1566;
              v1753 = v1427;
              v1431 = v1429 + 8LL * v1419;
              if ( v1566 == v1431 )
              {
                if ( (v1427 & 0x6000) != 0 )
                {
                  __writecr8(v1426);
                  goto LABEL_2388;
                }
                v1422 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v16 + 1120))(v1419, v1431, 0LL);
                if ( v1422 )
                {
                  v1432 = *(unsigned int **)(v1425 + v1422);
                  v1523 = v1432;
                  if ( v1522 < 0x30 )
                  {
                    __writecr8(v1426);
LABEL_2387:
                    v1421 = v1523;
LABEL_2388:
                    v1433 = *(_QWORD *)(v16 + 1384);
                    *(_QWORD *)v1433 = v1430;
                    *(_DWORD *)(v1433 + 16) = 128;
                    if ( v1421 )
                    {
                      v1434 = *(_QWORD *)(v16 + 1384);
                      *(_QWORD *)(v1434 + 8) = v1421;
                      *(_DWORD *)(v1434 + 20) = 128;
                    }
                    v1527 = 1;
                    goto LABEL_2407;
                  }
                  v1435 = *(_QWORD *)(v1424 + v1422);
LABEL_2395:
                  __writecr8(v1426);
                  if ( !v1422 )
                  {
                    if ( v1430 < v1557 )
                      goto LABEL_2387;
                    if ( v1430 > v1423 )
                      goto LABEL_2387;
                    v1436 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v16 + 512))(
                              *(_QWORD *)(v16 + 2208),
                              v1557,
                              (unsigned int)(v1566 - v1557));
                    if ( !v1436 || (*(_DWORD *)(v1436 + 36) & 0x2000000) != 0 )
                      goto LABEL_2387;
                  }
                  if ( *(_WORD *)(v1524 - 2) != 16 || (*(_WORD *)v1524 & 0x1F00) != 0xE00 || *(__int16 *)v1524 >= 0 )
                    goto LABEL_2387;
                  v1437 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *, _QWORD))(v16 + 592))(
                                            v1430,
                                            &v1557,
                                            0LL);
                  if ( v1437 && v1557 + *v1437 == v1430 && v1557 == *(_QWORD *)(v16 + 2192) )
                  {
                    if ( !v1422 )
                      goto LABEL_2407;
                  }
                  else if ( !v1422 )
                  {
                    goto LABEL_2387;
                  }
                  if ( (v1753 & 0x6000) != 0 )
                    goto LABEL_2387;
                  if ( v1422 != -1 )
                  {
                    v1460 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, unsigned __int64 *, _QWORD))(v16 + 592))(
                                              v1432,
                                              &v1557,
                                              0LL);
                    if ( !v1460 )
                      goto LABEL_2387;
                    if ( (unsigned int *)(v1557 + *v1460) != v1432 )
                      goto LABEL_2387;
                    if ( v1557 != *(_QWORD *)(v16 + 2192) )
                      goto LABEL_2387;
                    v1461 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v16 + 512))(
                              *(_QWORD *)(v16 + 2208),
                              v1557,
                              (unsigned int)((_DWORD)v1432 - v1557));
                    if ( !v1461
                      || (*(_DWORD *)(v1461 + 36) & 0x2000000) != 0
                      || v1522 == 254 && v1435 != *(_QWORD *)(v16 + 2176) )
                    {
                      goto LABEL_2387;
                    }
                  }
LABEL_2407:
                  v1419 = v1522 + 1;
                  v1420 = v1524 + 16;
                  v1522 = v1419;
                  v1524 += 16LL;
                  if ( v1419 > 0xFF )
                  {
                    if ( (*(_BYTE *)(v16 + 2115) & 1) != 0 )
                    {
                      _disable();
                      v1438 = 3221225602LL;
                      v1439 = __readmsr(0xC0000082);
                      v1440 = (v16 + 2114) >> 32;
                      __writemsr(0xC0000082, v16 + 2114);
                      if ( !_bittest((const signed __int32 *)(v16 + 2396), 0x11u) )
                      {
                        v1441 = KeGetCurrentPrcb();
                        v1440 = v16 - 0x5C5FC0A76E374B18LL;
                        **(_QWORD **)(v16 + 1176) = v16 - 0x5C5FC0A76E374B18LL;
                        **(_QWORD **)(v16 + 1184) = v1441;
                        **(_QWORD **)(v16 + 1192) = 3221225602LL;
                        v1438 = *(_QWORD *)(v16 + 1200);
                        *(_QWORD *)v1438 = 274LL;
                      }
                      ((void (__fastcall *)(__int64, unsigned __int64))(v16 + 2116))(v1438, v1440);
                      if ( !_bittest((const signed __int32 *)(v16 + 2396), 0x11u) )
                      {
                        **(_QWORD **)(v16 + 1176) = 0xA3A03F5891C8B4E8uLL;
                        **(_QWORD **)(v16 + 1184) = 0LL;
                        **(_QWORD **)(v16 + 1192) = 0LL;
                        **(_QWORD **)(v16 + 1200) = 0LL;
                      }
                      __writemsr(0xC0000082, v1439);
                      _enable();
                    }
                    v1442 = (_QWORD *)v1536;
                    *(_DWORD *)(v16 + 2032) += 848;
                    v1443 = v1442;
                    v1444 = *(_DWORD *)(v16 + 2032);
                    v1445 = (const char *)v1442;
                    v1446 = *(_DWORD *)(v16 + 2012);
                    v1447 = *(_QWORD *)(v16 + 2016);
                    if ( v1442 < v1442 + 106 )
                    {
                      do
                      {
                        _mm_prefetch(v1445, 0);
                        v1445 += 64;
                      }
                      while ( v1445 < (const char *)v1442 + 848 );
                    }
                    v1448 = 6;
                    v1449 = *(_QWORD *)(v16 + 2016);
                    do
                    {
                      v1450 = 8LL;
                      do
                      {
                        v1451 = v1449 ^ *v1443;
                        v1452 = v1443 + 1;
                        v1453 = *v1452;
                        v1443 = v1452 + 1;
                        v1449 = __ROL8__(__ROL8__(v1451, v1446) ^ v1453, v1446);
                        --v1450;
                      }
                      while ( v1450 );
                      v1454 = __ROL8__(v1447 ^ ((char *)v1443 - (char *)v1442), 17) ^ v1447 ^ ((char *)v1443
                                                                                             - (char *)v1442);
                      v1678 = (v1454 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v1446 = ((unsigned __int8)(v1678 ^ v1454) ^ (unsigned __int8)v1446) & 0x3F;
                      if ( !v1446 )
                        LOBYTE(v1446) = 1;
                      --v1448;
                    }
                    while ( v1448 );
                    v1455 = v1527;
                    v1456 = 80;
                    v1457 = 10LL;
                    do
                    {
                      v1449 = __ROL8__(*v1443++ ^ v1449, v1446);
                      v1456 -= 8;
                      --v1457;
                    }
                    while ( v1457 );
                    if ( v1456 )
                    {
                      do
                      {
                        v1458 = *(unsigned __int8 *)v1443;
                        v1443 = (_QWORD *)((char *)v1443 + 1);
                        v1449 = __ROL8__(v1458 ^ v1449, v1446);
                        --v1456;
                      }
                      while ( v1456 );
                      v1455 = v1527;
                    }
                    for ( jj = v1449; ; LODWORD(v1449) = jj ^ v1449 )
                    {
                      jj >>= 31;
                      if ( !jj )
                        break;
                    }
                    v1462 = v1449 & 0x7FFFFFFF;
                    *(_DWORD *)(v16 + 2032) = v1444 + 16;
                    v1463 = v1442 + 450;
                    v1464 = *(_DWORD *)(v16 + 2012);
                    v1465 = *(_QWORD *)(v16 + 2016);
                    v1466 = (const char *)(v1442 + 450);
                    if ( v1442 + 450 < v1442 + 452 )
                    {
                      do
                      {
                        _mm_prefetch(v1466, 0);
                        v1466 += 64;
                      }
                      while ( v1466 < (const char *)v1442 + 3616 );
                    }
                    v1467 = 2LL;
                    v1468 = 16;
                    do
                    {
                      v1465 = __ROL8__(*v1463++ ^ v1465, v1464);
                      v1468 -= 8;
                      --v1467;
                    }
                    while ( v1467 );
                    if ( v1468 )
                    {
                      do
                      {
                        v1469 = *(unsigned __int8 *)v1463;
                        v1463 = (_QWORD *)((char *)v1463 + 1);
                        v1465 = __ROL8__(v1469 ^ v1465, v1464);
                        --v1468;
                      }
                      while ( v1468 );
                      v1455 = v1527;
                    }
                    for ( kk = v1465; ; LODWORD(v1465) = kk ^ v1465 )
                    {
                      kk >>= 31;
                      if ( !kk )
                        break;
                    }
                    v1471 = v1465 & 0x7FFFFFFF;
                    (*(void (__fastcall **)(_BYTE *, _QWORD *))(v16 + 392))(v1703, v1463);
                    v17 = (unsigned __int64)v1520;
                    v1473 = (unsigned int)v1520[5];
                    if ( v1462 != (_DWORD)v1473
                      || v1471 != *((_QWORD *)v1520 + 3)
                      || v1610 != *((_WORD *)v1520 + 22)
                      || v1455 )
                    {
                      if ( !v1455 )
                      {
                        if ( v1471 == *((_QWORD *)v1520 + 3) )
                        {
                          if ( !*(_DWORD *)(v16 + 2240) )
                          {
                            v1474 = v1473 ^ v1462;
                            goto LABEL_2461;
                          }
                        }
                        else if ( !*(_DWORD *)(v16 + 2240) )
                        {
                          v1474 = v1471 ^ (unsigned __int64)(unsigned int)v1520[6];
LABEL_2461:
                          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1474;
                        }
                      }
                      v50 = *(_QWORD *)(v17 + 8);
                      if ( !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = v17 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *(int *)v17;
                        *(_QWORD *)(v16 + 2272) = v50;
                        *(_DWORD *)(v16 + 2240) = 1;
                        sub_140AD049C(v16, 0LL, v17, v1472);
                      }
                    }
                    *(_DWORD *)(v16 + 2032) += 0x10000;
                    goto LABEL_148;
                  }
                  continue;
                }
                v1422 = -1LL;
                v1435 = 0LL;
              }
              else
              {
                v1435 = v1526;
              }
              break;
            }
            v1432 = v1523;
            goto LABEL_2395;
          }
          v50 = *((_DWORD *)v59 + 10) & 1;
          if ( (*((_DWORD *)v59 + 10) & 1) == 0 )
            goto LABEL_1484;
          if ( !*(_QWORD *)(v16 + 2376) )
            goto LABEL_1748;
          v870 = *(_DWORD *)(v16 + 2396);
          if ( (v870 & 4) != 0 )
            goto LABEL_1748;
          if ( (_DWORD)v50 )
          {
            v17 = *(unsigned int *)(v16 + 2028);
            if ( (_DWORD)v17 )
            {
              v50 = v870;
              if ( (((unsigned __int8)v870 ^ (unsigned __int8)(v870 >> 3)) & 4) != 0 )
                goto LABEL_1748;
            }
            else
            {
              LODWORD(v50) = v870 ^ ((unsigned __int8)v870 ^ (unsigned __int8)(8 * v870)) & 0x20;
              *(_DWORD *)(v16 + 2396) = v50;
            }
            if ( !*(_QWORD *)(v16 + 2376) )
              goto LABEL_1483;
            if ( !(_DWORD)v17 )
            {
              v871 = v50 ^ ((unsigned __int8)v50 ^ (unsigned __int8)(8 * v50)) & 0x20;
              *(_DWORD *)(v16 + 2396) = v871;
              goto LABEL_1436;
            }
            LOBYTE(v871) = v50;
            if ( (((unsigned __int8)v50 ^ (unsigned __int8)((unsigned int)v50 >> 3)) & 4) != 0 )
            {
LABEL_1483:
              *(_DWORD *)(v16 + 2028) = 0;
              goto LABEL_1443;
            }
LABEL_1436:
            if ( (v871 & 4) != 0 )
            {
              v872 = *((_QWORD *)v59 + 1) & 0xFFFFFFFFFFFFF000uLL;
              v873 = ((*((_DWORD *)v59 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v59 + 4) + 4095) >> 12;
              while ( v873 )
              {
                --v873;
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v872) && !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *(int *)v59;
                  *(_QWORD *)(v16 + 2272) = v872;
                  *(_DWORD *)(v16 + 2240) = 1;
                  sub_140AD049C(v16, 0LL, v17, v58);
                }
                v872 += 4096LL;
                *(_DWORD *)(v16 + 2032) += 256;
              }
LABEL_1443:
              v874 = v1520;
              v50 = 2LL;
              v875 = v1520[10];
              if ( (v875 & 2) == 0 )
                goto LABEL_148;
              v876 = *((_QWORD *)v1520 + 1);
              if ( (v875 & 4) != 0 )
              {
                v877 = *((_QWORD *)v1520 + 3);
                v50 = **(_QWORD **)(v876 + 112);
                if ( v50 != v877 )
                {
                  v878 = *(_QWORD *)(v16 + 1384);
                  *(_QWORD *)v878 = v50;
                  *(_DWORD *)(v878 + 16) = 256;
                  if ( !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v877 ^ v50;
                    v50 = *(_QWORD *)(v876 + 112);
                    if ( !*(_DWORD *)(v16 + 2240) )
                    {
                      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v16 + 2256) = (char *)v874 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v16 + 2264) = *v874;
                      *(_QWORD *)(v16 + 2272) = v50;
                      *(_DWORD *)(v16 + 2240) = 1;
                      sub_140AD049C(v16, 0LL, v17, v58);
                    }
                  }
                }
              }
              if ( (v874[10] & 8) == 0 )
                goto LABEL_148;
              v923 = *((_QWORD *)v874 + 4);
              v50 = **(_QWORD **)(v876 + 120);
              if ( v50 == v923 )
                goto LABEL_148;
              v924 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)v924 = v50;
              *(_DWORD *)(v924 + 16) = 256;
              if ( *(_DWORD *)(v16 + 2240) )
                goto LABEL_148;
              *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v923 ^ v50;
              v50 = *(_QWORD *)(v876 + 120);
              if ( *(_DWORD *)(v16 + 2240) )
                goto LABEL_148;
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = (char *)v874 - 0x4C48B4211BBACBEBLL;
              v696 = *v874;
              goto LABEL_1132;
            }
            v879 = (const char *)*((_QWORD *)v59 + 1);
            v880 = *((unsigned int *)v59 + 4);
            v58 = (unsigned __int64)v879;
            *(_DWORD *)(v16 + 2032) += v880;
            v881 = v879;
            v882 = *(_DWORD *)(v16 + 2012);
            for ( mm = *(_QWORD *)(v16 + 2016); v881 < &v879[v880]; v881 += 64 )
              _mm_prefetch(v881, 0);
            v884 = *(_QWORD *)(v16 + 2016);
            v885 = (unsigned int)v880 >> 7;
            if ( (unsigned int)v880 >> 7 )
            {
              do
              {
                v886 = 8LL;
                do
                {
                  v887 = v884 ^ *(_QWORD *)v58;
                  v888 = *(_QWORD *)(v58 + 8);
                  v58 += 16LL;
                  v884 = __ROL8__(__ROL8__(v887, v882) ^ v888, v882);
                  --v886;
                }
                while ( v886 );
                v889 = __ROL8__(mm ^ (v58 - (_QWORD)v879), 17) ^ mm ^ (v58 - (_QWORD)v879);
                v1660 = (v889 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v882 = ((unsigned __int8)v889 ^ (unsigned __int8)(v1660 ^ v882)) & 0x3F;
                if ( !v882 )
                  LOBYTE(v882) = 1;
                --v885;
              }
              while ( v885 );
              v16 = v1521;
            }
            v17 = v880 & 0x7F;
            if ( (unsigned int)v17 >= 8 )
            {
              v890 = (unsigned __int64)(unsigned int)v17 >> 3;
              do
              {
                v884 = __ROL8__(*(_QWORD *)v58 ^ v884, v882);
                v58 += 8LL;
                v17 = (unsigned int)(v17 - 8);
                --v890;
              }
              while ( v890 );
            }
            if ( (_DWORD)v17 )
            {
              do
              {
                v891 = *(unsigned __int8 *)v58++;
                v884 = __ROL8__(v891 ^ v884, v882);
                v17 = (unsigned int)(v17 - 1);
              }
              while ( (_DWORD)v17 );
              v16 = v1521;
            }
            for ( nn = v884; ; LODWORD(v884) = nn ^ v884 )
            {
              nn >>= 31;
              if ( !nn )
                break;
            }
            v893 = *((_DWORD *)v59 + 5);
            v894 = v884 & 0x7FFFFFFF;
            if ( v894 == v893 )
              goto LABEL_1443;
            v895 = *((unsigned int *)v59 + 4);
            v17 = *((_QWORD *)v59 + 1);
            if ( *((_DWORD *)v59 + 4) )
            {
              v58 = 64LL;
              if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
              {
                v896 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v897 = v17 & 0xFFFFFFFFFFFFF000uLL;
                v898 = (v17 + v895 - 1) | 0xFFF;
                v899 = (v17 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v900 = v896;
                  while ( 1 )
                  {
                    v901 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v897, 0LL);
                    if ( v901 != -1073741267 )
                      break;
                    if ( v896 > 1u )
                      goto LABEL_1476;
                    v900 = v896;
                    __writecr8(v896);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v901 < 0 )
                    break;
LABEL_1476:
                  v897 += 4096LL;
                  v899 += 4096LL;
                  if ( v899 == v898 )
                    goto LABEL_1477;
                }
                __writecr8(v900);
                v59 = (char *)v1520;
                v893 = v1520[5];
              }
            }
            if ( *(_DWORD *)(v16 + 2240) )
              goto LABEL_1443;
            v902 = v893;
          }
          else
          {
LABEL_1484:
            v904 = (const char *)*((_QWORD *)v59 + 1);
            v905 = *((unsigned int *)v59 + 4);
            v58 = (unsigned __int64)v904;
            *(_DWORD *)(v16 + 2032) += v905;
            v906 = v904;
            v907 = *(_DWORD *)(v16 + 2012);
            for ( i1 = *(_QWORD *)(v16 + 2016); v906 < &v904[v905]; v906 += 64 )
              _mm_prefetch(v906, 0);
            v909 = *(_QWORD *)(v16 + 2016);
            v910 = (unsigned int)v905 >> 7;
            if ( (unsigned int)v905 >> 7 )
            {
              do
              {
                v911 = 8LL;
                do
                {
                  v912 = *(_QWORD *)(v58 + 8) ^ __ROL8__(*(_QWORD *)v58 ^ v909, v907);
                  v58 += 16LL;
                  v909 = __ROL8__(v912, v907);
                  --v911;
                }
                while ( v911 );
                v913 = (__ROL8__(i1 ^ (v58 - (_QWORD)v904), 17) ^ i1 ^ (v58 - (unsigned __int64)v904))
                     * (unsigned __int128)0x7010008004002001uLL;
                v1661 = *((_QWORD *)&v913 + 1);
                v907 = ((unsigned __int8)v913 ^ (unsigned __int8)(BYTE8(v913) ^ v907)) & 0x3F;
                if ( !v907 )
                  LOBYTE(v907) = 1;
                --v910;
              }
              while ( v910 );
              v16 = v1521;
            }
            v17 = v905 & 0x7F;
            if ( (unsigned int)v17 >= 8 )
            {
              v914 = (unsigned __int64)(unsigned int)v17 >> 3;
              do
              {
                v909 = __ROL8__(*(_QWORD *)v58 ^ v909, v907);
                v58 += 8LL;
                v17 = (unsigned int)(v17 - 8);
                --v914;
              }
              while ( v914 );
            }
            for ( ; (_DWORD)v17; v17 = (unsigned int)(v17 - 1) )
            {
              v915 = *(unsigned __int8 *)v58++;
              v909 = __ROL8__(v915 ^ v909, v907);
            }
            for ( i2 = v909; ; LODWORD(v909) = i2 ^ v909 )
            {
              i2 >>= 31;
              if ( !i2 )
                break;
            }
            v894 = v909 & 0x7FFFFFFF;
            if ( v894 == *((_DWORD *)v59 + 5) )
              goto LABEL_1443;
            if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
              v64 = 1;
            v917 = *((unsigned int *)v59 + 4);
            v918 = *((_QWORD *)v59 + 1);
            if ( *((_DWORD *)v59 + 4) )
            {
              v17 = 64LL;
              if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
              {
                v919 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v920 = v918 & 0xFFFFFFFFFFFFF000uLL;
                v1741 = (v918 + v917 - 1) | 0xFFF;
                v921 = (v918 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v900 = v919;
                  while ( 1 )
                  {
                    v922 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v16 + 1112))(
                             v920,
                             0LL,
                             v17,
                             v58);
                    if ( v922 != -1073741267 )
                      break;
                    if ( v64 )
                      goto LABEL_1516;
                    if ( v919 > 1u )
                      goto LABEL_1514;
                    v900 = v919;
                    __writecr8(v919);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v922 < 0 )
                    break;
LABEL_1514:
                  v920 += 4096LL;
                  v921 += 4096LL;
                  if ( v921 == v1741 )
                  {
LABEL_1477:
                    __writecr8(v900);
                    goto LABEL_1443;
                  }
                }
LABEL_1516:
                __writecr8(v900);
                v59 = (char *)v1520;
              }
            }
            v902 = *((unsigned int *)v59 + 5);
            if ( *(_DWORD *)(v16 + 2240) )
              goto LABEL_1443;
          }
          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v902 ^ v894;
          v903 = *((_QWORD *)v59 + 1);
          if ( !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *(int *)v59;
            *(_QWORD *)(v16 + 2272) = v903;
            *(_DWORD *)(v16 + 2240) = 1;
            sub_140AD049C(v16, 0LL, v17, v58);
          }
          goto LABEL_1443;
        }
        if ( (*(_DWORD *)(v16 + 2040) & 1) == 0 )
          goto LABEL_148;
        if ( !*(_QWORD *)(v16 + 2376) || (*(_DWORD *)(v16 + 2396) & 4) != 0 )
        {
          v926 = 0LL;
        }
        else
        {
          v925 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(v16 + 960))(26LL, &v1613, 0LL);
          v926 = v1613;
          if ( v925 < 0 )
            v926 = 0LL;
        }
        v927 = *(__int64 (__fastcall **)(_QWORD))(v16 + 928);
        v1524 = v926;
        v928 = 0;
        v1522 = 0;
        v929 = v927(0LL);
        while ( 2 )
        {
          v930 = v929;
          if ( !v929 )
          {
            v976 = *(_QWORD *)(v16 + 1208);
            if ( (*(int (__fastcall **)(__int64))(v16 + 912))(v976) >= 0 )
            {
              v977 = (*(unsigned __int8 (__fastcall **)(__int64))(v16 + 976))(v976);
              v978 = (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *))(v16 + 984))(v976, &v1531);
              v979 = (*(__int64 (__fastcall **)(__int64))(v16 + 992))(v976);
              v982 = 0LL;
              v1744 = v979;
              if ( (_BYTE)v977 == 114 || *(_DWORD *)(v16 + 2240) )
              {
                v983 = v1520;
              }
              else
              {
                v983 = v1520;
                v980 = (unsigned int)v977 ^ 0x72LL;
                *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v980;
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = (char *)v983 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *v983;
                  *(_QWORD *)(v16 + 2272) = v976;
                  *(_DWORD *)(v16 + 2240) = 1;
                  sub_140AD049C(v16, 0LL, 0LL, v981);
                  v982 = 0LL;
                }
              }
              v984 = 0;
              v985 = 0;
              if ( (v977 & 7) == 1 )
              {
                v984 = 48;
              }
              else if ( (v977 & 7) == 2 )
              {
                v984 = 16;
                v985 = 16;
              }
              else if ( (v977 & 7) != 0 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v983 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v983;
                *(_QWORD *)(v16 + 2272) = v976;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, 0LL, v981);
                v982 = 0LL;
              }
              v986 = *(_QWORD *)(v16 + 1440);
              v987 = v977 >> 4;
              v988 = v984 | *(_BYTE *)(v986 + 2 * v987);
              v989 = v1520;
              if ( v988 != (_BYTE)v978 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v989 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v989;
                *(_QWORD *)(v16 + 2272) = v976;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, 0LL, v981);
              }
              if ( ((unsigned __int8)v985 | *(_BYTE *)(v986 + 2 * v987 + 1)) != v1531 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v989 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v989;
                *(_QWORD *)(v16 + 2272) = v976;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v982, v981);
              }
              if ( v976 != *(_QWORD *)(v16 + 1208) )
              {
                v990 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(v16 + 968))(
                                             v976,
                                             1LL,
                                             v982);
                v991 = v990;
                if ( v990 )
                {
                  v992 = *v990;
                  v993 = v990;
                  if ( *v990 )
                  {
                    v994 = v1744;
                    v995 = (char *)v1520;
                    v1536 = (__int64)v990;
                    do
                    {
                      *v991 = v992 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v16 + 464))();
                      v996 = v1531;
                      v997 = v991[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v997 == v994 )
                        v996 = v978;
                      v998 = v991[1] >> 6;
                      LOBYTE(v998) = v998 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v16 + 1000))(v998, v996) )
                      {
                        if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                        {
                          v1000 = *(_QWORD **)(v16 + 2632);
                          v1001 = 48;
                          v999 = 6LL;
                          do
                          {
                            v1001 -= 8;
                            *v1000 = *(_QWORD *)v995;
                            v995 += 8;
                            ++v1000;
                            --v999;
                          }
                          while ( v999 );
                          if ( v1001 )
                          {
                            do
                            {
                              v1002 = *v995++;
                              *(_BYTE *)v1000 = v1002;
                              v1000 = (_QWORD *)((char *)v1000 + 1);
                              --v1001;
                            }
                            while ( v1001 );
                            v994 = v1744;
                          }
                          v995 = *(char **)(v16 + 2632);
                        }
                        *((_QWORD *)v995 + 3) = v997;
                        *((_QWORD *)v995 + 4) = *v991;
                        v995[40] = ((unsigned __int64)*((unsigned int *)v991 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v16 + 2240) )
                        {
                          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v16 + 2256) = v995 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v16 + 2264) = *(int *)v995;
                          *(_QWORD *)(v16 + 2272) = v976;
                          *(_DWORD *)(v16 + 2240) = 1;
                          sub_140AD049C(v16, 0LL, v999, 0LL);
                        }
                      }
                      v991 += 6;
                      v992 = *v991;
                    }
                    while ( *v991 );
                    v993 = (_QWORD *)v1536;
                  }
                  (*(void (__fastcall **)(_QWORD *))(v16 + 240))(v993);
                }
              }
              (*(void (__fastcall **)(__int64, __int64, __int64))(v16 + 920))(v976, v980, v982);
              *(_DWORD *)(v16 + 2032) += 0x8000;
              v928 = v1522;
            }
            v50 = v1524;
            if ( v1524 )
              (*(void (**)(void))(v16 + 464))();
            *(_DWORD *)(v16 + 2032) += v928 << 8;
            goto LABEL_148;
          }
          if ( v926 == v929 )
          {
            v931 = v59;
            if ( (*(int (__fastcall **)(__int64))(v16 + 912))(v929) >= 0 )
            {
              v932 = (*(unsigned __int8 (__fastcall **)(__int64))(v16 + 976))(v930);
              v1742 = (*(__int64 (__fastcall **)(__int64, char *))(v16 + 984))(v930, v1532);
              v1536 = (*(__int64 (__fastcall **)(__int64))(v16 + 992))(v930);
              if ( (_BYTE)v932 != 97 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = (unsigned int)v932 ^ 0x61LL;
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *(int *)v59;
                  *(_QWORD *)(v16 + 2272) = v930;
                  *(_DWORD *)(v16 + 2240) = 1;
                  sub_140AD049C(v16, 0LL, v933, v934);
                }
              }
              v935 = 0;
              if ( (v932 & 7) == 1 )
              {
                LOBYTE(v64) = 48;
              }
              else if ( (v932 & 7) == 2 )
              {
                LOBYTE(v64) = 16;
                v935 = 16;
              }
              else if ( (v932 & 7) != 0 && !*(_DWORD *)(v16 + 2240) )
              {
                v936 = v1520;
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v931 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v936;
                *(_QWORD *)(v16 + 2272) = v930;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v933, v934);
              }
              v937 = *(_QWORD *)(v16 + 1440);
              v938 = v932 >> 4;
              v66 = (*(_BYTE *)(v937 + 2 * v938) | (unsigned __int8)v64) == v1742;
              v939 = v1520;
              if ( !v66 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v931 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v939;
                *(_QWORD *)(v16 + 2272) = v930;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v933, v934);
              }
              if ( ((unsigned __int8)v935 | *(_BYTE *)(v937 + 2 * v938 + 1)) != v1532[0] && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v931 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v939;
                *(_QWORD *)(v16 + 2272) = v930;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v933, v934);
              }
              if ( v930 != *(_QWORD *)(v16 + 1208) )
              {
                v940 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v16 + 968))(v930, 1LL);
                v941 = v940;
                if ( v940 )
                {
                  v942 = *v940;
                  v943 = v940;
                  if ( *v940 )
                  {
                    v944 = v1742;
                    v945 = v1536;
                    v1526 = (__int64)v940;
                    do
                    {
                      *v941 = v942 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v16 + 464))();
                      v946 = (unsigned __int8)v1532[0];
                      v947 = v941[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v947 == v945 )
                        v946 = v944;
                      v948 = v941[1] >> 6;
                      LOBYTE(v948) = v948 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v16 + 1000))(v948, v946) )
                      {
                        if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                        {
                          v950 = *(_QWORD **)(v16 + 2632);
                          v951 = 48;
                          v949 = 6LL;
                          do
                          {
                            v951 -= 8;
                            *v950 = *(_QWORD *)v931;
                            v931 += 8;
                            ++v950;
                            --v949;
                          }
                          while ( v949 );
                          if ( v951 )
                          {
                            do
                            {
                              v952 = *v931++;
                              *(_BYTE *)v950 = v952;
                              v950 = (_QWORD *)((char *)v950 + 1);
                              --v951;
                            }
                            while ( v951 );
                            v944 = v1742;
                          }
                          v931 = *(char **)(v16 + 2632);
                        }
                        *((_QWORD *)v931 + 3) = v947;
                        *((_QWORD *)v931 + 4) = *v941;
                        v931[40] = ((unsigned __int64)*((unsigned int *)v941 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v16 + 2240) )
                        {
                          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v16 + 2256) = v931 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v16 + 2264) = *(int *)v931;
                          *(_QWORD *)(v16 + 2272) = v930;
                          *(_DWORD *)(v16 + 2240) = 1;
                          sub_140AD049C(v16, 0LL, v949, 0LL);
                        }
                      }
                      v941 += 6;
                      v942 = *v941;
                    }
                    while ( *v941 );
                    goto LABEL_1608;
                  }
                  goto LABEL_1609;
                }
              }
              goto LABEL_1610;
            }
          }
          else if ( (*(unsigned int (__fastcall **)(__int64))(v16 + 952))(v929) )
          {
            v953 = v59;
            if ( (*(int (__fastcall **)(__int64))(v16 + 912))(v930) >= 0 )
            {
              v954 = (*(unsigned __int8 (__fastcall **)(__int64))(v16 + 976))(v930);
              v1743 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v16 + 984))(v930, &v1530);
              v1536 = (*(__int64 (__fastcall **)(__int64))(v16 + 992))(v930);
              if ( (_BYTE)v954 != 97 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = (unsigned int)v954 ^ 0x61LL;
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *(int *)v59;
                  *(_QWORD *)(v16 + 2272) = v930;
                  *(_DWORD *)(v16 + 2240) = 1;
                  sub_140AD049C(v16, 0LL, v955, v956);
                }
              }
              v957 = 0;
              if ( (v954 & 7) == 1 )
              {
                LOBYTE(v64) = 48;
              }
              else if ( (v954 & 7) == 2 )
              {
                LOBYTE(v64) = 16;
                v957 = 16;
              }
              else if ( (v954 & 7) != 0 && !*(_DWORD *)(v16 + 2240) )
              {
                v958 = v1520;
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v953 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v958;
                *(_QWORD *)(v16 + 2272) = v930;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v955, v956);
              }
              v959 = *(_QWORD *)(v16 + 1440);
              v960 = v954 >> 4;
              v961 = v64 | *(_BYTE *)(v959 + 2 * v960);
              v962 = v1520;
              if ( v961 != v1743 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v953 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v962;
                *(_QWORD *)(v16 + 2272) = v930;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v955, v956);
              }
              if ( ((unsigned __int8)v957 | *(_BYTE *)(v959 + 2 * v960 + 1)) != v1530 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v953 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v962;
                *(_QWORD *)(v16 + 2272) = v930;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v955, v956);
              }
              if ( v930 != *(_QWORD *)(v16 + 1208) )
              {
                v963 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v16 + 968))(v930, 1LL);
                v964 = v963;
                if ( v963 )
                {
                  v965 = *v963;
                  v943 = v963;
                  if ( *v963 )
                  {
                    v966 = v1743;
                    v967 = v1536;
                    v1526 = (__int64)v963;
                    do
                    {
                      *v964 = v965 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v16 + 464))();
                      v968 = v1530;
                      v969 = v964[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v969 == v967 )
                        v968 = v966;
                      v970 = v964[1] >> 6;
                      LOBYTE(v970) = v970 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v16 + 1000))(v970, v968) )
                      {
                        if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                        {
                          v972 = *(_QWORD **)(v16 + 2632);
                          v973 = 48;
                          v971 = 6LL;
                          do
                          {
                            v973 -= 8;
                            *v972 = *(_QWORD *)v953;
                            v953 += 8;
                            ++v972;
                            --v971;
                          }
                          while ( v971 );
                          if ( v973 )
                          {
                            do
                            {
                              v974 = *v953++;
                              *(_BYTE *)v972 = v974;
                              v972 = (_QWORD *)((char *)v972 + 1);
                              --v973;
                            }
                            while ( v973 );
                            v966 = v1743;
                          }
                          v953 = *(char **)(v16 + 2632);
                        }
                        *((_QWORD *)v953 + 3) = v969;
                        *((_QWORD *)v953 + 4) = *v964;
                        v953[40] = ((unsigned __int64)*((unsigned int *)v964 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v16 + 2240) )
                        {
                          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v16 + 2256) = v953 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v16 + 2264) = *(int *)v953;
                          *(_QWORD *)(v16 + 2272) = v930;
                          *(_DWORD *)(v16 + 2240) = 1;
                          sub_140AD049C(v16, 0LL, v971, 0LL);
                        }
                      }
                      v964 += 6;
                      v965 = *v964;
                    }
                    while ( *v964 );
LABEL_1608:
                    v943 = (_QWORD *)v1526;
                  }
LABEL_1609:
                  (*(void (__fastcall **)(_QWORD *))(v16 + 240))(v943);
                }
              }
LABEL_1610:
              (*(void (__fastcall **)(__int64))(v16 + 920))(v930);
              *(_DWORD *)(v16 + 2032) += 0x8000;
              v59 = (char *)v1520;
              LOBYTE(v64) = 0;
              v928 = v1522;
              v926 = v1524;
            }
          }
          v975 = *(__int64 (__fastcall **)(__int64))(v16 + 928);
          v1522 = ++v928;
          v929 = v975(v930);
          continue;
        }
      }
      if ( v68 == 38 )
      {
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v16 + 400))(v1704, *((unsigned int *)v59 + 11));
        v1475 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1704, v1705);
        __asm { xgetbv }
        v694 = v1705;
        v693 = v1475 | (v1476 << 32);
        goto LABEL_1127;
      }
      if ( v68 <= 42 )
      {
        *(_DWORD *)(v16 + 2032) += *((_DWORD *)v59 + 9);
        v1358 = *((unsigned int *)v59 + 9);
        v1359 = (_QWORD *)(v16 + *((unsigned int *)v59 + 8));
        v1360 = *(_DWORD *)(v16 + 2012);
        v1361 = v1359;
        v1362 = *(_QWORD *)(v16 + 2016);
        v1363 = (const char *)v1359;
        if ( v1359 < (_QWORD *)((char *)v1359 + v1358) )
        {
          do
          {
            _mm_prefetch(v1363, 0);
            v1363 += 64;
          }
          while ( v1363 < (const char *)v1359 + v1358 );
        }
        v17 = *(_QWORD *)(v16 + 2016);
        v1364 = (unsigned int)v1358 >> 7;
        if ( (unsigned int)v1358 >> 7 )
        {
          do
          {
            v1365 = 8LL;
            do
            {
              v1366 = v1361[1] ^ __ROL8__(*v1361 ^ v17, v1360);
              v1361 += 2;
              v17 = __ROL8__(v1366, v1360);
              --v1365;
            }
            while ( v1365 );
            v1367 = (__ROL8__(v1362 ^ ((char *)v1361 - (char *)v1359), 17) ^ v1362 ^ (unsigned __int64)((char *)v1361 - (char *)v1359))
                  * (unsigned __int128)0x7010008004002001uLL;
            v1674 = *((_QWORD *)&v1367 + 1);
            v1360 = (BYTE8(v1367) ^ (unsigned __int8)(v1367 ^ v1360)) & 0x3F;
            if ( !v1360 )
              LOBYTE(v1360) = 1;
            --v1364;
          }
          while ( v1364 );
          v16 = v1521;
        }
        v74 = v1358 & 0x7F;
        if ( (unsigned int)v74 >= 8 )
        {
          v1368 = (unsigned __int64)(unsigned int)v74 >> 3;
          do
          {
            v17 = __ROL8__(*v1361++ ^ v17, v1360);
            v74 = (unsigned int)(v74 - 8);
            --v1368;
          }
          while ( v1368 );
        }
        for ( ; (_DWORD)v74; v74 = (unsigned int)(v74 - 1) )
        {
          v1369 = *(unsigned __int8 *)v1361;
          v1361 = (_QWORD *)((char *)v1361 + 1);
          v17 = __ROL8__(v1369 ^ v17, v1360);
        }
        v50 = *((_QWORD *)v59 + 3);
        if ( v17 == v50 )
          goto LABEL_148;
        v1370 = *(_DWORD *)(v16 + 2240);
        if ( !v1370 )
        {
          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v17 ^ v50;
          v1370 = *(_DWORD *)(v16 + 2240);
        }
        v50 = v16 + *((unsigned int *)v59 + 8);
        v94 = v1370 == 0;
        goto LABEL_234;
      }
      if ( v68 != 43 )
      {
        if ( v68 != 44 )
        {
          if ( v68 == 46 )
          {
            if ( (*(_DWORD *)(v16 + 2040) & 1) == 0 )
            {
              v1152 = 0;
              v1153 = *(_QWORD *)(v16 + 1312);
              (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v16 + 360))(v50, v48);
              if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 || (v1154 = *(_DWORD *)(v16 + 2328), v1154 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 280))(*(_QWORD *)(v16 + 2504), 0LL);
                v1155 = 0x80;
              }
              else
              {
                v1155 = 1 << v1154;
              }
              (*(void (__fastcall **)(__int64, _QWORD))(v16 + 296))(v1153, 0LL);
              if ( v1155 == (char)0x80 )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 288))(*(_QWORD *)(v16 + 2504), 0LL);
              }
              else
              {
                v1156 = *(volatile signed __int8 ***)(v16 + 1272);
                v1157 = *v1156;
                if ( *v1156 != (volatile signed __int8 *)v1156 )
                {
                  v1158 = ~v1155;
                  do
                  {
                    _InterlockedAnd8(&v1157[*(_QWORD *)(v16 + 1672) - *(_QWORD *)(v16 + 1696)], v1158);
                    v1157 = *(volatile signed __int8 **)v1157;
                    ++v1152;
                  }
                  while ( v1157 != (volatile signed __int8 *)v1156 );
                }
              }
              (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 304))(*(_QWORD *)(v16 + 1312), 0LL);
              (*(void (**)(void))(v16 + 368))();
              *(_DWORD *)(v16 + 2032) += v1152 << 7;
            }
            goto LABEL_148;
          }
          if ( v68 == 47 )
          {
            v1542 = *(_QWORD *)(*(_QWORD *)(v16 + 1656)
                              + *(_QWORD *)((char *)KeGetCurrentPrcb() + *(_QWORD *)(v16 + 1560))
                              + *(_QWORD *)(v16 + 1624));
            v1143 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v16 + 1152))(v1542, v48);
            if ( v1143 == 0xFFFFFFFFLL )
            {
              v1542 = 0LL;
              v1144 = *(_QWORD *)(v16 + 2384);
              if ( !v1144 )
                goto LABEL_1910;
              v1145 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 1136))(v1144, &v1542);
              v1146 = v1542;
              if ( v1145 < 0 )
                v1146 = 0LL;
              v1542 = v1146;
              if ( !v1146 )
LABEL_1910:
                v1542 = (*(__int64 (__fastcall **)(_QWORD))(v16 + 944))(0LL);
              *(_QWORD *)(v16 + 2384) = 0LL;
              v1147 = 0;
              v50 = v1542;
              for ( i3 = v1542 == 0; ; i3 = v50 == 0 )
              {
                if ( i3 )
                  goto LABEL_1918;
                ++v1147;
                if ( (*(int (**)(void))(v16 + 912))() >= 0 )
                {
                  (*(void (__fastcall **)(__int64, _BYTE *))(v16 + 1064))(v1542, v1723);
                  v1143 = (*(__int64 (**)(void))(v16 + 1152))();
                  (*(void (__fastcall **)(_BYTE *))(v16 + 1072))(v1723);
                  (*(void (__fastcall **)(__int64))(v16 + 920))(v1542);
                  if ( v1143 != 0xFFFFFFFFLL || v1147 > 0x100 )
                    break;
                }
                v50 = (*(__int64 (__fastcall **)(__int64))(v16 + 944))(v1542);
                v1542 = v50;
              }
              *(_QWORD *)(v16 + 2384) = (*(__int64 (__fastcall **)(__int64))(v16 + 1144))(v1542);
              (*(void (__fastcall **)(__int64))(v16 + 464))(v1542);
              if ( v1143 == 0xFFFFFFFFLL )
              {
LABEL_1918:
                *(_DWORD *)(v16 + 2032) += v1147 << 12;
                goto LABEL_148;
              }
            }
            if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
            {
              v1149 = *(_QWORD **)(v16 + 2632);
              v1150 = 48;
              v17 = 6LL;
              do
              {
                v1150 -= 8;
                *v1149 = *(_QWORD *)v59;
                v59 += 8;
                ++v1149;
                --v17;
              }
              while ( v17 );
              for ( ; v1150; --v1150 )
              {
                v1151 = *v59++;
                *(_BYTE *)v1149 = v1151;
                v1149 = (_QWORD *)((char *)v1149 + 1);
              }
              v59 = *(char **)(v16 + 2632);
            }
            *((_QWORD *)v59 + 3) = v1143;
            v50 = v1542;
            goto LABEL_1130;
          }
          if ( v68 != 48 )
            goto LABEL_2297;
          if ( !*((_DWORD *)v59 + 4) )
            goto LABEL_148;
          if ( (*(_DWORD *)(v16 + 2396) & 0x4000) != 0 )
          {
            v50 = *(_QWORD *)(v16 + 1208);
            while ( 1 )
            {
              _disable();
              if ( !_interlockedbittestandset((volatile signed __int32 *)v50, (*(_DWORD *)(v16 + 2392) >> 10) & 0x1F) )
                break;
              _enable();
              _mm_pause();
            }
          }
          if ( (*((_DWORD *)v59 + 6) & 1) == 0 )
          {
            v1098 = (const char *)*((_QWORD *)v59 + 1);
            v1099 = *((unsigned int *)v59 + 4);
            v1100 = (__int64)v1098;
            *(_DWORD *)(v16 + 2032) += v1099;
            v1101 = v1098;
            v1102 = *(_DWORD *)(v16 + 2012);
            v1103 = *(_QWORD *)(v16 + 2016);
            v50 = (unsigned __int64)&v1098[v1099];
            if ( v1098 < &v1098[v1099] )
            {
              do
              {
                _mm_prefetch(v1101, 0);
                v1101 += 64;
              }
              while ( (unsigned __int64)v1101 < v50 );
            }
            v1104 = *(_QWORD *)(v16 + 2016);
            v1105 = (unsigned int)v1099 >> 7;
            if ( (unsigned int)v1099 >> 7 )
            {
              do
              {
                v1106 = 8LL;
                do
                {
                  v1107 = *(_QWORD *)(v1100 + 8) ^ __ROL8__(*(_QWORD *)v1100 ^ v1104, v1102);
                  v1100 += 16LL;
                  v1104 = __ROL8__(v1107, v1102);
                  --v1106;
                }
                while ( v1106 );
                v50 = __ROL8__(v1103 ^ (v1100 - (_QWORD)v1098), 17) ^ v1103 ^ (v1100 - (_QWORD)v1098);
                v1666 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1102 = ((unsigned __int8)v50 ^ (unsigned __int8)(v1666 ^ v1102)) & 0x3F;
                if ( !v1102 )
                  v1102 = 1;
                --v1105;
              }
              while ( v1105 );
              v16 = v1521;
            }
            v17 = v1099 & 0x7F;
            if ( (unsigned int)v17 >= 8 )
            {
              v1108 = (unsigned __int64)(unsigned int)v17 >> 3;
              do
              {
                v50 = v1102;
                v1104 = __ROL8__(*(_QWORD *)v1100 ^ v1104, v1102);
                v1100 += 8LL;
                v17 = (unsigned int)(v17 - 8);
                --v1108;
              }
              while ( v1108 );
            }
            for ( ; (_DWORD)v17; v17 = (unsigned int)(v17 - 1) )
            {
              v1109 = *(unsigned __int8 *)v1100;
              v50 = v1102;
              ++v1100;
              v1104 = __ROL8__(v1109 ^ v1104, v1102);
            }
            for ( i4 = v1104; ; LODWORD(v1104) = i4 ^ v1104 )
            {
              i4 >>= 31;
              if ( !i4 )
                break;
            }
            v1111 = v1104 & 0x7FFFFFFF;
            if ( v1111 != *((_DWORD *)v59 + 5) )
            {
              if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
                v64 = 1;
              v50 = *((unsigned int *)v59 + 4);
              v1112 = *((_QWORD *)v59 + 1);
              if ( *((_DWORD *)v59 + 4) )
              {
                v17 = 64LL;
                if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                {
                  v1113 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v1114 = v1112 & 0xFFFFFFFFFFFFF000uLL;
                  v1749 = (v1112 + v50 - 1) | 0xFFF;
                  v1115 = (v1112 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v1116 = v1113;
                    while ( 1 )
                    {
                      v1117 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, __int64))(v16 + 1112))(
                                v1114,
                                0LL,
                                v17,
                                v1100);
                      if ( v1117 != -1073741267 )
                        break;
                      if ( v64 )
                        goto LABEL_1853;
                      if ( v1113 > 1u )
                        goto LABEL_1851;
                      v1116 = v1113;
                      __writecr8(v1113);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v1117 < 0 )
                      break;
LABEL_1851:
                    v1114 += 4096LL;
                    v1115 += 4096LL;
                    if ( v1115 == v1749 )
                      goto LABEL_1897;
                  }
LABEL_1853:
                  __writecr8(v1116);
                  v59 = (char *)v1520;
                }
              }
              v1118 = *((unsigned int *)v59 + 5);
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                v1119 = v1111;
                goto LABEL_1856;
              }
            }
            goto LABEL_1903;
          }
          if ( *(_QWORD *)(v16 + 2376) )
          {
            v1120 = *(_DWORD *)(v16 + 2396);
            if ( !*(_DWORD *)(v16 + 2028) )
            {
              LODWORD(v50) = v1120 ^ ((unsigned __int8)v1120 ^ (unsigned __int8)(8 * v1120)) & 0x20;
              *(_DWORD *)(v16 + 2396) = v50;
              goto LABEL_1862;
            }
            v50 = v1120;
            if ( (((unsigned __int8)v1120 ^ (unsigned __int8)(v1120 >> 3)) & 4) == 0 )
            {
LABEL_1862:
              if ( (v50 & 4) != 0 )
              {
                v50 = *((_DWORD *)v59 + 2) & 0xFFF;
                v1121 = *((_QWORD *)v59 + 1) & 0xFFFFFFFFFFFFF000uLL;
                v1122 = (v50 + *((unsigned int *)v59 + 4) + 4095LL) >> 12;
                while ( v1122 )
                {
                  --v1122;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v1121)
                    && !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v59;
                    *(_QWORD *)(v16 + 2272) = v1121;
                    *(_DWORD *)(v16 + 2240) = 1;
                    sub_140AD049C(v16, 0LL, v17, v1123);
                  }
                  v1121 += 4096LL;
                  *(_DWORD *)(v16 + 2032) += 256;
                }
                goto LABEL_1903;
              }
              v1124 = (const char *)*((_QWORD *)v59 + 1);
              v1125 = *((unsigned int *)v59 + 4);
              v1100 = (__int64)v1124;
              *(_DWORD *)(v16 + 2032) += v1125;
              v1126 = v1124;
              v1127 = *(_DWORD *)(v16 + 2012);
              v1128 = *(_QWORD *)(v16 + 2016);
              v50 = (unsigned __int64)&v1124[v1125];
              if ( v1124 < &v1124[v1125] )
              {
                do
                {
                  _mm_prefetch(v1126, 0);
                  v1126 += 64;
                }
                while ( (unsigned __int64)v1126 < v50 );
              }
              v1129 = *(_QWORD *)(v16 + 2016);
              v1130 = (unsigned int)v1125 >> 7;
              if ( (unsigned int)v1125 >> 7 )
              {
                do
                {
                  v1131 = 8LL;
                  do
                  {
                    v1132 = *(_QWORD *)(v1100 + 8) ^ __ROL8__(*(_QWORD *)v1100 ^ v1129, v1127);
                    v1100 += 16LL;
                    v1129 = __ROL8__(v1132, v1127);
                    --v1131;
                  }
                  while ( v1131 );
                  v50 = __ROL8__(v1128 ^ (v1100 - (_QWORD)v1124), 17) ^ v1128 ^ (v1100 - (_QWORD)v1124);
                  v1667 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v1127 = ((unsigned __int8)v50 ^ (unsigned __int8)(v1667 ^ v1127)) & 0x3F;
                  if ( !v1127 )
                    v1127 = 1;
                  --v1130;
                }
                while ( v1130 );
                v16 = v1521;
              }
              v17 = v1125 & 0x7F;
              if ( (unsigned int)v17 >= 8 )
              {
                v1133 = (unsigned __int64)(unsigned int)v17 >> 3;
                do
                {
                  v50 = v1127;
                  v1129 = __ROL8__(*(_QWORD *)v1100 ^ v1129, v1127);
                  v1100 += 8LL;
                  v17 = (unsigned int)(v17 - 8);
                  --v1133;
                }
                while ( v1133 );
              }
              for ( ; (_DWORD)v17; v17 = (unsigned int)(v17 - 1) )
              {
                v1134 = *(unsigned __int8 *)v1100;
                v50 = v1127;
                ++v1100;
                v1129 = __ROL8__(v1134 ^ v1129, v1127);
              }
              for ( i5 = v1129; ; LODWORD(v1129) = i5 ^ v1129 )
              {
                i5 >>= 31;
                if ( !i5 )
                  break;
              }
              v1136 = *((_DWORD *)v59 + 5);
              v1137 = v1129 & 0x7FFFFFFF;
              if ( v1137 == v1136 )
                goto LABEL_1903;
              v50 = *((unsigned int *)v59 + 4);
              v17 = *((_QWORD *)v59 + 1);
              if ( *((_DWORD *)v59 + 4) )
              {
                v1100 = 64LL;
                if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                {
                  v1138 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v1139 = v17 & 0xFFFFFFFFFFFFF000uLL;
                  v1140 = (v17 + v50 - 1) | 0xFFF;
                  v1141 = (v17 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v1116 = v1138;
                    while ( 1 )
                    {
                      v1142 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v1139, 0LL);
                      if ( v1142 != -1073741267 )
                        break;
                      if ( v1138 > 1u )
                        goto LABEL_1896;
                      v1116 = v1138;
                      __writecr8(v1138);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v1142 < 0 )
                      break;
LABEL_1896:
                    v1139 += 4096LL;
                    v1141 += 4096LL;
                    if ( v1141 == v1140 )
                    {
LABEL_1897:
                      __writecr8(v1116);
                      goto LABEL_1903;
                    }
                  }
                  __writecr8(v1116);
                  v59 = (char *)v1520;
                  v1136 = v1520[5];
                }
              }
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                v1119 = v1136;
                v1118 = v1137;
LABEL_1856:
                *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1118 ^ v1119;
                v50 = *((_QWORD *)v59 + 1);
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *(int *)v59;
                  *(_QWORD *)(v16 + 2272) = v50;
                  *(_DWORD *)(v16 + 2240) = 1;
                  sub_140AD049C(v16, 0LL, v17, v1100);
                }
              }
LABEL_1903:
              if ( (*(_DWORD *)(v16 + 2396) & 0x4000) != 0 )
              {
                v17 = *(_QWORD *)(v16 + 1208);
                v50 = (*(_DWORD *)(v16 + 2392) >> 10) & 0x1F;
                _InterlockedAnd((volatile signed __int32 *)v17, ~(1 << ((*(_DWORD *)(v16 + 2392) >> 10) & 0x1F)));
                _enable();
              }
              goto LABEL_148;
            }
          }
          *(_DWORD *)(v16 + 2028) = 0;
          goto LABEL_1903;
        }
        v50 = *((unsigned int *)v59 + 8);
        v17 = 2LL;
        BugCheckParameter2 = v16;
        if ( (v50 & 2) == 0 )
          goto LABEL_1998;
        if ( !*(_QWORD *)(v16 + 2376) )
          goto LABEL_1748;
        v1159 = *(_DWORD *)(v16 + 2396);
        if ( (v1159 & 4) != 0 )
          goto LABEL_1748;
        if ( (v50 & 2) != 0 )
        {
          v17 = *(unsigned int *)(v16 + 2028);
          if ( (_DWORD)v17 )
          {
            v50 = v1159;
            if ( (((unsigned __int8)v1159 ^ (unsigned __int8)(v1159 >> 3)) & 4) != 0 )
              goto LABEL_1748;
          }
          else
          {
            LODWORD(v50) = v1159 ^ ((unsigned __int8)v1159 ^ (unsigned __int8)(8 * v1159)) & 0x20;
            *(_DWORD *)(v16 + 2396) = v50;
          }
          if ( !*(_QWORD *)(v16 + 2376) )
            goto LABEL_1997;
          if ( !(_DWORD)v17 )
          {
            v1160 = v50 ^ ((unsigned __int8)v50 ^ (unsigned __int8)(8 * v50)) & 0x20;
            *(_DWORD *)(v16 + 2396) = v1160;
            goto LABEL_1949;
          }
          LOBYTE(v1160) = v50;
          if ( (((unsigned __int8)v50 ^ (unsigned __int8)((unsigned int)v50 >> 3)) & 4) != 0 )
          {
LABEL_1997:
            *(_DWORD *)(v16 + 2028) = 0;
            goto LABEL_1986;
          }
LABEL_1949:
          if ( (v1160 & 4) != 0 )
          {
            v1161 = *((_QWORD *)v59 + 1) & 0xFFFFFFFFFFFFF000uLL;
            v1162 = ((*((_DWORD *)v59 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v59 + 4) + 4095) >> 12;
            while ( v1162 )
            {
              --v1162;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v1161) && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v1161;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v17, v1163);
              }
              v1161 += 4096LL;
              *(_DWORD *)(v16 + 2032) += 256;
            }
            goto LABEL_1986;
          }
          v1164 = (const char *)*((_QWORD *)v59 + 1);
          v1165 = *((unsigned int *)v59 + 4);
          v1166 = (__int64)v1164;
          *(_DWORD *)(v16 + 2032) += v1165;
          v1167 = v1164;
          v1168 = *(_DWORD *)(v16 + 2012);
          for ( i6 = *(_QWORD *)(v16 + 2016); v1167 < &v1164[v1165]; v1167 += 64 )
            _mm_prefetch(v1167, 0);
          v1170 = *(_QWORD *)(v16 + 2016);
          v1171 = (unsigned int)v1165 >> 7;
          if ( (unsigned int)v1165 >> 7 )
          {
            do
            {
              v1172 = 8LL;
              do
              {
                v1173 = v1170 ^ *(_QWORD *)v1166;
                v1174 = *(_QWORD *)(v1166 + 8);
                v1166 += 16LL;
                v1170 = __ROL8__(__ROL8__(v1173, v1168) ^ v1174, v1168);
                --v1172;
              }
              while ( v1172 );
              v1175 = __ROL8__(i6 ^ (v1166 - (_QWORD)v1164), 17) ^ i6 ^ (v1166 - (_QWORD)v1164);
              v1668 = ((unsigned __int64)v1175 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1168 = ((unsigned __int8)(v1175 ^ v1668) ^ (unsigned __int8)v1168) & 0x3F;
              if ( !v1168 )
                LOBYTE(v1168) = 1;
              --v1171;
            }
            while ( v1171 );
            v16 = v1521;
          }
          v17 = v1165 & 0x7F;
          if ( (unsigned int)v17 >= 8 )
          {
            v1176 = (unsigned __int64)(unsigned int)v17 >> 3;
            do
            {
              v1170 = __ROL8__(*(_QWORD *)v1166 ^ v1170, v1168);
              v1166 += 8LL;
              v17 = (unsigned int)(v17 - 8);
              --v1176;
            }
            while ( v1176 );
          }
          if ( (_DWORD)v17 )
          {
            do
            {
              v1177 = *(unsigned __int8 *)v1166++;
              v1170 = __ROL8__(v1177 ^ v1170, v1168);
              v17 = (unsigned int)(v17 - 1);
            }
            while ( (_DWORD)v17 );
            v16 = v1521;
          }
          for ( i7 = v1170; ; LODWORD(v1170) = i7 ^ v1170 )
          {
            i7 >>= 31;
            if ( !i7 )
              break;
          }
          v1179 = *((_DWORD *)v59 + 5);
          v1180 = v1170 & 0x7FFFFFFF;
          if ( v1180 != v1179 )
          {
            v1181 = *((unsigned int *)v59 + 4);
            v17 = *((_QWORD *)v59 + 1);
            if ( *((_DWORD *)v59 + 4) )
            {
              v1166 = 64LL;
              if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
              {
                v1182 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1183 = v17 & 0xFFFFFFFFFFFFF000uLL;
                v1184 = (v17 + v1181 - 1) | 0xFFF;
                v1185 = (v17 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1186 = v1182;
                  while ( 1 )
                  {
                    v1187 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v1183, 0LL);
                    if ( v1187 != -1073741267 )
                      break;
                    if ( v1182 > 1u )
                      goto LABEL_1984;
                    v1186 = v1182;
                    __writecr8(v1182);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1187 < 0 )
                    break;
LABEL_1984:
                  v1183 += 4096LL;
                  v1185 += 4096LL;
                  if ( v1185 == v1184 )
                    goto LABEL_1985;
                }
                __writecr8(v1186);
                v59 = (char *)v1520;
                v1179 = v1520[5];
              }
            }
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1179 ^ (unsigned __int64)v1180;
              v1193 = *((_QWORD *)v59 + 1);
              if ( !*(_DWORD *)(v16 + 2240) )
              {
LABEL_1996:
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v1193;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v17, v1166);
              }
            }
          }
        }
        else
        {
LABEL_1998:
          v1194 = (const char *)*((_QWORD *)v59 + 1);
          v1195 = *((unsigned int *)v59 + 4);
          v1166 = (__int64)v1194;
          *(_DWORD *)(v16 + 2032) += v1195;
          v1196 = v1194;
          v1197 = *(_DWORD *)(v16 + 2012);
          for ( i8 = *(_QWORD *)(v16 + 2016); v1196 < &v1194[v1195]; v1196 += 64 )
            _mm_prefetch(v1196, 0);
          v1199 = *(_QWORD *)(v16 + 2016);
          v1200 = (unsigned int)v1195 >> 7;
          if ( (unsigned int)v1195 >> 7 )
          {
            do
            {
              v1201 = 8LL;
              do
              {
                v1202 = v1199 ^ *(_QWORD *)v1166;
                v1203 = *(_QWORD *)(v1166 + 8);
                v1166 += 16LL;
                v1199 = __ROL8__(__ROL8__(v1202, v1197) ^ v1203, v1197);
                --v1201;
              }
              while ( v1201 );
              v1204 = __ROL8__(i8 ^ (v1166 - (_QWORD)v1194), 17) ^ i8 ^ (v1166 - (_QWORD)v1194);
              v1669 = ((unsigned __int64)v1204 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1197 = ((unsigned __int8)(v1204 ^ v1669) ^ (unsigned __int8)v1197) & 0x3F;
              if ( !v1197 )
                LOBYTE(v1197) = 1;
              --v1200;
            }
            while ( v1200 );
            v16 = v1521;
          }
          v17 = v1195 & 0x7F;
          if ( (unsigned int)v17 >= 8 )
          {
            v1205 = (unsigned __int64)(unsigned int)v17 >> 3;
            do
            {
              v1199 = __ROL8__(*(_QWORD *)v1166 ^ v1199, v1197);
              v1166 += 8LL;
              v17 = (unsigned int)(v17 - 8);
              --v1205;
            }
            while ( v1205 );
          }
          if ( (_DWORD)v17 )
          {
            do
            {
              v1206 = *(unsigned __int8 *)v1166++;
              v1199 = __ROL8__(v1206 ^ v1199, v1197);
              v17 = (unsigned int)(v17 - 1);
            }
            while ( (_DWORD)v17 );
            v16 = v1521;
          }
          for ( i9 = v1199; ; LODWORD(v1199) = i9 ^ v1199 )
          {
            i9 >>= 31;
            if ( !i9 )
              break;
          }
          v1208 = v1199 & 0x7FFFFFFF;
          if ( v1208 != *((_DWORD *)v59 + 5) )
          {
            if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
              v64 = 1;
            v1209 = *((unsigned int *)v59 + 4);
            v1210 = *((_QWORD *)v59 + 1);
            if ( *((_DWORD *)v59 + 4) )
            {
              v17 = 64LL;
              if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
              {
                v1211 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1212 = v1210 & 0xFFFFFFFFFFFFF000uLL;
                v1751 = (v1210 + v1209 - 1) | 0xFFF;
                v1213 = (v1210 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1186 = v1211;
                  while ( 1 )
                  {
                    v1214 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, __int64))(v16 + 1112))(
                              v1212,
                              0LL,
                              v17,
                              v1166);
                    if ( v1214 != -1073741267 )
                      break;
                    if ( v64 )
                      goto LABEL_2031;
                    if ( v1211 > 1u )
                      goto LABEL_2029;
                    v1186 = v1211;
                    __writecr8(v1211);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1214 < 0 )
                    break;
LABEL_2029:
                  v1212 += 4096LL;
                  v1213 += 4096LL;
                  if ( v1213 == v1751 )
                  {
LABEL_1985:
                    __writecr8(v1186);
                    goto LABEL_1986;
                  }
                }
LABEL_2031:
                __writecr8(v1186);
                v59 = (char *)v1520;
              }
            }
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v1208;
              v1193 = *((_QWORD *)v59 + 1);
              if ( !*(_DWORD *)(v16 + 2240) )
                goto LABEL_1996;
            }
          }
        }
LABEL_1986:
        v50 = (unsigned __int64)v1520;
        if ( (v1520[8] & 1) == 0 )
          goto LABEL_148;
        v1188 = *((_QWORD *)v1520 + 3);
        v1189 = (*(__int64 (__fastcall **)(__int64))(v16 + 488))(v1188);
        v1190 = (_DWORD *)(v1189 + *(unsigned __int16 *)(v1189 + 20) + 24LL);
        v50 = 5LL * *(unsigned __int16 *)(v1189 + 6);
        v1526 = (__int64)&v1190[10 * *(unsigned __int16 *)(v1189 + 6)];
        if ( v1190 == (_DWORD *)v1526 )
          goto LABEL_148;
        v1191 = *(_DWORD *)(v16 + 2028);
        if ( !v1191 )
        {
          *(_DWORD *)(v16 + 2028) = 4096;
          v1191 = 4096;
        }
        if ( v1188 == *(_QWORD *)(v16 + 1472) || v1188 == *(_QWORD *)(v16 + 1480) )
        {
          v1192 = 1;
          v1750 = 1;
        }
        else
        {
          v1750 = 0;
          v1192 = 1;
        }
        while ( 2 )
        {
          v50 = (unsigned int)v1190[4];
          v1215 = v1190[2];
          v1216 = v1190[3];
          if ( (unsigned int)v50 <= v1215 )
            v50 = v1215;
          v1217 = (v50 + v1216 + 4095) & 0xFFFFF000;
          if ( v1191 >= v1217 )
            goto LABEL_2043;
          if ( (v1190[9] & 0x2000000) != 0 )
            goto LABEL_2042;
          v1218 = *v1190;
          if ( *v1190 == 1414090313 )
          {
            if ( v1190[1] == 1195525195 )
              goto LABEL_2042;
            goto LABEL_2053;
          }
          if ( v1218 == 1162297680 )
          {
            v1219 = *((_WORD *)v1190 + 2);
            v50 = 30839LL;
            if ( v1219 == 30839 )
              goto LABEL_2042;
            v50 = 29303LL;
            if ( v1219 == 29303 )
              goto LABEL_2042;
            v50 = 30583LL;
            if ( v1219 == 30583 )
              goto LABEL_2042;
          }
          else
          {
LABEL_2053:
            if ( v1218 == 1095914053 && *((_WORD *)v1190 + 2) == 16724 )
              goto LABEL_2042;
          }
          v50 = BugCheckParameter2;
          if ( BugCheckParameter2 )
          {
            v1220 = *(char **)(BugCheckParameter2 + 2296);
            *((_QWORD *)&v1602 + 1) = *(_QWORD *)(BugCheckParameter2 + 2304);
            v1603 = *(_OWORD *)(BugCheckParameter2 + 2312);
            *(_QWORD *)&v1602 = v1220;
          }
          else
          {
            v1602 = *(_OWORD *)off_140C091E8;
            v1220 = off_140C091E8[0];
            v1603 = *(_OWORD *)off_140C091F8;
          }
          v1221 = 7;
          v1222 = (unsigned __int8 *)v1190;
          while ( 1 )
          {
            v1223 = *v1222++;
            v1224 = (unsigned __int8)*v1220++;
            if ( v1223 != v1224 )
              break;
            if ( !--v1221 )
              goto LABEL_2042;
          }
          v1225 = (__int64 *)*((_QWORD *)&v1602 + 1);
          v1226 = 8;
          v1227 = (unsigned __int64 *)v1190;
          do
          {
            v50 = *v1227++;
            v1228 = *v1225++;
            if ( v50 != v1228 )
              goto LABEL_2069;
            v1226 -= 8;
          }
          while ( v1226 >= 8 );
          if ( !v1226 )
            goto LABEL_2042;
          while ( 1 )
          {
            v1229 = *(unsigned __int8 *)v1227;
            v1227 = (unsigned __int64 *)((char *)v1227 + 1);
            v1230 = *(unsigned __int8 *)v1225;
            v1225 = (__int64 *)((char *)v1225 + 1);
            if ( v1229 != v1230 )
              break;
            if ( !--v1226 )
              goto LABEL_2042;
          }
LABEL_2069:
          v1231 = (unsigned __int8 *)v1603;
          v1232 = 4;
          v1233 = (unsigned __int8 *)v1190;
          while ( 1 )
          {
            v1234 = *v1233++;
            v1235 = *v1231++;
            if ( v1234 != v1235 )
              break;
            if ( !--v1232 )
              goto LABEL_2042;
          }
          v1236 = (unsigned __int8 *)*((_QWORD *)&v1603 + 1);
          v1237 = 6;
          v1238 = (unsigned __int8 *)v1190;
          while ( 1 )
          {
            v1239 = *v1238++;
            v1240 = *v1236++;
            if ( v1239 != v1240 )
              break;
            if ( !--v1237 )
              goto LABEL_2042;
          }
          v1241 = v1190[9];
          if ( v1241 < 0 || (v1241 & 0x20000000) == 0 )
          {
LABEL_2042:
            v1191 = v1217;
LABEL_2043:
            v17 = BugCheckParameter2;
            goto LABEL_2044;
          }
          if ( v1750 && *v1190 != 778396769 && *v1190 != 1162297680 )
            v1192 = 0;
          v17 = BugCheckParameter2;
          if ( v1191 < v1216 )
            v1191 = v1216;
LABEL_2086:
          v1242 = v1188 + v1191;
          if ( (*(_BYTE *)(v17 + 2115) & 4) != 0 )
          {
            v50 = 0xFFFFFFFFLL;
            __asm { xbegin  $+6 }
            __asm { xend }
            ++*(_DWORD *)(v17 + 2052);
            *(_DWORD *)(v17 + 2032) += 256;
LABEL_2096:
            v1245 = *(_DWORD *)(v17 + 2036);
            v1191 += 4096;
            if ( v1191 >= v1217 )
            {
              if ( *(_DWORD *)(v17 + 2032) >= v1245 )
                goto LABEL_2045;
LABEL_2044:
              v1190 += 10;
              v1192 = 1;
              if ( v1190 == (_DWORD *)v1526 )
              {
LABEL_2045:
                v16 = v1521;
                if ( v1190 == (_DWORD *)v1526 && v1191 >= v1217 )
                  *(_DWORD *)(v17 + 2028) = 0;
                else
                  *(_DWORD *)(v17 + 2028) = v1191;
                goto LABEL_148;
              }
              continue;
            }
            if ( *(_DWORD *)(v17 + 2032) >= v1245 )
              goto LABEL_2045;
            goto LABEL_2086;
          }
          break;
        }
        if ( v1192 )
        {
          v1243 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64, _QWORD))(v17 + 1088))(
                    &v1632,
                    v1188 + v1191,
                    v17,
                    0LL);
          v1244 = 0LL;
          if ( v1243 < 0 )
          {
            if ( v1243 == -1073741819 )
            {
              v50 = (unsigned __int64)v1520;
              if ( (v1520[8] & 4) == 0 || (int)v1190[9] < 0 )
              {
                v17 = BugCheckParameter2;
                if ( *(_DWORD *)(BugCheckParameter2 + 2240) )
                  goto LABEL_2096;
                *(_QWORD *)(BugCheckParameter2 + 2248) = BugCheckParameter2 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v17 + 2256) = v50 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v17 + 2264) = *(int *)v50;
                *(_QWORD *)(v17 + 2272) = v1242;
                *(_DWORD *)(v17 + 2240) = 1;
                sub_140AD049C(v17, 0LL, v17, 0LL);
              }
            }
            v17 = BugCheckParameter2;
            goto LABEL_2096;
          }
        }
        else
        {
          v1632 = 0LL;
          v1634 = 0;
          v1636 = 4096;
          v1633 = 8 * ((((unsigned __int64)(v1242 & 0xFFF) + 0x1FFF) >> 12) + 6);
          v1635 = v1242 & 0xFFFFFFFFFFFFF000uLL;
          v1637 = v1242 & 0xFFF;
          v1638 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v17 + 1096))(v1188 + v1191) >> 12;
        }
        v1246 = BugCheckParameter2;
        ++*(_DWORD *)(BugCheckParameter2 + 2056);
        *(_QWORD *)(v1246 + 2608) = v1635 + v1637;
        *(_QWORD *)(v1246 + 2600) = v1520;
        v1247 = KeGetCurrentIrql();
        __writecr8(2uLL);
        sub_140AD25B8(v1246 + 2568, **(unsigned int **)(v1246 + 1488), 0LL, v1244);
        v17 = (*(__int64 (__fastcall **)(ULONG_PTR))(BugCheckParameter2 + 1080))(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 1980));
        BugCheckParameter2 = v17;
        __writecr8(v1247);
        if ( v1192 )
        {
          (*(void (__fastcall **)(__int64 *, __int64, unsigned __int64, _QWORD))(v17 + 1104))(&v1632, v1248, v17, 0LL);
          v17 = BugCheckParameter2;
        }
        *(_DWORD *)(v17 + 2032) += 81920;
        goto LABEL_2096;
      }
LABEL_2106:
      if ( !*(_DWORD *)(v16 + 2028) )
      {
        if ( v68 == 12 )
        {
          if ( !*(_QWORD *)(v16 + 2376) )
          {
            *(_DWORD *)(v16 + 2028) = 0;
            goto LABEL_2188;
          }
          v1249 = *(_DWORD *)(v16 + 2396);
          *(_DWORD *)(v16 + 2396) = v1249 ^ ((unsigned __int8)v1249 ^ (unsigned __int8)(8 * v1249)) & 0x20;
          if ( (((unsigned __int8)v1249 ^ ((unsigned __int8)v1249 ^ (unsigned __int8)(8 * v1249)) & 0x20) & 4) != 0 )
          {
            v1250 = *((_QWORD *)v59 + 1) & 0xFFFFFFFFFFFFF000uLL;
            v1251 = ((*((_DWORD *)v59 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v59 + 4) + 4095) >> 12;
            if ( !v1251 )
              goto LABEL_2188;
            do
            {
              --v1251;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v1250) && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v1250;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v1252, v1253);
              }
              *(_DWORD *)(v16 + 2032) += 256;
              v1250 += 4096LL;
            }
            while ( v1251 );
LABEL_2187:
            v68 = v1726;
            goto LABEL_2188;
          }
          v1254 = (const char *)*((_QWORD *)v59 + 1);
          v1255 = *((unsigned int *)v59 + 4);
          v1256 = (__int64)v1254;
          *(_DWORD *)(v16 + 2032) += v1255;
          v1257 = v1254;
          v1258 = *(_DWORD *)(v16 + 2012);
          for ( i10 = *(_QWORD *)(v16 + 2016); v1257 < &v1254[v1255]; v1257 += 64 )
            _mm_prefetch(v1257, 0);
          v1260 = *(_QWORD *)(v16 + 2016);
          v1261 = (unsigned int)v1255 >> 7;
          if ( (unsigned int)v1255 >> 7 )
          {
            do
            {
              v1262 = 8LL;
              do
              {
                v1263 = v1260 ^ *(_QWORD *)v1256;
                v1264 = *(_QWORD *)(v1256 + 8);
                v1256 += 16LL;
                v1260 = __ROL8__(__ROL8__(v1263, v1258) ^ v1264, v1258);
                --v1262;
              }
              while ( v1262 );
              v1265 = __ROL8__(i10 ^ (v1256 - (_QWORD)v1254), 17) ^ i10 ^ (v1256 - (_QWORD)v1254);
              v1670 = ((unsigned __int64)v1265 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1258 = ((unsigned __int8)(v1670 ^ v1265) ^ (unsigned __int8)v1258) & 0x3F;
              if ( !v1258 )
                LOBYTE(v1258) = 1;
              --v1261;
            }
            while ( v1261 );
            v16 = v1521;
          }
          v1266 = v1255 & 0x7F;
          if ( v1266 >= 8 )
          {
            v1267 = (unsigned __int64)v1266 >> 3;
            do
            {
              v1260 = __ROL8__(*(_QWORD *)v1256 ^ v1260, v1258);
              v1256 += 8LL;
              v1266 -= 8;
              --v1267;
            }
            while ( v1267 );
          }
          if ( v1266 )
          {
            do
            {
              v1268 = *(unsigned __int8 *)v1256++;
              v1260 = __ROL8__(v1268 ^ v1260, v1258);
              --v1266;
            }
            while ( v1266 );
            v16 = v1521;
          }
          for ( i11 = v1260; ; LODWORD(v1260) = i11 ^ v1260 )
          {
            i11 >>= 31;
            if ( !i11 )
              break;
          }
          v1270 = *((_DWORD *)v59 + 5);
          v1271 = v1260 & 0x7FFFFFFF;
          if ( v1271 == v1270 )
            goto LABEL_2187;
          v1272 = *((unsigned int *)v59 + 4);
          v1273 = *((_QWORD *)v59 + 1);
          if ( *((_DWORD *)v59 + 4) )
          {
            v1256 = 64LL;
            if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
            {
              v1274 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1275 = v1273 & 0xFFFFFFFFFFFFF000uLL;
              v1276 = (v1273 + v1272 - 1) | 0xFFF;
              v1277 = (v1273 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1278 = v1274;
                while ( 1 )
                {
                  v1279 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v1275, 0LL);
                  if ( v1279 != -1073741267 )
                    break;
                  if ( v1274 > 1u )
                    goto LABEL_2144;
                  v1278 = v1274;
                  __writecr8(v1274);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1279 < 0 )
                  break;
LABEL_2144:
                v1275 += 4096LL;
                v1277 += 4096LL;
                if ( v1277 == v1276 )
                  goto LABEL_2145;
              }
              __writecr8(v1278);
              v59 = (char *)v1520;
              v1270 = v1520[5];
            }
          }
          if ( *(_DWORD *)(v16 + 2240) )
            goto LABEL_2187;
          v1280 = v1270;
        }
        else
        {
          v1281 = (const char *)*((_QWORD *)v59 + 1);
          v1282 = *((unsigned int *)v59 + 4);
          v1256 = (__int64)v1281;
          *(_DWORD *)(v16 + 2032) += v1282;
          v1283 = v1281;
          v1284 = *(_DWORD *)(v16 + 2012);
          for ( i12 = *(_QWORD *)(v16 + 2016); v1283 < &v1281[v1282]; v1283 += 64 )
            _mm_prefetch(v1283, 0);
          v1286 = *(_QWORD *)(v16 + 2016);
          v1287 = (unsigned int)v1282 >> 7;
          if ( (unsigned int)v1282 >> 7 )
          {
            do
            {
              v1288 = 8LL;
              do
              {
                v1289 = v1286 ^ *(_QWORD *)v1256;
                v1290 = *(_QWORD *)(v1256 + 8);
                v1256 += 16LL;
                v1286 = __ROL8__(__ROL8__(v1289, v1284) ^ v1290, v1284);
                --v1288;
              }
              while ( v1288 );
              v1291 = __ROL8__(i12 ^ (v1256 - (_QWORD)v1281), 17) ^ i12 ^ (v1256 - (_QWORD)v1281);
              v1671 = ((unsigned __int64)v1291 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1284 = ((unsigned __int8)v1671 ^ (unsigned __int8)(v1291 ^ v1284)) & 0x3F;
              if ( !v1284 )
                LOBYTE(v1284) = 1;
              --v1287;
            }
            while ( v1287 );
            v16 = v1521;
          }
          v1273 = v1282 & 0x7F;
          if ( (unsigned int)v1273 >= 8 )
          {
            v1292 = (unsigned __int64)(unsigned int)v1273 >> 3;
            do
            {
              v1286 = __ROL8__(*(_QWORD *)v1256 ^ v1286, v1284);
              v1256 += 8LL;
              v1273 = (unsigned int)(v1273 - 8);
              --v1292;
            }
            while ( v1292 );
          }
          if ( (_DWORD)v1273 )
          {
            do
            {
              v1293 = *(unsigned __int8 *)v1256++;
              v1286 = __ROL8__(v1293 ^ v1286, v1284);
              v1273 = (unsigned int)(v1273 - 1);
            }
            while ( (_DWORD)v1273 );
            v16 = v1521;
          }
          for ( i13 = v1286; ; LODWORD(v1286) = i13 ^ v1286 )
          {
            i13 >>= 31;
            if ( !i13 )
              break;
          }
          v1271 = v1286 & 0x7FFFFFFF;
          if ( v1271 == *((_DWORD *)v59 + 5) )
            goto LABEL_2187;
          if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
            v64 = 1;
          v1295 = *((unsigned int *)v59 + 4);
          v1296 = *((_QWORD *)v59 + 1);
          if ( *((_DWORD *)v59 + 4) )
          {
            v1273 = 64LL;
            if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
            {
              v1297 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1298 = v1296 & 0xFFFFFFFFFFFFF000uLL;
              v1536 = (v1296 + v1295 - 1) | 0xFFF;
              v1299 = (v1296 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1278 = v1297;
                while ( 1 )
                {
                  v1300 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v16 + 1112))(
                            v1298,
                            0LL,
                            v1273,
                            v1256);
                  if ( v1300 != -1073741267 )
                    break;
                  if ( v64 )
                    goto LABEL_2182;
                  if ( v1297 > 1u )
                    goto LABEL_2180;
                  v1278 = v1297;
                  __writecr8(v1297);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1300 < 0 )
                  break;
LABEL_2180:
                v1298 += 4096LL;
                v1299 += 4096LL;
                if ( v1299 == v1536 )
                {
LABEL_2145:
                  __writecr8(v1278);
                  goto LABEL_2187;
                }
              }
LABEL_2182:
              __writecr8(v1278);
              v59 = (char *)v1520;
            }
          }
          if ( *(_DWORD *)(v16 + 2240) )
            goto LABEL_2187;
          v1280 = *((unsigned int *)v59 + 5);
        }
        *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v1271 ^ v1280;
        v1301 = *((_QWORD *)v59 + 1);
        if ( !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2264) = *(int *)v59;
          *(_QWORD *)(v16 + 2272) = v1301;
          *(_DWORD *)(v16 + 2240) = 1;
          sub_140AD049C(v16, 0LL, v1273, v1256);
        }
        goto LABEL_2187;
      }
LABEL_2188:
      v1302 = v1520;
      v17 = *(unsigned int *)(v16 + 2028);
      v50 = (unsigned int)v1520[4];
      v1303 = &v1520[v17 + 12];
      v1526 = *((_QWORD *)v1520 + 1);
      v1528 = (unsigned int *)v1303;
      v1304 = (unsigned int *)(v1526 + 12 * v17);
      v1529 = v1304;
      v1305 = (unsigned int *)(v1526 + 12 * (v50 / 0xC));
      v1534 = v1305;
      if ( v1304 == v1305 )
        goto LABEL_2262;
      while ( 2 )
      {
        if ( *v1303 >= 0 )
        {
          v1306 = *v1304;
          v1307 = v1306 + *((_QWORD *)v1302 + 4);
          v1308 = v1304[1] - v1306;
          v1536 = v1307;
          if ( v68 == 43 )
          {
            v1323 = sub_140AD0678(v16, v1307, v1308);
            *(_DWORD *)(v16 + 2032) += 8 * v1308;
            v1322 = v1323;
            if ( (*(_DWORD *)(v16 + 2396) & 0x800) != 0 )
            {
              v1324 = (_BYTE *)(v1307 - 6);
              v1325 = (char *)(v1307 - 6 + 5);
              v1326 = *v1325;
              if ( *(_BYTE *)(v1307 - 6) != 76
                || v1324[1] != 0x87
                || v1324[2]
                || v1324[3] != 0x98
                || v1324[4] != 0xC3
                || v1326 != -112 && v1326 != -15 )
              {
                goto LABEL_2554;
              }
              v1327 = *(volatile signed __int32 **)(v16 + 1208);
              while ( 1 )
              {
                _disable();
                if ( !_interlockedbittestandset(v1327, (*(_DWORD *)(v16 + 2392) >> 10) & 0x1F) )
                  break;
                _enable();
                _mm_pause();
              }
              v1328 = *(struct _KPRCB **)(v16 + 2216);
              v1329 = 38LL;
              v1330 = 304;
              v1331 = v1328;
              do
              {
                *(_QWORD *)v1331 = 0LL;
                v1330 -= 8;
                v1331 = (struct _KPRCB *)((char *)v1331 + 8);
                --v1329;
              }
              while ( v1329 );
              if ( v1330 )
              {
                v1329 = 0xFFFFFFFFLL;
                do
                {
                  *(_BYTE *)v1331 = 0;
                  v1331 = (struct _KPRCB *)((char *)v1331 + 1);
                  --v1330;
                }
                while ( v1330 );
              }
              *((_OWORD *)v1328 + 1) = *(_OWORD *)(v16 + 2064);
              *((_OWORD *)v1328 + 2) = *(_OWORD *)(v16 + 2080);
              *((_OWORD *)v1328 + 18) = *(_OWORD *)(v16 + 2096);
              v1604 = 303;
              v1605 = v1328;
              *((_WORD *)v1328 + 8) = v16 + 2132;
              v1332 = (v16 + 2132) >> 16;
              v1673 = v16 + 2132;
              *((_WORD *)v1328 + 11) = v1332;
              *((_DWORD *)v1328 + 6) = (v16 + 2132) >> 32;
              __sidt(v1629);
              __lidt(&v1604);
              *v1325 = -15;
              if ( *v1325 != -15 )
                goto LABEL_2233;
              if ( (*(_DWORD *)(v16 + 2396) & 0x20000) == 0 )
              {
                v1328 = KeGetCurrentPrcb();
                v1332 = v16 - 0x5C5FC0A76E374B18LL;
                **(_QWORD **)(v16 + 1176) = v16 - 0x5C5FC0A76E374B18LL;
                **(_QWORD **)(v16 + 1184) = v1328;
                **(_QWORD **)(v16 + 1192) = v1307;
                **(_QWORD **)(v16 + 1200) = 275LL;
              }
              ((void (__fastcall *)(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1307 - 6 + 5))(
                v1332,
                v1328,
                v1329,
                1LL);
              if ( (*(_DWORD *)(v16 + 2396) & 0x20000) == 0 )
              {
                **(_QWORD **)(v16 + 1176) = 0xA3A03F5891C8B4E8uLL;
                **(_QWORD **)(v16 + 1184) = 0LL;
                **(_QWORD **)(v16 + 1192) = 0LL;
                **(_QWORD **)(v16 + 1200) = 0LL;
              }
              if ( *v1325 == -15 )
              {
                *v1325 = -112;
                v1314 = *v1325 == -112;
              }
              else
              {
LABEL_2233:
                v1314 = 0LL;
              }
              __lidt(v1629);
              v17 = *(_QWORD *)(v16 + 1208);
              _InterlockedAnd((volatile signed __int32 *)v17, ~(1 << ((*(_DWORD *)(v16 + 2392) >> 10) & 0x1F)));
              _enable();
              if ( !(_DWORD)v1314 )
              {
LABEL_2554:
                if ( !*(_DWORD *)(v16 + 2240) )
                {
                  v1333 = v1520;
                  *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v16 + 2256) = (char *)v1333 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v16 + 2264) = *v1333;
                  *(_QWORD *)(v16 + 2272) = v1324;
                  *(_DWORD *)(v16 + 2240) = 1;
                  sub_140AD049C(v16, 0LL, v17, v1314);
                }
              }
              v1304 = v1529;
              v1305 = v1534;
            }
          }
          else
          {
            *(_DWORD *)(v16 + 2032) += v1308;
            v17 = v1307;
            v1309 = *(_DWORD *)(v16 + 2012);
            v1310 = (const char *)v1307;
            v1311 = *(_QWORD *)(v16 + 2016);
            v1312 = v1307 + v1308;
            if ( v1307 < v1312 )
            {
              do
              {
                _mm_prefetch(v1310, 0);
                v1310 += 64;
              }
              while ( (unsigned __int64)v1310 < v1312 );
            }
            v1313 = *(_QWORD *)(v16 + 2016);
            v1314 = v1308 >> 7;
            if ( (_DWORD)v1314 )
            {
              do
              {
                v1315 = 8LL;
                do
                {
                  v1316 = v1313 ^ *(_QWORD *)v17;
                  v1317 = *(_QWORD *)(v17 + 8);
                  v17 += 16LL;
                  v1313 = __ROL8__(__ROL8__(v1316, v1309) ^ v1317, v1309);
                  --v1315;
                }
                while ( v1315 );
                v1318 = __ROL8__(v1311 ^ (v17 - v1307), 17) ^ v1311 ^ (v17 - v1307);
                v1672 = (v1318 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1309 = ((unsigned __int8)v1672 ^ (unsigned __int8)(v1318 ^ v1309)) & 0x3F;
                if ( !v1309 )
                  LOBYTE(v1309) = 1;
                v66 = (_DWORD)v1314 == 1;
                v1314 = (unsigned int)(v1314 - 1);
              }
              while ( !v66 );
              v16 = v1521;
              v1303 = (int *)v1528;
            }
            v1319 = v1308 & 0x7F;
            if ( v1319 >= 8 )
            {
              v1314 = (unsigned __int64)(v1308 & 0x7F) >> 3;
              do
              {
                v1313 = __ROL8__(*(_QWORD *)v17 ^ v1313, v1309);
                v17 += 8LL;
                v1319 -= 8;
                --v1314;
              }
              while ( v1314 );
              v1305 = v1534;
            }
            if ( v1319 )
            {
              do
              {
                v1320 = *(unsigned __int8 *)v17++;
                v1313 = __ROL8__(v1320 ^ v1313, v1309);
                --v1319;
              }
              while ( v1319 );
              v16 = v1521;
              v1303 = (int *)v1528;
            }
            for ( i14 = v1313; ; LODWORD(v1313) = i14 ^ v1313 )
            {
              i14 >>= 31;
              if ( !i14 )
                break;
            }
            v1322 = v1313 & 0x7FFFFFFF;
          }
          v50 = (unsigned int)*v1303;
          if ( v1322 != (*v1303 & 0x7FFFFFFF) )
          {
            v1334 = v1308;
            if ( v1308 )
            {
              v17 = 64LL;
              if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
              {
                v1335 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1336 = v1307 & 0xFFFFFFFFFFFFF000uLL;
                v1337 = (v1334 + v1307 - 1) | 0xFFF;
                v1338 = (v1307 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1339 = v1335;
                  while ( 1 )
                  {
                    v1340 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v1336, 0LL);
                    if ( v1340 != -1073741267 )
                      break;
                    if ( v1335 > 1u )
                      goto LABEL_2248;
                    v1339 = v1335;
                    __writecr8(v1335);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1340 < 0 )
                    break;
LABEL_2248:
                  v1336 += 4096LL;
                  v1338 += 4096LL;
                  if ( v1338 == v1337 )
                  {
                    __writecr8(v1339);
                    v1303 = (int *)v1528;
                    goto LABEL_2250;
                  }
                }
                __writecr8(v1339);
                v1303 = (int *)v1528;
                v1307 = v1536;
                v50 = *v1528;
              }
            }
            v1342 = (unsigned int)v50;
            LODWORD(v1342) = v50 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              v1343 = v1322;
              v1302 = v1520;
              v50 = v1342 ^ v1343;
              *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v50;
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v1302 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v1302;
                *(_QWORD *)(v16 + 2272) = v1307;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v17, v1314);
              }
              v1304 = v1529;
              v1305 = v1534;
              goto LABEL_2252;
            }
LABEL_2250:
            v1305 = v1534;
            v1304 = v1529;
          }
          v1302 = v1520;
        }
LABEL_2252:
        ++v1303;
        v1304 += 3;
        v1528 = (unsigned int *)v1303;
        v1529 = v1304;
        v1341 = v1304 == v1305;
        if ( v1304 >= v1305 )
          goto LABEL_2255;
        v68 = v1726;
        if ( *(_DWORD *)(v16 + 2032) >= *(_DWORD *)(v16 + 2036) )
        {
          v1341 = v1304 == v1305;
LABEL_2255:
          if ( !v1341 )
          {
            *(_DWORD *)(v16 + 2028) = ((__int64)v1304 - v1526) / 12;
            goto LABEL_148;
          }
LABEL_2262:
          v1344 = *(_QWORD *)(v16 + 1304);
          v1345 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(v16 + 320))(v1344);
          v1347 = **(unsigned int ***)(v16 + 1512);
          v1348 = v1347 + 4;
          v1349 = *((_BYTE *)v1347 + 12);
          v1350 = (unsigned __int64)&v1347[6 * *v1347 + 4];
          do
          {
            v1351 = 24LL;
            v1352 = (__int64 *)(v1302 + 6);
            v1353 = v1348;
            do
            {
              v1354 = *(_QWORD *)v1353;
              v1353 += 2;
              v1355 = *v1352++;
              if ( v1354 != v1355 )
                goto LABEL_2270;
              v1351 = (unsigned int)(v1351 - 8);
            }
            while ( (unsigned int)v1351 >= 8 );
            if ( !(_DWORD)v1351 )
              break;
            while ( 1 )
            {
              v1346 = *(unsigned __int8 *)v1353;
              v1353 = (unsigned int *)((char *)v1353 + 1);
              v1356 = *(unsigned __int8 *)v1352;
              v1352 = (__int64 *)((char *)v1352 + 1);
              if ( v1346 != v1356 )
                break;
              v66 = (_DWORD)v1351 == 1;
              v1351 = (unsigned int)(v1351 - 1);
              if ( v66 )
                goto LABEL_2271;
            }
LABEL_2270:
            v1348 += 6;
          }
          while ( (unsigned __int64)v1348 < v1350 );
LABEL_2271:
          v16 = v1521;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v1521 + 384))(
            *(_QWORD *)(v1521 + 1304),
            v1346,
            v1351,
            v1352);
          __writecr8(v1345);
          if ( !v1349 )
            goto LABEL_2555;
          v50 = 16LL;
          if ( (*(_DWORD *)(v16 + 2396) & 0x10) != 0 && !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = (char *)v1302 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *v1302;
            *(_QWORD *)(v16 + 2272) = 1LL;
            *(_DWORD *)(v16 + 2240) = 1;
            sub_140AD049C(v16, 0LL, v17, v1357);
          }
          if ( *((_QWORD *)v1302 + 3) != 1LL )
          {
LABEL_2555:
            if ( v1348 == (unsigned int *)v1350 && !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = (char *)v1302 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *v1302;
              *(_QWORD *)(v16 + 2272) = v1348;
              *(_DWORD *)(v16 + 2240) = 1;
              sub_140AD049C(v16, 0LL, v17, v1357);
            }
          }
LABEL_1748:
          *(_DWORD *)(v16 + 2028) = 0;
          goto LABEL_148;
        }
        continue;
      }
    }
    if ( v68 == 28 )
    {
      v739 = *((unsigned int *)v59 + 4);
      if ( (_DWORD)v739 )
      {
        v786 = (_QWORD *)*((_QWORD *)v59 + 1);
        *(_DWORD *)(v16 + 2032) += v739;
        v787 = v786;
        v788 = *(_DWORD *)(v16 + 2012);
        v789 = (const char *)v786;
        v790 = *(_QWORD *)(v16 + 2016);
        if ( v786 < (_QWORD *)((char *)v786 + v739) )
        {
          do
          {
            _mm_prefetch(v789, 0);
            v789 += 64;
          }
          while ( v789 < (const char *)v786 + v739 );
        }
        v791 = *(_QWORD *)(v16 + 2016);
        v792 = (unsigned int)v739 >> 7;
        if ( (unsigned int)v739 >> 7 )
        {
          do
          {
            v793 = 8LL;
            do
            {
              v794 = v791 ^ *v787;
              v795 = v787[1];
              v787 += 2;
              v791 = __ROL8__(__ROL8__(v794, v788) ^ v795, v788);
              --v793;
            }
            while ( v793 );
            v796 = __ROL8__(v790 ^ ((char *)v787 - (char *)v786), 17) ^ v790 ^ ((char *)v787 - (char *)v786);
            v1657 = (v796 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v788 = ((unsigned __int8)(v796 ^ v1657) ^ (unsigned __int8)v788) & 0x3F;
            if ( !v788 )
              LOBYTE(v788) = 1;
            --v792;
          }
          while ( v792 );
          v16 = v1521;
        }
        v797 = v739 & 0x7F;
        if ( (unsigned int)v797 >= 8 )
        {
          v798 = (unsigned __int64)(unsigned int)v797 >> 3;
          do
          {
            v791 = __ROL8__(*v787++ ^ v791, v788);
            v797 = (unsigned int)(v797 - 8);
            --v798;
          }
          while ( v798 );
        }
        if ( (_DWORD)v797 )
        {
          do
          {
            v799 = *(unsigned __int8 *)v787;
            v787 = (_QWORD *)((char *)v787 + 1);
            v791 = __ROL8__(v799 ^ v791, v788);
            v797 = (unsigned int)(v797 - 1);
          }
          while ( (_DWORD)v797 );
          v16 = v1521;
        }
        for ( i15 = v791; ; LODWORD(v791) = i15 ^ v791 )
        {
          i15 >>= 31;
          if ( !i15 )
            break;
        }
        v801 = v791 & 0x7FFFFFFF;
        if ( v801 != *((_DWORD *)v59 + 5) )
        {
          if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
            v64 = 1;
          v802 = *((unsigned int *)v59 + 4);
          v803 = *((_QWORD *)v59 + 1);
          if ( *((_DWORD *)v59 + 4) )
          {
            v797 = 64LL;
            if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
            {
              v804 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v805 = v803 & 0xFFFFFFFFFFFFF000uLL;
              v1739 = (v803 + v802 - 1) | 0xFFF;
              v806 = (v803 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v807 = v804;
                while ( 1 )
                {
                  v808 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v16 + 1112))(
                           v805,
                           0LL,
                           v797,
                           v787);
                  if ( v808 != -1073741267 )
                    break;
                  if ( v64 )
                    goto LABEL_1344;
                  if ( v804 > 1u )
                    goto LABEL_1325;
                  v807 = v804;
                  __writecr8(v804);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v808 < 0 )
                  break;
LABEL_1325:
                v805 += 4096LL;
                v806 += 4096LL;
                if ( v806 == v1739 )
                {
                  __writecr8(v807);
                  v59 = (char *)v1520;
                  goto LABEL_1327;
                }
              }
LABEL_1344:
              __writecr8(v807);
              v59 = (char *)v1520;
            }
          }
          if ( !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v801;
            v821 = *((_QWORD *)v59 + 1);
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *(int *)v59;
              *(_QWORD *)(v16 + 2272) = v821;
              *(_DWORD *)(v16 + 2240) = 1;
              sub_140AD049C(v16, 0LL, v797, v787);
            }
          }
        }
LABEL_1327:
        v809 = 0;
        v1550 = *((_QWORD *)v59 + 1) - 112LL;
        v768 = *(unsigned int **)(v1550 + 80);
        if ( v768 )
          v809 = *v768;
        *(_DWORD *)(v16 + 2032) += v809;
        v810 = v768;
        v811 = *(_DWORD *)(v16 + 2012);
        v812 = (const char *)v768;
        v813 = *(_QWORD *)(v16 + 2016);
        v50 = (unsigned __int64)v768 + v809;
        if ( (unsigned __int64)v768 < v50 )
        {
          do
          {
            _mm_prefetch(v812, 0);
            v812 += 64;
          }
          while ( (unsigned __int64)v812 < v50 );
        }
        v17 = *(_QWORD *)(v16 + 2016);
        v814 = v809 >> 7;
        if ( v809 >> 7 )
        {
          do
          {
            v815 = 8LL;
            do
            {
              v816 = v17 ^ *(_QWORD *)v810;
              v817 = *((_QWORD *)v810 + 1);
              v810 += 4;
              v17 = __ROL8__(__ROL8__(v816, v811) ^ v817, v811);
              --v815;
            }
            while ( v815 );
            v50 = __ROL8__(v813 ^ ((char *)v810 - (char *)v768), 17) ^ v813 ^ ((char *)v810 - (char *)v768);
            v1658 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v811 = ((unsigned __int8)v50 ^ (unsigned __int8)(v1658 ^ v811)) & 0x3F;
            if ( !v811 )
              v811 = 1;
            --v814;
          }
          while ( v814 );
          v16 = v1521;
        }
        v58 = v809 & 0x7F;
        if ( (unsigned int)v58 >= 8 )
        {
          v818 = (unsigned __int64)(unsigned int)v58 >> 3;
          do
          {
            v50 = v811;
            v17 = __ROL8__(*(_QWORD *)v810 ^ v17, v811);
            v810 += 2;
            v58 = (unsigned int)(v58 - 8);
            --v818;
          }
          while ( v818 );
        }
        for ( ; (_DWORD)v58; v58 = (unsigned int)(v58 - 1) )
        {
          v819 = *(unsigned __int8 *)v810;
          v50 = v811;
          v810 = (unsigned int *)((char *)v810 + 1);
          v17 = __ROL8__(v819 ^ v17, v811);
        }
        for ( i16 = v17 >> 31; i16; i16 >>= 31 )
          v17 = (unsigned int)i16 ^ (unsigned int)v17;
        v822 = *((unsigned int *)v59 + 11);
        LODWORD(v17) = v17 & 0x7FFFFFFF;
        if ( (_DWORD)v17 == (_DWORD)v822 || *(_DWORD *)(v16 + 2240) )
          goto LABEL_148;
        v50 = v822 ^ (unsigned int)v17;
        *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v50;
      }
      else
      {
        v1621 = v59 + 48;
        v740 = *((_WORD *)v59 + 20);
        v1519 = &v1550;
        v1620[0] = v740;
        v1620[1] = v740;
        v741 = *(_QWORD *)(v16 + 1256);
        v742 = *(int (__fastcall **)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *))(v16 + 472);
        LOBYTE(v1518) = 0;
        if ( v742(v1620, 0LL, 0LL, 0LL, v741, v1518, 0LL, &v1550) < 0 )
          goto LABEL_148;
        if ( (*(_DWORD *)(v1550 + 16) & 0x10) == 0 )
        {
          v743 = v1550;
          goto LABEL_1217;
        }
        (*(void (__fastcall **)(_QWORD, char *))(v16 + 496))(*(_QWORD *)(v16 + 472), v1717);
        if ( v1718 )
        {
          v744 = *(__int64 (**)(void))(v16 + 488);
          v51 = v1718;
          v1556 = v1718;
          v745 = v744();
          if ( v745 )
          {
            v54 = *(_DWORD *)(v745 + 80);
            v1547 = v54;
          }
        }
        (*(void (__fastcall **)(_QWORD, char *))(v16 + 496))(*((_QWORD *)v59 + 3), v1719);
        if ( v1720 && (v746 = *(__int64 (**)(void))(v16 + 488), v53 = v1720, v1564 = v1720, (v747 = v746()) != 0) )
        {
          v748 = *(_DWORD *)(v747 + 80);
          v1544 = v748;
        }
        else
        {
          v748 = v1544;
        }
        if ( !_bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) )
        {
          *((_QWORD *)v59 + 1) = v1550 + 112;
          *((_DWORD *)v59 + 4) = 224;
        }
        v743 = v1550;
        v749 = 0;
        v750 = v54;
        v17 = 0LL;
        do
        {
          v58 = *(_QWORD *)(v1550 + 8LL * v749 + 112);
          if ( !v54 || v58 < v51 || v58 > v54 + v51 - 1 )
          {
            if ( !v748 || (v17 = v53 + v748 - 1LL, v58 < v53) || v58 > v17 )
            {
              if ( _bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) )
              {
                v782 = *(_QWORD **)(v16 + 2632);
                v783 = 48;
                v17 = 6LL;
                do
                {
                  v783 -= 8;
                  *v782 = *(_QWORD *)v59;
                  v59 += 8;
                  ++v782;
                  --v17;
                }
                while ( v17 );
                if ( v783 )
                {
                  do
                  {
                    v784 = *v59++;
                    *(_BYTE *)v782 = v784;
                    v782 = (_QWORD *)((char *)v782 + 1);
                    --v783;
                  }
                  while ( v783 );
                  v16 = v1521;
                }
                v59 = *(char **)(v16 + 2632);
              }
              *((_QWORD *)v59 + 4) = v58;
              v785 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)v785 = v59;
              *(_DWORD *)(v785 + 16) = 48;
              goto LABEL_444;
            }
            v17 = 0LL;
          }
          ++v749;
        }
        while ( v749 < 0x1Cu );
        if ( _bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) )
        {
LABEL_1217:
          (*(void (__fastcall **)(__int64))(v16 + 464))(v743);
          goto LABEL_148;
        }
        v751 = (_QWORD *)*((_QWORD *)v59 + 1);
        v752 = *((unsigned int *)v59 + 4);
        v753 = v751;
        *(_DWORD *)(v16 + 2032) += v752;
        v754 = (const char *)v751;
        v755 = *(_DWORD *)(v16 + 2012);
        v756 = *(_QWORD *)(v16 + 2016);
        if ( v751 < (_QWORD *)((char *)v751 + v752) )
        {
          do
          {
            _mm_prefetch(v754, 0);
            v754 += 64;
          }
          while ( v754 < (const char *)v751 + v752 );
        }
        v17 = *(_QWORD *)(v16 + 2016);
        v757 = (unsigned int)v752 >> 7;
        if ( (unsigned int)v752 >> 7 )
        {
          do
          {
            v758 = 8LL;
            do
            {
              v759 = v17 ^ *v753;
              v760 = v753[1];
              v753 += 2;
              v17 = __ROL8__(__ROL8__(v759, v755) ^ v760, v755);
              --v758;
            }
            while ( v758 );
            v761 = __ROL8__(v756 ^ ((char *)v753 - (char *)v751), 17) ^ v756 ^ ((char *)v753 - (char *)v751);
            v1655 = (v761 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v755 = ((unsigned __int8)(v761 ^ v1655) ^ (unsigned __int8)v755) & 0x3F;
            if ( !v755 )
              LOBYTE(v755) = 1;
            --v757;
          }
          while ( v757 );
          v16 = v1521;
          v51 = v1556;
        }
        v762 = v752 & 0x7F;
        if ( v762 >= 8 )
        {
          v763 = (unsigned __int64)v762 >> 3;
          do
          {
            v17 = __ROL8__(*v753++ ^ v17, v755);
            v762 -= 8;
            --v763;
          }
          while ( v763 );
        }
        v764 = 0;
        if ( v762 )
        {
          do
          {
            v765 = *(unsigned __int8 *)v753;
            v753 = (_QWORD *)((char *)v753 + 1);
            v17 = __ROL8__(v765 ^ v17, v755);
            --v762;
          }
          while ( v762 );
          v51 = v1556;
        }
        for ( i17 = v17; ; v17 = (unsigned int)i17 ^ (unsigned int)v17 )
        {
          i17 >>= 31;
          if ( !i17 )
            break;
        }
        LODWORD(v17) = v17 & 0x7FFFFFFF;
        v767 = 0;
        *((_DWORD *)v59 + 5) = v17;
        v768 = *(unsigned int **)(v1550 + 80);
        if ( !v768 || (v767 = *v768, v58 = (*v768 - 8) >> 3, !(_DWORD)v58) )
        {
LABEL_1265:
          *(_DWORD *)(v16 + 2032) += v767;
          v769 = v768;
          v770 = *(_DWORD *)(v16 + 2012);
          v771 = (const char *)v768;
          v772 = *(_QWORD *)(v16 + 2016);
          v50 = (unsigned __int64)v768 + v767;
          if ( (unsigned __int64)v768 < v50 )
          {
            do
            {
              _mm_prefetch(v771, 0);
              v771 += 64;
            }
            while ( (unsigned __int64)v771 < v50 );
          }
          v17 = *(_QWORD *)(v16 + 2016);
          v773 = v767 >> 7;
          if ( v767 >> 7 )
          {
            do
            {
              v774 = 8LL;
              do
              {
                v775 = v17 ^ *(_QWORD *)v769;
                v776 = *((_QWORD *)v769 + 1);
                v769 += 4;
                v17 = __ROL8__(__ROL8__(v775, v770) ^ v776, v770);
                --v774;
              }
              while ( v774 );
              v50 = __ROL8__(v772 ^ ((char *)v769 - (char *)v768), 17) ^ v772 ^ ((char *)v769 - (char *)v768);
              v1656 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v770 = ((unsigned __int8)(v50 ^ v1656) ^ (unsigned __int8)v770) & 0x3F;
              if ( !v770 )
                v770 = 1;
              --v773;
            }
            while ( v773 );
            v16 = v1521;
          }
          v777 = v767 & 0x7F;
          if ( v777 >= 8 )
          {
            v778 = (unsigned __int64)v777 >> 3;
            do
            {
              v50 = v770;
              v17 = __ROL8__(*(_QWORD *)v769 ^ v17, v770);
              v769 += 2;
              v777 -= 8;
              --v778;
            }
            while ( v778 );
          }
          for ( ; v777; --v777 )
          {
            v779 = *(unsigned __int8 *)v769;
            v50 = v770;
            v769 = (unsigned int *)((char *)v769 + 1);
            v17 = __ROL8__(v779 ^ v17, v770);
          }
          for ( i18 = v17 >> 31; i18; i18 >>= 31 )
            v17 = (unsigned int)i18 ^ (unsigned int)v17;
          LODWORD(v17) = v17 & 0x7FFFFFFF;
          *((_DWORD *)v59 + 11) = v17;
          goto LABEL_148;
        }
        while ( 1 )
        {
          v50 = *(_QWORD *)&v768[2 * v764 + 2];
          if ( v50 && (!v750 || v50 < v51 || v50 > v51 + v750 - 1) )
          {
            if ( !v1544 )
              break;
            v17 = v1544 + v1564 - 1;
            if ( v50 < v1564 || v50 > v17 )
              break;
          }
          if ( ++v764 >= (unsigned int)v58 )
            goto LABEL_1265;
        }
        *((_QWORD *)v59 + 4) = v50;
        v781 = *(_QWORD *)(v16 + 1384);
        *(_QWORD *)v781 = v59;
        *(_DWORD *)(v781 + 16) = 48;
      }
      if ( *(_DWORD *)(v16 + 2240) )
        goto LABEL_148;
      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v16 + 2264) = *(int *)v59;
      *(_QWORD *)(v16 + 2272) = v768;
      goto LABEL_1133;
    }
    if ( v68 > 12 )
    {
      if ( v68 <= 14 )
      {
        if ( v68 == 14 )
        {
          if ( !*(_QWORD *)(v16 + 2376) )
            goto LABEL_1748;
          v50 = *(unsigned int *)(v16 + 2396);
          if ( ((*(_DWORD *)(v16 + 2396) >> 2) & 1) != 0 )
            goto LABEL_1748;
          if ( *(_DWORD *)(v16 + 2028) )
          {
            v50 = ((unsigned int)v50 >> 5) & 1;
            if ( (_DWORD)v50 )
              goto LABEL_1748;
          }
          else
          {
            *(_DWORD *)(v16 + 2396) = v50 ^ ((unsigned __int8)v50 ^ (unsigned __int8)(8 * v50)) & 0x20;
          }
        }
        v705 = (_QWORD *)*((_QWORD *)v59 + 1);
        v706 = *((unsigned int *)v59 + 4);
        v707 = v705;
        *(_DWORD *)(v16 + 2032) += v706;
        v708 = (const char *)v705;
        v709 = *(_DWORD *)(v16 + 2012);
        v710 = *(_QWORD *)(v16 + 2016);
        v50 = (unsigned __int64)v705 + v706;
        if ( v705 < (_QWORD *)((char *)v705 + v706) )
        {
          do
          {
            _mm_prefetch(v708, 0);
            v708 += 64;
          }
          while ( (unsigned __int64)v708 < v50 );
        }
        v711 = *(_QWORD *)(v16 + 2016);
        v712 = (unsigned int)v706 >> 7;
        if ( (unsigned int)v706 >> 7 )
        {
          do
          {
            v713 = 8LL;
            do
            {
              v714 = v711 ^ *v707;
              v715 = v707[1];
              v707 += 2;
              v711 = __ROL8__(__ROL8__(v714, v709) ^ v715, v709);
              --v713;
            }
            while ( v713 );
            v50 = __ROL8__(v710 ^ ((char *)v707 - (char *)v705), 17) ^ v710 ^ ((char *)v707 - (char *)v705);
            v1654 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v709 = ((unsigned __int8)(v50 ^ v1654) ^ (unsigned __int8)v709) & 0x3F;
            if ( !v709 )
              v709 = 1;
            --v712;
          }
          while ( v712 );
          v16 = v1521;
        }
        v17 = v706 & 0x7F;
        if ( (unsigned int)v17 >= 8 )
        {
          v716 = (unsigned __int64)(unsigned int)v17 >> 3;
          do
          {
            v50 = v709;
            v711 = __ROL8__(*v707++ ^ v711, v709);
            v17 = (unsigned int)(v17 - 8);
            --v716;
          }
          while ( v716 );
        }
        if ( (_DWORD)v17 )
        {
          do
          {
            v717 = *(unsigned __int8 *)v707;
            v50 = v709;
            v707 = (_QWORD *)((char *)v707 + 1);
            v711 = __ROL8__(v717 ^ v711, v709);
            v17 = (unsigned int)(v17 - 1);
          }
          while ( (_DWORD)v17 );
          v16 = v1521;
        }
        for ( i19 = v711; ; LODWORD(v711) = i19 ^ v711 )
        {
          i19 >>= 31;
          if ( !i19 )
            break;
        }
        v719 = v711 & 0x7FFFFFFF;
        if ( v719 == *((_DWORD *)v59 + 5) )
          goto LABEL_1188;
        _InterlockedOr(v1517, 0);
        if ( (*((_DWORD *)v59 + 6) & 1) != 0 )
        {
          LOBYTE(v50) = **(_BYTE **)(v16 + 1368);
          if ( (_BYTE)v50 )
            goto LABEL_1188;
        }
        v50 = *((unsigned int *)v59 + 4);
        v720 = *((_QWORD *)v59 + 1);
        if ( *((_DWORD *)v59 + 4) )
        {
          v17 = 64LL;
          if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
          {
            v721 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v722 = v720 & 0xFFFFFFFFFFFFF000uLL;
            v723 = (v720 + v50 - 1) | 0xFFF;
            v724 = (v720 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v725 = v721;
              while ( 1 )
              {
                v726 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD *))(v16 + 1112))(
                         v722,
                         0LL,
                         v17,
                         v707);
                if ( v726 != -1073741267 )
                  break;
                if ( v721 > 1u )
                  goto LABEL_1182;
                v725 = v721;
                __writecr8(v721);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v726 < 0 )
                break;
LABEL_1182:
              v722 += 4096LL;
              v724 += 4096LL;
              if ( v724 == v723 )
              {
                __writecr8(v725);
                v59 = (char *)v1520;
LABEL_1188:
                if ( !_bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) )
                  goto LABEL_148;
                v17 = *((unsigned int *)v59 + 4);
                if ( !(_DWORD)v17 )
                  goto LABEL_148;
                sub_1403F966C(v16, *((_QWORD *)v59 + 1), v17, v1697);
                v17 = 16LL;
                v727 = (__int64 *)(v59 + 28);
                v728 = (unsigned __int64 *)v1697;
                do
                {
                  v50 = *v728++;
                  v729 = *v727++;
                  if ( v50 != v729 )
                    goto LABEL_1197;
                  v17 = (unsigned int)(v17 - 8);
                }
                while ( (unsigned int)v17 >= 8 );
                if ( !(_DWORD)v17 )
                  goto LABEL_1212;
                while ( 1 )
                {
                  v730 = *(unsigned __int8 *)v728;
                  v728 = (unsigned __int64 *)((char *)v728 + 1);
                  v731 = *(unsigned __int8 *)v727;
                  v727 = (__int64 *)((char *)v727 + 1);
                  if ( v730 != v731 )
                    break;
                  v66 = (_DWORD)v17 == 1;
                  v17 = (unsigned int)(v17 - 1);
                  if ( v66 )
                    goto LABEL_1212;
                }
LABEL_1197:
                _InterlockedOr(v1517, 0);
                if ( (*((_DWORD *)v59 + 6) & 1) == 0 || (LOBYTE(v50) = **(_BYTE **)(v16 + 1368), !(_BYTE)v50) )
                {
                  v732 = *((unsigned int *)v59 + 4);
                  v50 = *((_QWORD *)v59 + 1);
                  if ( *((_DWORD *)v59 + 4) )
                  {
                    v17 = 64LL;
                    if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
                    {
                      v733 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v734 = v50 & 0xFFFFFFFFFFFFF000uLL;
                      v735 = (v50 + v732 - 1) | 0xFFF;
                      v736 = (v50 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v737 = v733;
                        while ( 1 )
                        {
                          v738 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, __int64 *))(v16 + 1112))(
                                   v734,
                                   0LL,
                                   v17,
                                   v727);
                          if ( v738 != -1073741267 )
                            break;
                          if ( v733 > 1u )
                            goto LABEL_1207;
                          v737 = v733;
                          __writecr8(v733);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v738 < 0 )
                          break;
LABEL_1207:
                        v734 += 4096LL;
                        v736 += 4096LL;
                        if ( v736 == v735 )
                        {
                          __writecr8(v737);
                          goto LABEL_1212;
                        }
                      }
                      __writecr8(v737);
                      v50 = *((_QWORD *)v59 + 1);
                    }
                  }
                  if ( !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v59;
                    *(_QWORD *)(v16 + 2272) = v50;
                    *(_DWORD *)(v16 + 2240) = 1;
                    sub_140AD049C(v16, 0LL, v17, v727);
                  }
                }
LABEL_1212:
                v161 = 16 * *((_DWORD *)v59 + 4);
LABEL_350:
                *(_DWORD *)(v16 + 2032) += v161;
                goto LABEL_148;
              }
            }
            __writecr8(v725);
            v59 = (char *)v1520;
          }
        }
        if ( !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v719;
          v50 = *((_QWORD *)v59 + 1);
          if ( !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *(int *)v59;
            *(_QWORD *)(v16 + 2272) = v50;
            *(_DWORD *)(v16 + 2240) = 1;
            sub_140AD049C(v16, 0LL, v17, v707);
          }
        }
        goto LABEL_1188;
      }
      if ( v68 == 15 )
      {
        if ( *(_DWORD *)(v16 + 2336) == 11 )
        {
          *(_DWORD *)(v16 + 2032) += 256;
          v697 = *(_QWORD *)(v16 + 1376);
          v698 = (*(__int64 (__fastcall **)(__int64))(v16 + 712))(v697);
          if ( v698 )
          {
            v699 = (*(__int64 (__fastcall **)(__int64))(v16 + 720))(v698);
            v702 = *((_QWORD *)v59 + 3);
            v703 = v699;
            if ( v702 )
            {
              if ( v702 != v699 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v699;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v700, v701);
              }
            }
            else
            {
              v704 = *(_QWORD *)(v16 + 2368);
              if ( (!*(_DWORD *)(v16 + 2364) || v699 < v704 || v699 > v704 + *(unsigned int *)(v16 + 2364) - 1LL)
                && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v699;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v700, v701);
              }
              *((_QWORD *)v59 + 3) = v703;
            }
            (*(void (__fastcall **)(__int64, __int64))(v16 + 728))(v697, v698);
          }
        }
        goto LABEL_148;
      }
      if ( v68 != 21 )
      {
        if ( v68 != 24 )
        {
          if ( v68 != 25 )
          {
            if ( v68 == 26 )
            {
              if ( (*(_DWORD *)(v16 + 2040) & 1) == 0 )
              {
                v272 = 0;
                v273 = *(unsigned int **)(v16 + 1408);
                v274 = *(_QWORD *)(v16 + 1312);
                v1524 = *(_QWORD *)(v16 + 1416);
                v275 = *(void (**)(void))(v16 + 360);
                v1733 = 0;
                v1528 = v273;
                v275();
                if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 || (v276 = *(_DWORD *)(v16 + 2328), v276 >= 7) )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 280))(*(_QWORD *)(v16 + 2504), 0LL);
                  v277 = 0x80;
                }
                else
                {
                  v277 = 1 << v276;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(v16 + 296))(v274, 0LL);
                v278 = *(volatile signed __int8 ***)(v16 + 1272);
                v279 = *v278;
                if ( *v278 != (volatile signed __int8 *)v278 )
                {
                  do
                  {
                    _InterlockedOr8(&v279[*(_QWORD *)(v16 + 1672) - *(_QWORD *)(v16 + 1696)], v277);
                    v279 = *(volatile signed __int8 **)v279;
                    ++v272;
                  }
                  while ( v279 != (volatile signed __int8 *)v278 );
                  v273 = v1528;
                  v1733 = v272;
                }
                (*(void (__fastcall **)(unsigned int *, _QWORD))(v16 + 296))(v273, 0LL);
                v281 = *(_QWORD ***)(v16 + 1400);
                v282 = *v281;
                if ( *v281 != v281 )
                {
                  v283 = v1524;
                  v284 = v1520;
                  do
                  {
                    v285 = (char *)v282 - *(_QWORD *)(v16 + 1808);
                    if ( v285 != (char *)v283 )
                    {
                      v286 = *(_QWORD *)(v16 + 1672);
                      v287 = v286;
                      v288 = *(_QWORD *)&v285[*(_QWORD *)(v16 + 1800)];
                      if ( (v277 & *(_BYTE *)(v288 + v286)) == 0
                        && (*(_DWORD *)(v288 + *(_QWORD *)(v16 + 1680)) & *(_DWORD *)(v16 + 1704)) != 0
                        && !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = (char *)v284 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *v284;
                        *(_QWORD *)(v16 + 2272) = v288;
                        *(_DWORD *)(v16 + 2240) = 1;
                        sub_140AD049C(v16, 0LL, v286, v280);
                        v287 = *(_QWORD *)(v16 + 1672);
                      }
                      _InterlockedAnd8((volatile signed __int8 *)(v288 + v287), ~v277);
                      v283 = v1524;
                    }
                    v282 = (_QWORD *)*v282;
                  }
                  while ( v282 != v281 );
                  v272 = v1733;
                  v273 = v1528;
                }
                (*(void (__fastcall **)(unsigned int *, _QWORD))(v16 + 304))(v273, 0LL);
                if ( v277 == 0x80 )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 288))(*(_QWORD *)(v16 + 2504), 0LL);
                (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 304))(*(_QWORD *)(v16 + 1312), 0LL);
                (*(void (**)(void))(v16 + 368))();
                *(_DWORD *)(v16 + 2032) += v272 << 8;
              }
              goto LABEL_148;
            }
            if ( v68 == 27 )
            {
              if ( (*(_DWORD *)(v16 + 2040) & 1) == 0 )
                goto LABEL_148;
              v250 = *(_QWORD *)(v16 + 1408);
              v251 = *(unsigned int **)(v16 + 1416);
              v252 = *(void (**)(void))(v16 + 360);
              v253 = *(_QWORD *)(v16 + 1312);
              v1526 = v250;
              v1528 = v251;
              v1522 = 0;
              v252();
              if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 || (v254 = *(_DWORD *)(v16 + 2328), v254 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 280))(*(_QWORD *)(v16 + 2504), 0LL);
                LOBYTE(v7) = 0x80;
              }
              else
              {
                LOBYTE(v7) = 1 << v254;
              }
              v255 = *(void (__fastcall **)(__int64, _QWORD))(v16 + 296);
              LODWORD(v1523) = v7;
              v255(v253, 0LL);
              (*(void (__fastcall **)(__int64, _QWORD))(v16 + 296))(v250, 0LL);
              v256 = *(unsigned __int64 **)(v16 + 1400);
              v257 = 0LL;
              v1524 = 0LL;
              v258 = *v256;
              if ( (unsigned __int64 *)*v256 != v256 )
              {
                do
                {
                  if ( (unsigned int *)(v258 - 24) != v251 )
                  {
                    v259 = *(_QWORD *)(v258 - 24 + *(_QWORD *)(v16 + 1800));
                    if ( (*(_DWORD *)(v259 + *(_QWORD *)(v16 + 1680)) & *(_DWORD *)(v16 + 1704)) == 0 )
                    {
                      v260 = *(_QWORD *)(v258 - 24 + *(_QWORD *)(v16 + 1800));
                      if ( v257 )
                        v260 = 1LL;
                      v257 = v260;
                    }
                    _InterlockedOr8((volatile signed __int8 *)(v259 + *(_QWORD *)(v16 + 1672)), v7);
                  }
                  v258 = *(_QWORD *)v258;
                }
                while ( (unsigned __int64 *)v258 != v256 );
                v1524 = v257;
              }
              v261 = *(_QWORD ***)(v16 + 1272);
              v262 = *v261;
              if ( *v261 != v261 )
              {
                v263 = v1522;
                v258 = (unsigned __int8)v7;
                v264 = ~(_BYTE)v7;
                v265 = v1528;
                v1732 = v258;
                do
                {
                  v266 = (char *)v262 - *(_QWORD *)(v16 + 1696);
                  v267 = *(_QWORD *)(v16 + 1672);
                  if ( (v266[v267] & (unsigned int)v258) == 0 )
                  {
                    v268 = *(unsigned int **)&v266[*(_QWORD *)(v16 + 1688)];
                    if ( v268 && v268 != v265 && !*(_DWORD *)(v16 + 2240) )
                    {
                      v269 = v1520;
                      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v16 + 2256) = (char *)v269 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v16 + 2264) = *v269;
                      *(_QWORD *)(v16 + 2272) = v266;
                      *(_DWORD *)(v16 + 2240) = 1;
                      sub_140AD049C(v16, 0LL, v268, v256);
                      v267 = *(_QWORD *)(v16 + 1672);
                    }
                    v258 = v1732;
                  }
                  _InterlockedAnd8(&v266[v267], v264);
                  v262 = (_QWORD *)*v262;
                  ++v263;
                }
                while ( v262 != v261 );
                LOBYTE(v7) = (_BYTE)v1523;
                v251 = v1528;
                v1522 = v263;
                v257 = v1524;
              }
              if ( v257 )
              {
                if ( v257 == 1 )
                {
                  v270 = *(_QWORD ***)(v16 + 1400);
                  for ( i20 = *v270; i20 != v270; i20 = (_QWORD *)*i20 )
                  {
                    v258 = (unsigned __int64)(i20 - 3);
                    if ( i20 - 3 != (_QWORD *)v251 )
                    {
                      v258 = *(_QWORD *)(v258 + *(_QWORD *)(v16 + 1800));
                      _InterlockedAnd8((volatile signed __int8 *)(v258 + *(_QWORD *)(v16 + 1672)), ~(_BYTE)v7);
                    }
                  }
                }
                else
                {
                  _InterlockedAnd8((volatile signed __int8 *)(*(_QWORD *)(v16 + 1672) + v257), ~(_BYTE)v7);
                }
              }
              (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64))(v16 + 304))(v1526, 0LL, v258);
              if ( (_BYTE)v7 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 288))(*(_QWORD *)(v16 + 2504), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 304))(*(_QWORD *)(v16 + 1312), 0LL);
              (*(void (**)(void))(v16 + 368))();
              v186 = v1522;
LABEL_385:
              v161 = v186 << 8;
              goto LABEL_350;
            }
            goto LABEL_2297;
          }
          v289 = *(_QWORD ***)(v16 + 1288);
          v290 = *(__int64 (**)(void))(v16 + 872);
          v1526 = (__int64)v289;
          v1734 = 0;
          v1538 = v290();
          _disable();
          v291 = *(_QWORD *)((char *)KeGetCurrentPrcb() + *(_QWORD *)(v16 + 1560));
          _enable();
          (*(void (__fastcall **)(__int64))(v16 + 344))(v291);
          LOBYTE(v292) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(v16 + 224))(*(_QWORD *)(v16 + 1296), v292);
          v293 = 0;
          v294 = **(unsigned int ***)(v16 + 1512);
          v295 = *v294;
          v1524 = (__int64)(v294 + 4);
          v1528 = &v294[6 * v295 + 4];
          if ( *((_BYTE *)v294 + 12) )
          {
            v296 = *v289;
            LODWORD(v295) = 0;
            while ( v296 != v289 )
            {
              v296 = (_QWORD *)*v296;
              LODWORD(v295) = v295 + 1;
            }
          }
          v297 = *(unsigned int *)(v16 + 2008);
          v298 = __rdtsc();
          v299 = __ROR8__(v298, 3);
          v1691 = ((v299 ^ v298) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v300 = ((unsigned __int16)v1691 ^ (unsigned __int16)(8193 * (v299 ^ v298))) & 0x7FF;
          v301 = __rdtsc();
          v302 = (__ROR8__(v301, 3) ^ v301) * (unsigned __int128)0x7010008004002001uLL;
          v1692 = *((_QWORD *)&v302 + 1);
          v303 = (*((_QWORD *)&v302 + 1) ^ (unsigned __int64)v302) % (unsigned int)(v300 + 1);
          v304 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v16 + 232))(
                   66LL,
                   (unsigned int)(v300 + 8 * v295),
                   v297);
          v307 = 0LL;
          v308 = v304;
          if ( !v304 )
          {
            ++*(_DWORD *)(v16 + 2528);
LABEL_567:
            v1584 = 0LL;
            goto LABEL_588;
          }
          v309 = v303;
          v310 = (unsigned __int64 *)v304;
          if ( (unsigned int)v303 >= 8 )
          {
            v311 = (unsigned __int64)(unsigned int)v303 >> 3;
            do
            {
              v312 = __rdtsc();
              v309 -= 8;
              v313 = (__ROR8__(v312, 3) ^ v312) * (unsigned __int128)0x7010008004002001uLL;
              v1707 = *((_QWORD *)&v313 + 1);
              v305 = v313 ^ *((_QWORD *)&v313 + 1);
              *v310++ = v305;
              --v311;
            }
            while ( v311 );
            v16 = v1521;
            v289 = (_QWORD **)v1526;
          }
          if ( v309 )
          {
            v314 = __rdtsc();
            v315 = (__ROR8__(v314, 3) ^ v314) * (unsigned __int128)0x7010008004002001uLL;
            v1712 = *((_QWORD *)&v315 + 1);
            v305 = v315 ^ *((_QWORD *)&v315 + 1);
            do
            {
              *(_BYTE *)v310 = v305;
              v310 = (unsigned __int64 *)((char *)v310 + 1);
              v305 >>= 8;
              --v309;
            }
            while ( v309 );
          }
          v316 = v300 - v303;
          v306 = v308 + (unsigned int)v303 + (unsigned __int64)(unsigned int)(8 * v295);
          if ( v316 >= 8 )
          {
            v317 = (unsigned __int64)v316 >> 3;
            do
            {
              v318 = __rdtsc();
              v316 -= 8;
              v319 = (__ROR8__(v318, 3) ^ v318) * (unsigned __int128)0x7010008004002001uLL;
              v1713 = *((_QWORD *)&v319 + 1);
              v305 = v319 ^ *((_QWORD *)&v319 + 1);
              *(_QWORD *)v306 = v305;
              v306 += 8LL;
              --v317;
            }
            while ( v317 );
          }
          v307 = 0LL;
          if ( v316 )
          {
            v320 = __rdtsc();
            v321 = (__ROR8__(v320, 3) ^ v320) * (unsigned __int128)0x7010008004002001uLL;
            v1640 = *((_QWORD *)&v321 + 1);
            v305 = v321 ^ *((_QWORD *)&v321 + 1);
            do
            {
              *(_BYTE *)v306++ = v305;
              v305 >>= 8;
              --v316;
            }
            while ( v316 );
          }
          v322 = (unsigned int)v303 + v308;
          v1584 = v308;
          if ( !v322 )
            goto LABEL_567;
          v323 = *v289;
          while ( v323 != v289 )
          {
            v324 = *(_QWORD *)((char *)v323 + *(_QWORD *)(v16 + 1824) - *(_QWORD *)(v16 + 1816));
            if ( !(*(unsigned int (__fastcall **)(__int64))(v16 + 664))(v324) && v293 < (unsigned int)v295 )
            {
              v325 = v293++;
              *(_QWORD *)(v322 + 8 * v325) = v324;
            }
            v323 = (_QWORD *)*v323;
            ++v1734;
          }
          (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(v16 + 904))(v322, v293, v306, v307);
          v326 = v1524;
          v327 = v1528;
LABEL_575:
          v328 = *(_QWORD *)(v326 + 8);
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))(v16 + 664))(v328) )
            goto LABEL_587;
          v305 = v293 - 1;
          v306 = 0LL;
          if ( (v305 & 0x80000000) != 0LL )
          {
LABEL_585:
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              v330 = v1520;
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = (char *)v330 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *v330;
              *(_QWORD *)(v16 + 2272) = v328;
              *(_DWORD *)(v16 + 2240) = 1;
              sub_140AD049C(v16, 0LL, v306, v307);
            }
            goto LABEL_587;
          }
          while ( 1 )
          {
            v329 = ((int)v305 + (int)v306) >> 1;
            if ( v328 >= *(_QWORD *)(v322 + 8LL * v329) )
            {
              if ( v328 <= *(_QWORD *)(v322 + 8LL * v329) )
              {
                if ( (int)v305 < (int)v306 )
                  goto LABEL_585;
LABEL_587:
                v326 += 24LL;
                if ( v326 >= (unsigned __int64)v327 )
                {
LABEL_588:
                  (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, __int64))(v16 + 264))(
                    *(_QWORD *)(v16 + 1296),
                    v305,
                    v306,
                    v307);
                  (*(void (**)(void))(v16 + 352))();
                  (*(void (__fastcall **)(__int64))(v16 + 880))(v1538);
                  if ( v1584 )
                  {
                    *(_DWORD *)(v16 + 2032) += v1734 << 9;
                    (*(void (__fastcall **)(__int64))(v16 + 240))(v1584);
                  }
                  goto LABEL_148;
                }
                goto LABEL_575;
              }
              v306 = (unsigned int)(v329 + 1);
            }
            else
            {
              if ( !v329 )
                goto LABEL_585;
              v305 = (unsigned int)(v329 - 1);
            }
            if ( (int)v305 < (int)v306 )
              goto LABEL_585;
          }
        }
        if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 && (*(_DWORD *)(v16 + 2396) & 0x1000) == 0 )
        {
          v331 = __rdtsc();
          v332 = (__ROR8__(v331, 3) ^ v331) * (unsigned __int128)0x7010008004002001uLL;
          v1641 = *((_QWORD *)&v332 + 1);
          *(_DWORD *)(v16 + 2028) = ((unsigned __int64)v332 ^ *((_QWORD *)&v332 + 1)) % 5;
        }
LABEL_593:
        v333 = *(_DWORD *)(v16 + 2028);
        if ( !v333 )
        {
          v682 = v59;
          v1597 = 0LL;
          for ( i21 = 0; ; ++i21 )
          {
            v690 = (*(__int64 (__fastcall **)(__int64 *))(v16 + 752))(&v1597);
            if ( !v690 )
              break;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(v690, v1653) )
            {
              if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
              {
                v685 = *(_QWORD **)(v16 + 2632);
                v686 = 48;
                v683 = 6LL;
                do
                {
                  v686 -= 8;
                  *v685 = *(_QWORD *)v682;
                  v682 += 8;
                  ++v685;
                  --v683;
                }
                while ( v683 );
                if ( v686 )
                {
                  do
                  {
                    v687 = *v682++;
                    *(_BYTE *)v685 = v687;
                    v685 = (_QWORD *)((char *)v685 + 1);
                    --v686;
                  }
                  while ( v686 );
                  v16 = v1521;
                }
                v682 = *(char **)(v16 + 2632);
              }
              *((_QWORD *)v682 + 3) = v690;
              v688 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)v688 = v682;
              *(_DWORD *)(v688 + 16) = 48;
              v689 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)(v689 + 8) = v690;
              *(_DWORD *)(v689 + 20) = 4096;
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v682 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v682;
                *(_QWORD *)(v16 + 2272) = 3LL;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v683, v684);
              }
            }
          }
          goto LABEL_1120;
        }
        v334 = v333 - 1;
        if ( !v334 )
        {
          v672 = v59;
          v1593 = 0LL;
          i21 = 0;
          v673 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          for ( i22 = (*(__int64 (__fastcall **)(__int64 *))(v16 + 760))(&v1593);
                i22;
                i22 = (*(__int64 (__fastcall **)(__int64 *))(v16 + 760))(&v1593) )
          {
            ++i21;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(i22, v1652) )
            {
              if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
              {
                v677 = *(_QWORD **)(v16 + 2632);
                v678 = 48;
                v675 = 6LL;
                do
                {
                  v678 -= 8;
                  *v677 = *(_QWORD *)v672;
                  v672 += 8;
                  ++v677;
                  --v675;
                }
                while ( v675 );
                if ( v678 )
                {
                  do
                  {
                    v679 = *v672++;
                    *(_BYTE *)v677 = v679;
                    v677 = (_QWORD *)((char *)v677 + 1);
                    --v678;
                  }
                  while ( v678 );
                  v16 = v1521;
                }
                v672 = *(char **)(v16 + 2632);
              }
              *((_QWORD *)v672 + 3) = i22;
              v680 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)v680 = v672;
              *(_DWORD *)(v680 + 16) = 48;
              v681 = *(_QWORD *)(v16 + 1384);
              *(_QWORD *)(v681 + 8) = i22;
              *(_DWORD *)(v681 + 20) = 4096;
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v672 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v672;
                *(_QWORD *)(v16 + 2272) = 4LL;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v675, v676);
              }
            }
          }
          __writecr8(v673);
          goto LABEL_1120;
        }
        v335 = v334 - 1;
        if ( !v335 )
        {
          v661 = v59;
          v662 = 0LL;
          i21 = 0;
          while ( 1 )
          {
            v1559 = 0;
            while ( 1 )
            {
              do
              {
                v663 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64 *))(v16 + 744))(v64, &v1559, &v1585);
                v58 = 0LL;
                if ( !v663 )
                  goto LABEL_1092;
                v665 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(v16 + 712))(
                         v1585,
                         v664,
                         v17,
                         0LL);
              }
              while ( !v665 );
              ++i21;
              v666 = (*(__int64 (__fastcall **)(__int64))(v16 + 720))(v665);
              v667 = (*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(v666, v1651);
              v58 = 0LL;
              if ( !v667 )
                break;
              (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(v16 + 728))(v1585, v665, v17, 0LL);
            }
            if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
            {
              v50 = *(_QWORD *)(v16 + 2632);
              v668 = 48;
              v17 = 6LL;
              do
              {
                v668 -= 8;
                *(_QWORD *)v50 = *(_QWORD *)v661;
                v661 += 8;
                v50 += 8LL;
                --v17;
              }
              while ( v17 );
              if ( v668 )
              {
                do
                {
                  v669 = *v661++;
                  *(_BYTE *)v50++ = v669;
                  --v668;
                }
                while ( v668 );
                v16 = v1521;
              }
              v661 = *(char **)(v16 + 2632);
            }
            *((_QWORD *)v661 + 3) = v666;
            v670 = *(_QWORD *)(v16 + 1384);
            *(_QWORD *)v670 = v661;
            *(_DWORD *)(v670 + 16) = 48;
            v671 = *(_QWORD *)(v16 + 1384);
            *(_QWORD *)(v671 + 8) = v666;
            *(_DWORD *)(v671 + 20) = 4096;
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = v661 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *(int *)v661;
              *(_QWORD *)(v16 + 2272) = v662;
              *(_DWORD *)(v16 + 2240) = 1;
              sub_140AD049C(v16, 0LL, v17, 0LL);
              v58 = 0LL;
            }
LABEL_1092:
            ++v64;
            ++v662;
            if ( v64 >= 3 )
              goto LABEL_1120;
          }
        }
        v50 = (unsigned int)(v335 - 1);
        if ( (_DWORD)v50 )
        {
          v50 = (unsigned int)(v50 - 1);
          if ( !(_DWORD)v50 )
          {
            v347 = *(__int64 (__fastcall **)(_QWORD))(v16 + 776);
            i21 = 0;
            v1527 = 0;
            v348 = v347(0LL);
            if ( v348 )
            {
              v349 = (char *)v1520;
              do
              {
                v1601 = 0LL;
                v350 = v349;
                v351 = 1;
                v352 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 768))(v348, &v1601);
                if ( v352 )
                {
                  do
                  {
                    ++v351;
                    if ( !(*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(v352, v1643) )
                    {
                      if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                      {
                        v354 = *(_QWORD **)(v16 + 2632);
                        v355 = 48;
                        v353 = 6LL;
                        do
                        {
                          v355 -= 8;
                          *v354 = *(_QWORD *)v350;
                          v350 += 8;
                          ++v354;
                          --v353;
                        }
                        while ( v353 );
                        if ( v355 )
                        {
                          do
                          {
                            v356 = *v350++;
                            *(_BYTE *)v354 = v356;
                            v354 = (_QWORD *)((char *)v354 + 1);
                            --v355;
                          }
                          while ( v355 );
                          v16 = v1521;
                        }
                        v350 = *(char **)(v16 + 2632);
                      }
                      *((_QWORD *)v350 + 3) = v352;
                      *((_QWORD *)v350 + 4) = v348;
                      v357 = *(_QWORD *)(v16 + 1384);
                      *(_QWORD *)v357 = v350;
                      *(_DWORD *)(v357 + 16) = 48;
                      v358 = *(_QWORD *)(v16 + 1384);
                      *(_QWORD *)(v358 + 8) = v352;
                      *(_DWORD *)(v358 + 20) = 4096;
                      if ( !*(_DWORD *)(v16 + 2240) )
                      {
                        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v16 + 2256) = v350 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v16 + 2264) = *(int *)v350;
                        *(_QWORD *)(v16 + 2272) = 6LL;
                        *(_DWORD *)(v16 + 2240) = 1;
                        sub_140AD049C(v16, 0LL, v353, 1LL);
                      }
                    }
                    v352 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 768))(v348, &v1601);
                  }
                  while ( v352 );
                  i21 = v1527;
                  v349 = (char *)v1520;
                }
                v359 = *(__int64 (__fastcall **)(__int64))(v16 + 776);
                i21 += v351;
                v1527 = i21;
                v348 = v359(v348);
              }
              while ( v348 );
            }
            goto LABEL_1120;
          }
          if ( (_DWORD)v50 == 1 )
          {
            v336 = v59;
            v1754 = -1;
            i21 = 0;
            v338 = 0;
            v339 = 0LL;
            do
            {
              v1600 = 0LL;
              while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(v16 + 1056))(
                        v338,
                        &v1600,
                        &v1754,
                        &v1562) )
              {
                ++i21;
                if ( !(*(__int64 (__fastcall **)(__int64, char *))(v16 + 504))(v1562, v1642) )
                {
                  if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
                  {
                    v342 = *(_QWORD **)(v16 + 2632);
                    v343 = 48;
                    v340 = 6LL;
                    do
                    {
                      v343 -= 8;
                      *v342 = *(_QWORD *)v336;
                      v336 += 8;
                      ++v342;
                      --v340;
                    }
                    while ( v340 );
                    if ( v343 )
                    {
                      do
                      {
                        v344 = *v336++;
                        *(_BYTE *)v342 = v344;
                        v342 = (_QWORD *)((char *)v342 + 1);
                        --v343;
                      }
                      while ( v343 );
                      v16 = v1521;
                    }
                    v336 = *(char **)(v16 + 2632);
                  }
                  *((_QWORD *)v336 + 3) = v1562;
                  v345 = *(_QWORD *)(v16 + 1384);
                  *(_QWORD *)v345 = v336;
                  *(_DWORD *)(v345 + 16) = 48;
                  v346 = *(_QWORD *)(v16 + 1384);
                  *(_QWORD *)(v346 + 8) = v1562;
                  *(_DWORD *)(v346 + 20) = 4096;
                  if ( !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v336 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v336;
                    *(_QWORD *)(v16 + 2272) = v339;
                    *(_DWORD *)(v16 + 2240) = 1;
                    sub_140AD049C(v16, 0LL, v340, v341);
                  }
                }
              }
              ++v338;
              ++v339;
            }
            while ( v338 < 3 );
            goto LABEL_1120;
          }
          *(_DWORD *)(v16 + 2028) = 0;
          goto LABEL_1123;
        }
        v360 = *(ULONG_PTR **)(v16 + 1224);
        v1548 = (_BYTE *)v16;
        v1527 = 0;
        v361 = *v360;
        v1528 = (unsigned int *)*v360;
        if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
        {
          i21 = 0;
          goto LABEL_1120;
        }
        v362 = v1520;
        v363 = *((_QWORD *)v1520 + 5);
        if ( v363 )
        {
          v1527 = 1;
          if ( v361 != v363 )
          {
            *((_QWORD *)v1520 + 3) = v361;
            v364 = *(_QWORD *)(v16 + 1384);
            *(_QWORD *)v364 = v362;
            *(_DWORD *)(v364 + 16) = 48;
            v365 = *(_QWORD *)(v16 + 1384);
            *(_QWORD *)(v365 + 8) = v361;
            *(_DWORD *)(v365 + 20) = 4096;
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = (char *)v362 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *v362;
              *(_QWORD *)(v16 + 2272) = 5LL;
              *(_DWORD *)(v16 + 2240) = 1;
              sub_140AD049C(v16, 0LL, v17, v58);
            }
          }
          goto LABEL_1076;
        }
        if ( !v361 )
          goto LABEL_1076;
        v366 = *(__int64 (__fastcall **)(ULONG_PTR, char *))(v16 + 496);
        v1527 = 1;
        v1545 = (_BYTE *)v16;
        v367 = v366(v361, v1709);
        v368 = v1710;
        v369 = 0;
        v370 = v1711;
        v371 = (_DWORD *)v367;
        v1529 = (unsigned int *)v367;
        v1735 = v1711;
        v1535 = v1711;
        BugCheckParameter2 = v1710;
        if ( !v1710 )
        {
          if ( (*(_DWORD *)(v16 + 2392) & 0x200000) == 0 )
          {
            v1581 = 664797184;
            KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v361, 5uLL, 0LL);
          }
          v50 = 3221225595LL;
          goto LABEL_1073;
        }
        v372 = 4;
        v1560 = 0LL;
        v373 = &v1561;
        v374 = 0xFFFFFFFFLL;
        v375 = 1LL;
        do
        {
          *(_BYTE *)v373 = 0;
          v373 = (int *)((char *)v373 + 1);
          --v372;
        }
        while ( v372 );
        v376 = 0;
        if ( !*(_DWORD *)(v16 + 2004) )
        {
LABEL_681:
          v1546 = 0LL;
          goto LABEL_682;
        }
        LODWORD(v375) = v1561;
        LODWORD(v58) = HIDWORD(v1560);
        v377 = v1560;
        while ( 1 )
        {
          v378 = v16;
          if ( *(_QWORD *)(v16 + 2624) )
            v378 = *(_QWORD *)(v16 + 2624);
          v374 = v378 + *(unsigned int *)(v378 + 2000);
          if ( v377 && (unsigned int)v58 <= v376 )
          {
            v369 = v58;
            v374 = v378 + (unsigned int)v375;
          }
          if ( v369 != v376 )
            break;
LABEL_674:
          LODWORD(v1560) = 1;
          v375 = (unsigned int)(v374 - v378);
          HIDWORD(v1560) = v369;
          v1561 = v374 - v378;
          v377 = 1;
          v386 = *(int *)v374;
          v58 = v369;
          if ( (unsigned int)v386 <= 0x2B
            && (v387 = 0x80000001002LL, _bittest64(&v387, v386))
            && *(_DWORD **)(v374 + 8) == v371
            && *(_DWORD *)(v374 + 16) == v370
            || (unsigned int)(v386 - 33) <= 1 && *(_QWORD *)(v374 + 32) == v368 )
          {
            v1546 = (_DWORD *)v374;
            if ( v374 )
            {
              v50 = 3221225742LL;
              goto LABEL_1073;
            }
LABEL_682:
            v388 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64))(v16 + 664))(v361, v375, v374);
            v389 = *(char ***)(v16 + 1288);
            v390 = v388;
            v1533 = v388;
            LODWORD(v1523) = v1535;
            _disable();
            v391 = *(_QWORD *)((char *)KeGetCurrentPrcb() + *(_QWORD *)(v16 + 1560));
            _enable();
            (*(void (__fastcall **)(__int64))(v16 + 344))(v391);
            LOBYTE(v392) = 1;
            (*(void (__fastcall **)(_QWORD, __int64))(v16 + 224))(*(_QWORD *)(v16 + 1296), v392);
            v393 = *v389;
            if ( *v389 != (char *)v389 )
            {
              v394 = *(_QWORD *)(v16 + 1816);
              while ( 1 )
              {
                v395 = *(_QWORD *)&v393[*(_QWORD *)(v16 + 1824) - v394];
                if ( v368 >= v395 && v368 < v395 + *(unsigned int *)&v393[*(_QWORD *)(v16 + 1832) - v394] )
                  break;
                v393 = *(char **)v393;
                if ( v393 == (char *)v389 )
                  goto LABEL_691;
              }
              (*(void (__fastcall **)(char *, __int64))(v16 + 208))(&v393[-v394], 1LL);
            }
LABEL_691:
            (*(void (__fastcall **)(_QWORD))(v16 + 264))(*(_QWORD *)(v16 + 1296));
            (*(void (**)(void))(v16 + 352))();
            if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 )
            {
              v50 = (unsigned int)sub_140AD6FD0(&v1548, v368, 9LL);
              goto LABEL_1073;
            }
            v397 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, int *))(v16 + 480);
            v1627 = 0LL;
            v1589[4] = 0;
            LOBYTE(v396) = 1;
            v1624 = v397(v368, v396, 0LL, &v1535);
            v398 = v1535 & (unsigned int)-(v1624 != 0);
            v1535 = v398;
            v399 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, int *))(v16 + 480);
            v1589[1] = v398;
            LOBYTE(v398) = 1;
            v400 = v399(v368, v398, 12LL, &v1535);
            v401 = v400;
            v1534 = (unsigned int *)v400;
            v1625 = v400;
            LOBYTE(v401) = 1;
            v1535 &= -(v400 != 0);
            v402 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, int *))(v16 + 480);
            LODWORD(v1537) = v1535;
            v1589[2] = v1535;
            v1626 = v402(v368, v401, 10LL, &v1535);
            v1535 &= -(v1626 != 0);
            v403 = *(__int64 (__fastcall **)(ULONG_PTR))(v16 + 488);
            v1589[3] = v1535;
            v404 = v403(v368);
            if ( !v404 )
            {
              if ( (*(_DWORD *)(v16 + 2392) & 0x200000) == 0 )
              {
                v1586 = 664797184;
                KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v368, 7uLL, 0LL);
              }
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = 0LL;
                *(_QWORD *)(v16 + 2264) = 271LL;
                *(_QWORD *)(v16 + 2272) = v368;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v405, v58);
              }
              v50 = 3221225595LL;
              goto LABEL_1073;
            }
            v406 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v16 + 1160))(v368, &v1615);
            v407 = *(unsigned int *)(v16 + 2284);
            v1628 = v406;
            v1589[5] = v1615;
            v1589[0] = *(_DWORD *)(v404 + 84);
            LODWORD(v406) = v390;
            v408 = *(unsigned int *)(v16 + 1964);
            v1623 = v368;
            v409 = (_DWORD)v406 != 0 ? 0xB : 0;
            v410 = v408 + 288;
            v1736 = v409;
            if ( (unsigned int)(v408 + 288) <= *(_DWORD *)(v16 + 2532) )
            {
              v411 = v16;
              v1524 = v16;
              *(_DWORD *)(v16 + 1964) = v410;
            }
            else
            {
              v1524 = sub_140ACFC24(v16, v410, v407);
              v411 = v1524;
              if ( !v1524 )
              {
                v1545 = 0LL;
                v50 = 3221225626LL;
                goto LABEL_1073;
              }
              v412 = *(_DWORD *)(v16 + 2392);
              if ( (v412 & 4) == 0 )
              {
                v413 = *(_DWORD *)(v16 + 1964);
                v414 = *(_QWORD *)(v16 + 1936);
                v590 = (v412 & 0x20000000) != 0;
                v415 = (_QWORD *)v16;
                v416 = v590 ? *(_DWORD *)(v16 + 2284) : 0;
                if ( v413 >= 8 )
                {
                  v417 = (unsigned __int64)v413 >> 3;
                  do
                  {
                    *v415 = 0LL;
                    v413 -= 8;
                    ++v415;
                    --v417;
                  }
                  while ( v417 );
                }
                for ( ; v413; --v413 )
                {
                  *(_BYTE *)v415 = 0;
                  v415 = (_QWORD *)((char *)v415 + 1);
                }
                v418 = *(_DWORD *)(v411 + 2284);
                *(_DWORD *)(v411 + 2284) = v416;
                if ( v416 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v411 + 856))(v414);
                }
                else if ( (*(_DWORD *)(v411 + 2392) & 0x10000000) != 0 || !v416 )
                {
                  (*(void (__fastcall **)(__int64))(v411 + 240))(v414);
                }
                else
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v411 + 536))(v414 - 8, *(_QWORD *)(v414 - 8));
                }
                *(_DWORD *)(v411 + 2284) = v418;
              }
              *(_DWORD *)(v411 + 2392) &= ~4u;
              v409 = v1736;
            }
            v419 = v411 + v408;
            *(_DWORD *)(v411 + 2004) += 6;
            v420 = &v1623;
            v1592 = v411 + v408;
            v421 = v1589;
            v1546 = (_DWORD *)(v411 + v408);
            v1538 = 6LL;
            do
            {
              v422 = *v421;
              v423 = 6LL;
              v424 = (_QWORD *)*v420;
              v425 = 48;
              v1522 = *v421;
              v426 = (_QWORD *)v419;
              do
              {
                *v426 = 0LL;
                v425 -= 8;
                ++v426;
                --v423;
              }
              while ( v423 );
              for ( ; v425; --v425 )
              {
                *(_BYTE *)v426 = 0;
                v426 = (_QWORD *)((char *)v426 + 1);
              }
              *(_DWORD *)v419 = v409;
              *(_QWORD *)(v419 + 8) = v424;
              v427 = v424;
              *(_DWORD *)(v419 + 16) = v422;
              v428 = (const char *)v424;
              *(_DWORD *)(v411 + 2032) += v422;
              v429 = *(_DWORD *)(v411 + 2012);
              v430 = *(_QWORD *)(v411 + 2016);
              if ( v424 < (_QWORD *)((char *)v424 + v422) )
              {
                do
                {
                  _mm_prefetch(v428, 0);
                  v428 += 64;
                }
                while ( v428 < (const char *)v424 + v422 );
              }
              v431 = *(_QWORD *)(v411 + 2016);
              v432 = (unsigned int)v422 >> 7;
              if ( (unsigned int)v422 >> 7 )
              {
                do
                {
                  v433 = 8LL;
                  do
                  {
                    v434 = v431 ^ *v427;
                    v435 = v427[1];
                    v427 += 2;
                    v431 = __ROL8__(__ROL8__(v434, v429) ^ v435, v429);
                    --v433;
                  }
                  while ( v433 );
                  v436 = __ROL8__(v430 ^ ((char *)v427 - (char *)v424), 17) ^ v430 ^ ((char *)v427 - (char *)v424);
                  v1644 = (v436 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v429 = ((unsigned __int8)v1644 ^ (unsigned __int8)(v436 ^ v429)) & 0x3F;
                  if ( !v429 )
                    LOBYTE(v429) = 1;
                  --v432;
                }
                while ( v432 );
                v411 = v1524;
                LODWORD(v422) = v1522;
              }
              v437 = v422 & 0x7F;
              if ( v437 >= 8 )
              {
                v438 = (unsigned __int64)(v422 & 0x7F) >> 3;
                do
                {
                  v431 = __ROL8__(*v427++ ^ v431, v429);
                  v437 -= 8;
                  --v438;
                }
                while ( v438 );
              }
              if ( v437 )
              {
                do
                {
                  v439 = *(unsigned __int8 *)v427;
                  v427 = (_QWORD *)((char *)v427 + 1);
                  v431 = __ROL8__(v439 ^ v431, v429);
                  --v437;
                }
                while ( v437 );
                v411 = v1524;
              }
              for ( i23 = v431 >> 31; i23; i23 >>= 31 )
                v431 = (unsigned int)i23 ^ (unsigned int)v431;
              v409 = v1736;
              LODWORD(v431) = v431 & 0x7FFFFFFF;
              *(_DWORD *)(v419 + 20) = v431;
              ++v421;
              *(_DWORD *)(v411 + 2032) += v422;
              ++v420;
              v419 = v1592 + 48;
              v66 = v1538-- == 1;
              v1592 += 48LL;
            }
            while ( !v66 );
            v441 = v1546;
            v442 = BugCheckParameter2;
            v16 = v1521;
            v443 = v1533;
            *v1546 = 44;
            *((_QWORD *)v441 + 3) = v442;
            if ( (*(_DWORD *)(v411 + 2392) & 0x10200000) != 0 )
            {
              if ( !v443 )
                goto LABEL_747;
            }
            else if ( !v443 )
            {
              if ( (*(_DWORD *)(v411 + 2396) & 0x8000) != 0 )
              {
                v441[8] |= 1u;
                if ( (unsigned int)sub_140AD0CE4(v411, v442, v431, v1736) )
                  v441[8] |= 4u;
              }
LABEL_747:
              v1545 = (_BYTE *)v411;
              v1548 = (_BYTE *)v411;
              v444 = sub_140ACF0E0(
                       (unsigned int)&v1545,
                       (_DWORD)v1529,
                       (_DWORD)v1523,
                       v442,
                       v443,
                       9,
                       (__int64)&v1552,
                       (__int64)&v1588);
              v50 = (unsigned int)v444;
              if ( v444 < 0 )
                goto LABEL_1072;
              v445 = v1545;
              v446 = v1588 - v1552;
              v1546 = &v1545[(_QWORD)v1546 - v411];
              v447 = (_QWORD *)(v442 + v1552);
              v448 = v1546 + 48;
              v449 = 48;
              v450 = v1546 + 48;
              v451 = 6LL;
              do
              {
                *v450 = 0LL;
                v449 -= 8;
                ++v450;
                --v451;
              }
              while ( v451 );
              for ( ; v449; --v449 )
              {
                *(_BYTE *)v450 = 0;
                v450 = (_QWORD *)((char *)v450 + 1);
              }
              v452 = v447;
              *v448 = v1736;
              v453 = (const char *)v447;
              *((_QWORD *)v448 + 1) = v447;
              v448[4] = v446;
              *((_DWORD *)v445 + 508) += v446;
              v454 = *((_DWORD *)v445 + 503);
              v455 = *((_QWORD *)v445 + 252);
              v456 = (unsigned __int64)v447 + v446;
              if ( (unsigned __int64)v447 < v456 )
              {
                do
                {
                  _mm_prefetch(v453, 0);
                  v453 += 64;
                }
                while ( (unsigned __int64)v453 < v456 );
              }
              v457 = *((_QWORD *)v445 + 252);
              v458 = v446 >> 7;
              if ( v446 >> 7 )
              {
                do
                {
                  v459 = 8LL;
                  do
                  {
                    v460 = v457 ^ *v452;
                    v461 = v452[1];
                    v452 += 2;
                    v457 = __ROL8__(__ROL8__(v460, v454) ^ v461, v454);
                    --v459;
                  }
                  while ( v459 );
                  v462 = __ROL8__(v455 ^ ((char *)v452 - (char *)v447), 17) ^ v455 ^ ((char *)v452 - (char *)v447);
                  v1645 = (v462 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v454 = ((unsigned __int8)v1645 ^ (unsigned __int8)(v462 ^ v454)) & 0x3F;
                  if ( !v454 )
                    LOBYTE(v454) = 1;
                  --v458;
                }
                while ( v458 );
                v16 = v1521;
                v443 = v1533;
              }
              v58 = v446 & 0x7F;
              if ( (unsigned int)v58 >= 8 )
              {
                v463 = (unsigned __int64)(unsigned int)v58 >> 3;
                do
                {
                  v457 = __ROL8__(*v452++ ^ v457, v454);
                  v58 = (unsigned int)(v58 - 8);
                  --v463;
                }
                while ( v463 );
                v16 = v1521;
              }
              if ( (_DWORD)v58 )
              {
                do
                {
                  v464 = *(unsigned __int8 *)v452;
                  v452 = (_QWORD *)((char *)v452 + 1);
                  v457 = __ROL8__(v464 ^ v457, v454);
                  v58 = (unsigned int)(v58 - 1);
                }
                while ( (_DWORD)v58 );
                v16 = v1521;
              }
              for ( i24 = v457; ; v457 = (unsigned int)i24 ^ (unsigned int)v457 )
              {
                i24 >>= 31;
                if ( !i24 )
                  break;
              }
              LODWORD(v457) = v457 & 0x7FFFFFFF;
              v448[5] = v457;
              v466 = v1546;
              v1546[60] = 48;
              if ( v466[64] )
              {
                v457 = 4294967294LL;
                v466[66] = v466[66] & 0xFFFFFFFE | (v443 != 0);
              }
              v1548 = v445;
              v1563 = v1546 + 24;
              v467 = (v443 != 0) + 13;
              if ( v1546 == (_DWORD *)-96LL )
              {
                v468 = *((unsigned int *)v445 + 491);
                v469 = v468 + 48;
                if ( (unsigned int)(v468 + 48) <= *((_DWORD *)v445 + 633) )
                {
                  v470 = v445;
                  *((_DWORD *)v445 + 491) = v469;
                }
                else
                {
                  v470 = (_BYTE *)sub_140ACFC24(v445, v469, *((unsigned int *)v445 + 571));
                  if ( !v470 )
                    goto LABEL_776;
                  v471 = *((_DWORD *)v445 + 598);
                  if ( (v471 & 4) == 0 )
                  {
                    v472 = *((_DWORD *)v445 + 491);
                    v473 = *((_QWORD *)v445 + 242);
                    v474 = (v471 & 0x20000000) != 0 ? *((_DWORD *)v445 + 571) : 0;
                    if ( v472 >= 8 )
                    {
                      v475 = (unsigned __int64)v472 >> 3;
                      do
                      {
                        *(_QWORD *)v445 = 0LL;
                        v472 -= 8;
                        v445 += 8;
                        --v475;
                      }
                      while ( v475 );
                    }
                    for ( ; v472; --v472 )
                      *v445++ = 0;
                    v476 = *((_DWORD *)v470 + 571);
                    *((_DWORD *)v470 + 571) = v474;
                    if ( v474 == 3 )
                    {
                      (*((void (__fastcall **)(__int64))v470 + 107))(v473);
                    }
                    else if ( (*((_DWORD *)v470 + 598) & 0x10000000) != 0 || !v474 )
                    {
                      (*((void (__fastcall **)(__int64))v470 + 30))(v473);
                    }
                    else
                    {
                      (*((void (__fastcall **)(__int64, _QWORD))v470 + 67))(v473 - 8, *(_QWORD *)(v473 - 8));
                    }
                    *((_DWORD *)v470 + 571) = v476;
                  }
                  *((_DWORD *)v470 + 598) &= ~4u;
                }
                ++*((_DWORD *)v470 + 501);
                v477 = &v470[v468];
                v1617 = v477;
                v478 = v477;
                v479 = 48;
                v480 = 6LL;
                do
                {
                  *v478 = 0LL;
                  v479 -= 8;
                  ++v478;
                  --v480;
                }
                while ( v480 );
                for ( ; v479; --v479 )
                {
                  *(_BYTE *)v478 = 0;
                  v478 = (_QWORD *)((char *)v478 + 1);
                }
                v481 = (const char *)v1534;
                *(_DWORD *)v477 = v467;
                v58 = (unsigned __int64)v481;
                v482 = (unsigned int)v1537;
                *((_QWORD *)v477 + 1) = v481;
                *((_DWORD *)v477 + 4) = v482;
                *((_DWORD *)v470 + 508) += v482;
                v483 = *((_DWORD *)v470 + 503);
                v484 = *((_QWORD *)v470 + 252);
                if ( v481 < &v481[v482] )
                {
                  v485 = v481;
                  do
                  {
                    _mm_prefetch(v485, 0);
                    v485 += 64;
                  }
                  while ( v485 < &v481[v482] );
                }
                v457 = *((_QWORD *)v470 + 252);
                v486 = (unsigned int)v482 >> 7;
                if ( (unsigned int)v482 >> 7 )
                {
                  do
                  {
                    v487 = 8LL;
                    do
                    {
                      v488 = v457 ^ *(_QWORD *)v58;
                      v489 = *(_QWORD *)(v58 + 8);
                      v58 += 16LL;
                      v457 = __ROL8__(__ROL8__(v488, v483) ^ v489, v483);
                      --v487;
                    }
                    while ( v487 );
                    v490 = __ROL8__(v484 ^ (v58 - (_QWORD)v481), 17) ^ v484 ^ (v58 - (_QWORD)v481);
                    v1646 = (v490 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v483 = ((unsigned __int8)v1646 ^ (unsigned __int8)(v490 ^ v483)) & 0x3F;
                    if ( !v483 )
                      LOBYTE(v483) = 1;
                    --v486;
                  }
                  while ( v486 );
                  v16 = v1521;
                  v443 = v1533;
                }
                v491 = v482 & 0x7F;
                if ( v491 >= 8 )
                {
                  v492 = (unsigned __int64)(v482 & 0x7F) >> 3;
                  do
                  {
                    v457 = __ROL8__(*(_QWORD *)v58 ^ v457, v483);
                    v58 += 8LL;
                    v491 -= 8;
                    --v492;
                  }
                  while ( v492 );
                }
                if ( v491 )
                {
                  do
                  {
                    v493 = *(unsigned __int8 *)v58++;
                    v457 = __ROL8__(v493 ^ v457, v483);
                    --v491;
                  }
                  while ( v491 );
                  v16 = v1521;
                }
                for ( i25 = v457; ; v457 = (unsigned int)i25 ^ (unsigned int)v457 )
                {
                  i25 >>= 31;
                  if ( !i25 )
                    break;
                }
                LODWORD(v457) = v457 & 0x7FFFFFFF;
                *((_DWORD *)v477 + 5) = v457;
                v1563 = v1617;
                *((_DWORD *)v470 + 508) += v482;
              }
              else
              {
                v481 = (const char *)v1534;
                v470 = v445;
                v1546[24] = v467;
                LODWORD(v482) = v1537;
              }
              if ( (*((_DWORD *)v470 + 598) & 0x40000000) != 0 && (_DWORD)v482 )
                sub_1403F966C(v470, v481, (unsigned int)v482, v1563 + 7);
              v495 = 4294967294LL;
              v1548 = v470;
              v1563[6] = 0;
              v1563[6] |= 1u;
              v496 = v1546;
              v1546[36] = 35;
              v496[46] = v496[46] & 0xFFFFFFFE | (v443 != 0);
              if ( v496[40] >= 0x94u )
              {
                v497 = BugCheckParameter2;
                v498 = *((_QWORD *)v496 + 19);
                v499 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64, unsigned __int64))v470 + 61))(
                         BugCheckParameter2,
                         4294967294LL,
                         v457,
                         v58);
                if ( v499 )
                {
                  v457 = v497 + *(unsigned int *)(v499 + 80);
                  v495 = v496[46] | 2u;
                  v496[46] = v495;
                  v500 = v495;
                  v501 = *(_QWORD **)(v498 + 112);
                  if ( (unsigned __int64)v501 >= v497 && (unsigned __int64)v501 < v457 )
                  {
                    v500 = v495 | 4;
                    *((_QWORD *)v496 + 21) = *v501;
                    v496[46] = v495 | 4;
                  }
                  v502 = *(_QWORD **)(v498 + 120);
                  if ( (unsigned __int64)v502 >= v497 && (unsigned __int64)v502 < v457 )
                  {
                    *((_QWORD *)v496 + 22) = *v502;
                    v496[46] = v500 | 8;
                  }
                  goto LABEL_829;
                }
LABEL_776:
                v1545 = 0LL;
LABEL_777:
                v50 = 3221225626LL;
                goto LABEL_1072;
              }
LABEL_829:
              v66 = (*((_DWORD *)v470 + 598) & 0x400000) == 0;
              v1545 = v470;
              if ( v66 )
                goto LABEL_1071;
              v503 = BugCheckParameter2;
              v504 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64, unsigned __int64))v470 + 61))(
                       BugCheckParameter2,
                       v495,
                       v457,
                       v58);
              v1536 = v504;
              v506 = v504;
              if ( !v504 )
                goto LABEL_831;
              v507 = *(unsigned __int16 *)(v504 + 6);
              v1737 = v507;
              v58 = (unsigned int)v1523 / 0xCuLL;
              v1526 = v58;
              if ( !(_WORD)v507 )
              {
                if ( (*((_DWORD *)v470 + 598) & 0x200000) == 0 )
                {
                  v1587 = 664797184;
                  KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v503, 0LL, 0LL);
                }
                goto LABEL_834;
              }
              v508 = v1529;
              v1522 = v507;
              v509 = v507;
              v510 = 0;
              v1534 = &v1529[3 * (unsigned int)v58];
              v511 = *(unsigned __int16 *)(v504 + 20);
              LODWORD(v1541) = 0;
              v1524 = v511 + v506 + 24;
              v512 = (_DWORD *)v1524;
              v58 = 1LL;
              v1538 = v1524;
              do
              {
                v513 = v512[4];
                v505 = (unsigned int)v512[3];
                if ( v513 <= v512[2] )
                  v513 = v512[2];
                LODWORD(v1537) = v512[3];
                v514 = v505 + v513;
                if ( v510 )
                {
                  if ( v514 < *(_DWORD *)(v1524 + 40LL * (v510 - 1) + 12) )
                  {
                    if ( (*((_DWORD *)v470 + 598) & 0x200000) == 0 )
                    {
                      v1582 = 664797184;
                      KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v503, 1uLL, 0LL);
                    }
                    if ( !*((_DWORD *)v470 + 560) )
                    {
                      *((_QWORD *)v470 + 281) = v470 - 0x5C5FC0A76E374B18LL;
                      *((_QWORD *)v470 + 282) = 0LL;
                      *((_QWORD *)v470 + 283) = 271LL;
                      *((_QWORD *)v470 + 284) = v503;
                      *((_DWORD *)v470 + 560) = 1;
LABEL_836:
                      sub_140AD049C(v470, 0LL, v505, v58);
                    }
LABEL_831:
                    v50 = 3221225595LL;
                    goto LABEL_1072;
                  }
                  v510 = (unsigned int)v1541;
                }
                if ( v508 != v1534 )
                {
                  do
                  {
                    v515 = v508[1];
                    if ( *v508 >= v514 || v515 <= (unsigned int)v505 )
                      break;
                    if ( *v508 < (unsigned int)v505 || v515 > v514 )
                    {
                      if ( (*((_DWORD *)v470 + 598) & 0x200000) == 0 )
                      {
                        v1577 = 664797184;
                        KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v503, 2uLL, 0LL);
                      }
LABEL_834:
                      if ( !*((_DWORD *)v470 + 560) )
                      {
                        *((_QWORD *)v470 + 281) = v470 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v470 + 282) = 0LL;
                        *((_QWORD *)v470 + 283) = 271LL;
                        *((_QWORD *)v470 + 284) = v503;
                        *((_DWORD *)v470 + 560) = 1;
                        goto LABEL_836;
                      }
                      goto LABEL_831;
                    }
                    v516 = v508[2];
                    v1647 = v508;
                    if ( (v516 & 1) != 0 || (*(_BYTE *)(v516 + v503) & 0x20) != 0 )
                    {
                      v517 = v512[4];
                      v518 = v512[3];
                      if ( v517 <= v512[2] )
                        v517 = v512[2];
                      v519 = v518 + v517;
                      v520 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, __int64, unsigned __int64))v470
                                              + 129))(
                                               v508,
                                               BugCheckParameter2,
                                               v505,
                                               v58);
                      v522 = v520;
                      if ( *v520 < v518 || v520[1] > v519 )
                      {
                        v523 = BugCheckParameter2;
                        if ( (*((_DWORD *)v470 + 598) & 0x200000) == 0 )
                        {
                          v1578 = 664797184;
                          KeBugCheckEx(
                            __ROR4__(664797184, 149),
                            0xAuLL,
                            BugCheckParameter2,
                            ((_DWORD)v520 - (_DWORD)BugCheckParameter2) | 0x80000000,
                            0LL);
                        }
                        if ( !*((_DWORD *)v470 + 560) )
                        {
                          *((_QWORD *)v470 + 281) = v470 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v470 + 282) = 0LL;
                          *((_QWORD *)v470 + 283) = 271LL;
                          *((_QWORD *)v470 + 284) = v523;
                          *((_DWORD *)v470 + 560) = 1;
                          sub_140AD049C(v470, 0LL, v523, v521);
                        }
                      }
                      v524 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v470 + 130))(
                                               v522,
                                               BugCheckParameter2,
                                               BugCheckParameter2 + *v522);
                      if ( *v524 >= v518 && v524[1] <= v519 )
                      {
                        v503 = BugCheckParameter2;
                      }
                      else
                      {
                        v503 = BugCheckParameter2;
                        v526 = ((_DWORD)v524 - BugCheckParameter2) | 0x80000000;
                        if ( (*((_DWORD *)v470 + 598) & 0x200000) == 0 )
                        {
                          v1579 = 664797184;
                          KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, BugCheckParameter2, v526, 0LL);
                        }
                        if ( !*((_DWORD *)v470 + 560) )
                        {
                          *((_QWORD *)v470 + 281) = v470 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v470 + 282) = 0LL;
                          *((_QWORD *)v470 + 283) = 271LL;
                          *((_QWORD *)v470 + 284) = v503;
                          *((_DWORD *)v470 + 560) = 1;
                          sub_140AD049C(v470, 0LL, v525, v58);
                        }
                      }
                      v512 = (_DWORD *)v1538;
                      v505 = (unsigned int)v1537;
                    }
                    v508 += 3;
                  }
                  while ( v508 != v1534 );
                  v510 = (unsigned int)v1541;
                  v58 = 1LL;
                  v509 = v1522;
                }
                ++v510;
                v512 += 10;
                LODWORD(v1541) = v510;
                v1538 = (__int64)v512;
              }
              while ( v510 < v509 );
              v58 = v1526;
              v527 = v1536;
              v528 = (_DWORD *)v1524;
              if ( v508 != v1534 )
              {
                if ( (*((_DWORD *)v470 + 598) & 0x200000) == 0 )
                {
                  v1576 = 664797184;
                  KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v503, 3uLL, 0LL);
                }
                goto LABEL_834;
              }
              if ( (_DWORD)v1526 )
                v529 = (v1526 + 6) & 0xFFFFFFF8;
              else
                v529 = 0;
              v530 = *((unsigned int *)v470 + 491);
              v531 = v530 + v529 + 24 * (v509 + 2);
              if ( v531 <= *((_DWORD *)v470 + 633) )
              {
                v532 = v470;
                v1537 = (__int64)v470;
                *((_DWORD *)v470 + 491) = v531;
                goto LABEL_895;
              }
              v1537 = sub_140ACFC24(v470, v531, *((unsigned int *)v470 + 571));
              v532 = (_BYTE *)v1537;
              if ( !v1537 )
                goto LABEL_777;
              v533 = *((_DWORD *)v470 + 598);
              if ( (v533 & 4) == 0 )
              {
                v534 = *((_DWORD *)v470 + 491);
                v535 = *((_QWORD *)v470 + 242);
                v536 = (v533 & 0x20000000) != 0 ? *((_DWORD *)v470 + 571) : 0;
                if ( v534 >= 8 )
                {
                  v537 = (unsigned __int64)v534 >> 3;
                  do
                  {
                    *(_QWORD *)v470 = 0LL;
                    v534 -= 8;
                    v470 += 8;
                    --v537;
                  }
                  while ( v537 );
                }
                for ( ; v534; --v534 )
                  *v470++ = 0;
                v538 = *((_DWORD *)v532 + 571);
                *((_DWORD *)v532 + 571) = v536;
                if ( v536 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v532 + 107))(v535);
                }
                else if ( (*((_DWORD *)v532 + 598) & 0x10000000) != 0 || !v536 )
                {
                  (*((void (__fastcall **)(__int64))v532 + 30))(v535);
                }
                else
                {
                  (*((void (__fastcall **)(__int64, _QWORD))v532 + 67))(v535 - 8, *(_QWORD *)(v535 - 8));
                }
                v532 = (_BYTE *)v1537;
                *(_DWORD *)(v1537 + 2284) = v538;
              }
              *((_DWORD *)v532 + 598) &= ~4u;
              v58 = v1526;
              v509 = v1522;
LABEL_895:
              v539 = &v532[v530];
              ++*((_DWORD *)v532 + 501);
              v540 = &v532[v530];
              v1612 = &v532[v530];
              v541 = 48;
              v542 = 6LL;
              do
              {
                *v540 = 0LL;
                v541 -= 8;
                ++v540;
                --v542;
              }
              while ( v542 );
              for ( ; v541; --v541 )
              {
                *(_BYTE *)v540 = 0;
                v540 = (_QWORD *)((char *)v540 + 1);
              }
              v543 = v1529;
              *(_DWORD *)v539 = 30;
              *((_QWORD *)v539 + 1) = v543;
              *((_DWORD *)v539 + 4) = 0;
              v544 = *((_QWORD *)v532 + 252);
              for ( i26 = v544; ; LODWORD(v544) = i26 ^ v544 )
              {
                i26 >>= 31;
                if ( !i26 )
                  break;
              }
              *((_DWORD *)v539 + 5) = v544 & 0x7FFFFFFF;
              v470 = v532;
              v1558 = v1612;
              v1545 = v532;
              *((_QWORD *)v1612 + 3) = BugCheckParameter2;
              *((_DWORD *)v1558 + 8) = *(_DWORD *)(v527 + 80);
              *((_DWORD *)v1558 + 9) = (_DWORD)v1523;
              v546 = v1533 != 0;
              *((_WORD *)v1558 + 20) = v1737;
              *((_WORD *)v1558 + 21) = *((_WORD *)v1558 + 21) & 0xFFFE | v546;
              v1541 = v1558 + 48;
              if ( (_DWORD)v58 )
                v547 = (unsigned __int64)&v1558[(((unsigned int)(v58 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
              else
                v547 = (unsigned __int64)(v1558 + 48);
              v548 = *((unsigned __int16 *)v1558 + 20);
              v1523 = (unsigned int *)v547;
              v549 = v547 + 24 * v548;
              v1536 = v549;
              if ( (_DWORD)v58 )
                v550 = v1529 + 3;
              else
                v550 = v1534;
              v1538 = (__int64)v550;
              if ( v509 )
              {
                v551 = v509;
                v552 = (_DWORD *)(v547 + 8);
                v553 = 0;
                v58 = 0x80000000LL;
                do
                {
                  v554 = 2LL;
                  do
                  {
                    *(v552 - 2) = 0;
                    *(v552 - 1) = 0;
                    *v552 = 0x80000000;
                    v552 += 3;
                    --v554;
                  }
                  while ( v554 );
                  --v551;
                }
                while ( v551 );
                v16 = v1521;
              }
              else
              {
                v553 = 0;
              }
              if ( v547 != v549 )
              {
                while ( 2 )
                {
                  v555 = 0;
                  v1738 = 0;
                  if ( (v528[9] & 0x2000000) != 0 )
                    goto LABEL_919;
                  v556 = *v528;
                  if ( *v528 == 1414090313 )
                  {
                    if ( v528[1] == 1195525195 )
                      goto LABEL_919;
LABEL_925:
                    if ( v556 != 1095914053 || *((_WORD *)v528 + 2) != 16724 )
                      goto LABEL_927;
LABEL_919:
                    v555 = 1;
                    v1738 = 1;
                  }
                  else
                  {
                    if ( v556 != 1162297680 )
                      goto LABEL_925;
                    v557 = *((_WORD *)v528 + 2);
                    if ( v557 == 30839 || v557 == 29303 || v557 == 30583 )
                      goto LABEL_919;
LABEL_927:
                    v558 = 7;
                    v559 = (unsigned __int8 *)*((_QWORD *)v532 + 287);
                    v560 = (unsigned __int8 *)v528;
                    v561 = (__int64 *)*((_QWORD *)v532 + 288);
                    v1724 = v559;
                    v562 = *(unsigned __int8 **)(v1537 + 2312);
                    v563 = *(unsigned __int8 **)(v1537 + 2320);
                    while ( 1 )
                    {
                      v564 = *v560++;
                      v565 = *v559++;
                      if ( v564 != v565 )
                        break;
                      if ( !--v558 )
                        goto LABEL_946;
                    }
                    v566 = 8;
                    v567 = (__int64 *)v528;
                    do
                    {
                      v568 = *v567++;
                      v569 = *v561++;
                      if ( v568 != v569 )
                      {
                        v553 = 0;
                        goto LABEL_939;
                      }
                      v566 -= 8;
                    }
                    while ( v566 >= 8 );
                    v553 = 0;
                    if ( v566 )
                    {
                      while ( 1 )
                      {
                        v570 = *(unsigned __int8 *)v567;
                        v567 = (__int64 *)((char *)v567 + 1);
                        v571 = *(unsigned __int8 *)v561;
                        v561 = (__int64 *)((char *)v561 + 1);
                        if ( v570 != v571 )
                          break;
                        if ( !--v566 )
                          goto LABEL_946;
                      }
LABEL_939:
                      v572 = 4;
                      v573 = (unsigned __int8 *)v528;
                      while ( 1 )
                      {
                        v574 = *v573++;
                        v575 = *v562++;
                        if ( v574 != v575 )
                          break;
                        if ( !--v572 )
                          goto LABEL_946;
                      }
                      v576 = 6;
                      v577 = (unsigned __int8 *)v528;
                      while ( 1 )
                      {
                        v578 = *v577++;
                        v579 = *v563++;
                        if ( v578 != v579 )
                          break;
                        if ( !--v576 )
                          goto LABEL_946;
                      }
                    }
                    else
                    {
LABEL_946:
                      v555 = 1;
                      v1738 = 1;
                      v553 = 0;
                    }
                    v532 = (_BYTE *)v1537;
                  }
                  v580 = v528[9];
                  if ( v580 < 0 )
                  {
                    v555 = 1;
                    v1738 = 1;
                    goto LABEL_951;
                  }
                  if ( v555 )
                  {
LABEL_951:
                    if ( *v528 == 1414090313 && v528[1] == 1195525195 )
                    {
                      if ( (*((_DWORD *)v532 + 599) & 0x2000) != 0 )
                        v555 = 0;
                      v1738 = v555;
                    }
                  }
                  v581 = BugCheckParameter2;
                  if ( (*((_DWORD *)v532 + 599) & 0x4000) != 0
                    && (v580 & 0x20000000) != 0
                    && (BugCheckParameter2 == *((_QWORD *)v532 + 184) || BugCheckParameter2 == *((_QWORD *)v532 + 185)) )
                  {
                    v555 = 1;
                    v1738 = 1;
                  }
                  v582 = v528[4];
                  v583 = (unsigned int)v528[3];
                  v584 = v1534;
                  if ( v582 <= v528[2] )
                    v582 = v528[2];
                  v585 = v1529;
                  v586 = v583 + v582;
                  v1533 = v528[3];
                  v587 = v583;
                  v1522 = v586;
                  if ( v1529 == v1534 )
                  {
                    v589 = 0;
                    v590 = (_DWORD)v583 != 0;
                  }
                  else
                  {
                    v588 = *v1529;
                    v589 = v1529[1];
                    v590 = *v1529 < (unsigned int)v583;
                    if ( *v1529 > (unsigned int)v583 )
                    {
                      if ( v1529[1] > v586 )
                        goto LABEL_995;
                      if ( v555 )
                        goto LABEL_997;
                      v591 = v1523;
                      v592 = BugCheckParameter2 + v583;
                      v593 = &v1623;
                      v581 = v588 - (unsigned int)v583;
                      v587 = *v1529;
                      *v1523 = v583;
                      v594 = v592 + v581;
                      v591[1] = v588;
                      v595 = v1589;
                      do
                      {
                        if ( v592 < *v593 + *v595 && v594 > *v593 )
                        {
                          v553 = 0;
                          goto LABEL_994;
                        }
                        ++v553;
                        ++v593;
                        ++v595;
                      }
                      while ( v553 < 6 );
                      v596 = v1537;
                      v597 = (_QWORD *)v592;
                      *(_DWORD *)(v1537 + 2032) += v581;
                      v598 = *(_DWORD *)(v596 + 2012);
                      v599 = *(_QWORD *)(v596 + 2016);
                      v600 = (const char *)v592;
                      if ( v592 < v594 )
                      {
                        do
                        {
                          _mm_prefetch(v600, 0);
                          v600 += 64;
                        }
                        while ( (unsigned __int64)v600 < v594 );
                      }
                      v601 = v599;
                      v602 = (unsigned int)v581 >> 7;
                      if ( (unsigned int)v581 >> 7 )
                      {
                        do
                        {
                          v603 = 8LL;
                          do
                          {
                            v604 = v601 ^ *v597;
                            v605 = v597[1];
                            v597 += 2;
                            v601 = __ROL8__(__ROL8__(v604, v598) ^ v605, v598);
                            --v603;
                          }
                          while ( v603 );
                          v606 = __ROL8__(v599 ^ ((unsigned __int64)v597 - v592), 17) ^ v599 ^ ((unsigned __int64)v597
                                                                                              - v592);
                          v1648 = (v606 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v598 = ((unsigned __int8)v1648 ^ (unsigned __int8)(v606 ^ v598)) & 0x3F;
                          if ( !v598 )
                            LOBYTE(v598) = 1;
                          --v602;
                        }
                        while ( v602 );
                        v16 = v1521;
                        LODWORD(v583) = v1533;
                      }
                      v581 &= 0x7Fu;
                      if ( (unsigned int)v581 >= 8 )
                      {
                        v607 = (unsigned __int64)(unsigned int)v581 >> 3;
                        do
                        {
                          v601 = __ROL8__(*v597++ ^ v601, v598);
                          v581 = (unsigned int)(v581 - 8);
                          --v607;
                        }
                        while ( v607 );
                      }
                      if ( (_DWORD)v581 )
                      {
                        do
                        {
                          v608 = *(unsigned __int8 *)v597;
                          v597 = (_QWORD *)((char *)v597 + 1);
                          v601 = __ROL8__(v608 ^ v601, v598);
                          v581 = (unsigned int)(v581 - 1);
                        }
                        while ( (_DWORD)v581 );
                        v16 = v1521;
                      }
                      v609 = v601 >> 31;
                      v553 = 0;
                      while ( v609 )
                      {
                        LODWORD(v601) = v609 ^ v601;
                        v609 >>= 31;
                      }
                      v586 = v1522;
                      v555 = v1738;
                      v1523[2] = v601 & 0x7FFFFFFF;
LABEL_994:
                      v585 = v1529;
                      v584 = v1534;
                      v532 = (_BYTE *)v1537;
LABEL_995:
                      if ( v589 <= v586 && v585 != v584 )
                      {
LABEL_997:
                        v610 = (unsigned int *)v1538;
                        v611 = *(_DWORD *)(v1538 + 4);
                        if ( v611 <= v586 )
                        {
                          v612 = v1541;
                          while ( v610 != v584 )
                          {
                            if ( v555 )
                            {
                              v613 = 0x80;
                            }
                            else
                            {
                              v614 = v585[1];
                              v587 = *v610;
                              if ( *v610 < (unsigned int)v614 )
                              {
                                if ( (*((_DWORD *)v532 + 598) & 0x200000) == 0 )
                                {
                                  v1583 = 664797184;
                                  KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, BugCheckParameter2, 6uLL, 0LL);
                                }
                                if ( !*((_DWORD *)v532 + 560) )
                                {
                                  v615 = BugCheckParameter2;
                                  *((_QWORD *)v532 + 281) = v532 - 0x5C5FC0A76E374B18LL;
                                  *((_QWORD *)v532 + 282) = 0LL;
                                  *((_QWORD *)v532 + 283) = 271LL;
                                  *((_QWORD *)v532 + 284) = v615;
                                  *((_DWORD *)v532 + 560) = 1;
                                  sub_140AD049C(v532, 0LL, v584, v581);
                                  v553 = 0;
                                }
                              }
                              v616 = v1589;
                              v617 = BugCheckParameter2 + v614;
                              v618 = &v1623;
                              v581 = v587 - (unsigned int)v614;
                              v619 = BugCheckParameter2 + v614 + v581;
                              do
                              {
                                if ( v617 < *v618 + *v616 && v619 > *v618 )
                                  goto LABEL_1031;
                                ++v553;
                                ++v618;
                                ++v616;
                              }
                              while ( v553 < 6 );
                              if ( (unsigned int)v581 < 4 )
                              {
LABEL_1031:
                                v553 = 0;
                                v613 = 0x80;
                              }
                              else
                              {
                                v620 = v1537;
                                v621 = (_QWORD *)v617;
                                *(_DWORD *)(v1537 + 2032) += v581;
                                v622 = *(_DWORD *)(v620 + 2012);
                                v623 = *(_QWORD *)(v620 + 2016);
                                v624 = (const char *)v617;
                                if ( v617 < v619 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v624, 0);
                                    v624 += 64;
                                  }
                                  while ( (unsigned __int64)v624 < v619 );
                                }
                                v625 = v623;
                                v626 = (unsigned int)v581 >> 7;
                                if ( (unsigned int)v581 >> 7 )
                                {
                                  do
                                  {
                                    v627 = 8LL;
                                    do
                                    {
                                      v628 = v625 ^ *v621;
                                      v629 = v621[1];
                                      v621 += 2;
                                      v625 = __ROL8__(__ROL8__(v628, v622) ^ v629, v622);
                                      --v627;
                                    }
                                    while ( v627 );
                                    v630 = __ROL8__(v623 ^ ((unsigned __int64)v621 - v617), 17) ^ v623 ^ ((unsigned __int64)v621 - v617);
                                    v1649 = (v630 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                    v622 = ((unsigned __int8)v1649 ^ (unsigned __int8)(v630 ^ v622)) & 0x3F;
                                    if ( !v622 )
                                      LOBYTE(v622) = 1;
                                    --v626;
                                  }
                                  while ( v626 );
                                  v16 = v1521;
                                }
                                v581 &= 0x7Fu;
                                if ( (unsigned int)v581 >= 8 )
                                {
                                  v631 = (unsigned __int64)(unsigned int)v581 >> 3;
                                  do
                                  {
                                    v625 = __ROL8__(*v621++ ^ v625, v622);
                                    v581 = (unsigned int)(v581 - 8);
                                    --v631;
                                  }
                                  while ( v631 );
                                }
                                v553 = 0;
                                if ( (_DWORD)v581 )
                                {
                                  do
                                  {
                                    v632 = *(unsigned __int8 *)v621;
                                    v621 = (_QWORD *)((char *)v621 + 1);
                                    v625 = __ROL8__(v632 ^ v625, v622);
                                    v581 = (unsigned int)(v581 - 1);
                                  }
                                  while ( (_DWORD)v581 );
                                  v16 = v1521;
                                }
                                for ( i27 = v625; ; LOBYTE(v625) = i27 ^ v625 )
                                {
                                  i27 >>= 7;
                                  if ( !i27 )
                                    break;
                                }
                                v555 = v1738;
                                v613 = v625 & 0x7F;
                                v610 = (unsigned int *)v1538;
                              }
                              v585 = v1529;
                              v586 = v1522;
                              v612 = v1541;
                            }
                            *v612 = v613;
                            v585 += 3;
                            v610 += 3;
                            v1529 = v585;
                            v584 = v1534;
                            v612 = ++v1541;
                            v1538 = (__int64)v610;
                            if ( v610 != v1534 )
                              v611 = v610[1];
                            if ( v611 > v586 )
                              break;
                            v532 = (_BYTE *)v1537;
                          }
                        }
                        LODWORD(v583) = v1533;
                      }
LABEL_1037:
                      v634 = v1523;
                      if ( !v555 && v587 != v586 )
                      {
                        v635 = BugCheckParameter2;
                        v636 = v1589;
                        v1523[3] = v587;
                        v637 = &v1623;
                        v634[4] = v586;
                        v638 = v634[3];
                        v639 = v586 - v638;
                        v640 = v638 + v635;
                        v641 = v640 + v586 - (unsigned int)v638;
                        do
                        {
                          if ( v640 < *v637 + *v636 && v641 > *v637 )
                          {
                            v553 = 0;
                            goto LABEL_1063;
                          }
                          ++v553;
                          ++v637;
                          ++v636;
                        }
                        while ( v553 < 6 );
                        v642 = v1537;
                        v643 = (_QWORD *)v640;
                        *(_DWORD *)(v1537 + 2032) += v639;
                        v644 = *(_DWORD *)(v642 + 2012);
                        v645 = *(_QWORD *)(v642 + 2016);
                        v646 = (const char *)v640;
                        if ( v640 < v641 )
                        {
                          do
                          {
                            _mm_prefetch(v646, 0);
                            v646 += 64;
                          }
                          while ( (unsigned __int64)v646 < v641 );
                        }
                        v647 = v645;
                        v648 = v639 >> 7;
                        if ( v639 >> 7 )
                        {
                          do
                          {
                            v649 = 8LL;
                            do
                            {
                              v650 = v647 ^ *v643;
                              v651 = v643[1];
                              v643 += 2;
                              v647 = __ROL8__(__ROL8__(v650, v644) ^ v651, v644);
                              --v649;
                            }
                            while ( v649 );
                            v652 = __ROL8__(v645 ^ ((unsigned __int64)v643 - v640), 17) ^ v645 ^ ((unsigned __int64)v643
                                                                                                - v640);
                            v1650 = (v652 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                            v644 = ((unsigned __int8)(v652 ^ v1650) ^ (unsigned __int8)v644) & 0x3F;
                            if ( !v644 )
                              LOBYTE(v644) = 1;
                            --v648;
                          }
                          while ( v648 );
                          v16 = v1521;
                          v634 = v1523;
                        }
                        v653 = v639 & 0x7F;
                        if ( v653 >= 8 )
                        {
                          v654 = (unsigned __int64)v653 >> 3;
                          do
                          {
                            v647 = __ROL8__(*v643++ ^ v647, v644);
                            v653 -= 8;
                            --v654;
                          }
                          while ( v654 );
                        }
                        if ( v653 )
                        {
                          do
                          {
                            v655 = *(unsigned __int8 *)v643;
                            v643 = (_QWORD *)((char *)v643 + 1);
                            v647 = __ROL8__(v655 ^ v647, v644);
                            --v653;
                          }
                          while ( v653 );
                          LODWORD(v583) = v1533;
                        }
                        v656 = v647 >> 31;
                        v553 = 0;
                        while ( v656 )
                        {
                          LODWORD(v647) = v656 ^ v647;
                          v656 >>= 31;
                        }
                        v586 = v1522;
                        v634[5] = v647 & 0x7FFFFFFF;
                      }
LABEL_1063:
                      v58 = (unsigned __int64)v1529;
                      if ( v1529 != v1534 && *v1529 >= (unsigned int)v583 && v1529[1] <= v586 )
                      {
                        v657 = v1538;
                        if ( (unsigned int *)v1538 != v1534 )
                        {
                          v658 = v1541;
                          *v1541 = 0x80;
                          v1541 = v658 + 1;
                          v1538 = v657 + 12;
                        }
                        v58 += 12LL;
                        v1529 = (unsigned int *)v58;
                      }
                      v532 = (_BYTE *)v1537;
                      v528 = (_DWORD *)(v1524 + 40);
                      v1523 = v634 + 6;
                      v1524 += 40LL;
                      if ( v634 + 6 == (unsigned int *)v1536 )
                      {
                        v470 = v1545;
                        goto LABEL_1071;
                      }
                      continue;
                    }
                  }
                  break;
                }
                if ( !v590 )
                  goto LABEL_995;
                goto LABEL_1037;
              }
LABEL_1071:
              v1548 = v470;
              v50 = 0LL;
LABEL_1072:
              v361 = (ULONG_PTR)v1528;
LABEL_1073:
              v17 = 0x80000000LL;
              v659 = &v1548[-v16];
              v16 = (ULONG_PTR)v1548;
              v660 = (char *)v1520 + (_QWORD)v659;
              v1521 = (ULONG_PTR)v1548;
              v1520 = (int *)((char *)v1520 + (_QWORD)v659);
              if ( (int)(v50 + 0x80000000) < 0 || (_DWORD)v50 == -1073741554 )
                *((_QWORD *)v660 + 5) = v361;
LABEL_1076:
              i21 = v1527;
LABEL_1120:
              *(_DWORD *)(v16 + 2032) += i21 << 12;
              v691 = *(_DWORD *)(v16 + 2032);
              ++*(_DWORD *)(v16 + 2028);
              if ( v691 < *(_DWORD *)(v16 + 2036) )
              {
                v59 = (char *)v1520;
                v64 = 0;
                goto LABEL_593;
              }
LABEL_1123:
              v1521 = v16;
              goto LABEL_148;
            }
            v441[8] |= 2u;
            goto LABEL_747;
          }
          ++v376;
          v369 = 0;
          if ( v376 >= *(_DWORD *)(v16 + 2004) )
            goto LABEL_681;
        }
        v379 = v376 - v369;
        v369 = v376;
        while ( 2 )
        {
          v380 = *(_DWORD *)v374;
          if ( *(int *)v374 > 12 )
          {
            if ( v380 == 28 )
            {
              v385 = *(unsigned __int16 *)(v374 + 40);
              goto LABEL_671;
            }
            if ( v380 == 30 )
            {
              v384 = (((*(_DWORD *)(v374 + 36) != 0 ? *(_DWORD *)(v374 + 36) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                   + 24 * (*(unsigned __int16 *)(v374 + 40) + 2);
              goto LABEL_672;
            }
            if ( v380 <= 32 )
              goto LABEL_668;
            if ( v380 <= 34 )
            {
              v384 = 20
                   * (unsigned int)(((*(_DWORD *)(v374 + 32) & 0xFFF)
                                   + (unsigned __int64)*(unsigned int *)(v374 + 40)
                                   + 4095) >> 12)
                   + 48;
              goto LABEL_672;
            }
            if ( v380 != 43 )
              goto LABEL_668;
          }
          else if ( v380 != 12 )
          {
            v381 = v380 - 1;
            if ( v381 )
            {
              v382 = v381 - 6;
              if ( !v382 )
              {
                v384 = (unsigned int)(24 * (*(_DWORD *)(v374 + 24) + 2));
                goto LABEL_672;
              }
              v383 = v382 - 1;
              if ( v383 )
              {
                if ( v383 == 2 )
                {
                  v384 = (unsigned int)(16 * (*(_DWORD *)(v374 + 28) + 3));
                  goto LABEL_672;
                }
LABEL_668:
                v384 = 48LL;
LABEL_672:
                v374 += v384;
                if ( !--v379 )
                {
                  v16 = v1521;
                  v370 = v1735;
                  v368 = BugCheckParameter2;
                  v371 = v1529;
                  v361 = (ULONG_PTR)v1528;
                  goto LABEL_674;
                }
                continue;
              }
              v385 = *(unsigned __int16 *)(v374 + 32);
LABEL_671:
              v384 = (v385 + 55) & 0xFFFFFFF8;
              goto LABEL_672;
            }
          }
          break;
        }
        v384 = 4 * (*(_DWORD *)(v374 + 16) / 0xCu) + 48;
        goto LABEL_672;
      }
      v692 = *((_DWORD *)v59 + 10);
      (*(void (__fastcall **)(_BYTE *, _QWORD))(v16 + 400))(v1695, *((unsigned int *)v59 + 11));
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1695, v1714);
      v66 = v692 == 0;
      v693 = __readcr4();
      if ( v66 )
        v693 = __readcr0();
      v694 = v1714;
LABEL_1127:
      (*(void (__fastcall **)(_BYTE *))(v16 + 392))(v694);
      v695 = *((_QWORD *)v59 + 4);
      v17 = v693 & *((_QWORD *)v59 + 3);
      if ( v17 == v695 )
        goto LABEL_148;
      v50 = *((_QWORD *)v59 + 5);
      if ( *(_DWORD *)(v16 + 2240) )
        goto LABEL_148;
      *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v17 ^ v695;
LABEL_1130:
      if ( *(_DWORD *)(v16 + 2240) )
        goto LABEL_148;
      *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
      v696 = *(int *)v59;
LABEL_1132:
      *(_QWORD *)(v16 + 2264) = v696;
      *(_QWORD *)(v16 + 2272) = v50;
      goto LABEL_1133;
    }
    switch ( v68 )
    {
      case 12:
        if ( !*(_QWORD *)(v16 + 2376) )
          goto LABEL_1748;
        v17 = *(unsigned int *)(v16 + 2028);
        v227 = *(_DWORD *)(v16 + 2396);
        if ( (_DWORD)v17 )
        {
          v50 = v227;
          if ( (((unsigned __int8)v227 ^ (unsigned __int8)(v227 >> 3)) & 4) != 0 )
            goto LABEL_1748;
        }
        else
        {
          LODWORD(v50) = v227 ^ ((unsigned __int8)v227 ^ (unsigned __int8)(8 * v227)) & 0x20;
          *(_DWORD *)(v16 + 2396) = v50;
        }
        if ( (v50 & 4) != 0 )
        {
          v228 = *((_QWORD *)v59 + 4);
          if ( v228 )
          {
            LOWORD(v229) = v17 + v228;
            v230 = (unsigned int)(*((_DWORD *)v59 + 10) - v17);
            v231 = v228 + v17;
          }
          else
          {
            v229 = *((_DWORD *)v59 + 2);
            v230 = *((unsigned int *)v59 + 4);
            v231 = *((_QWORD *)v59 + 1);
          }
          v50 = v229 & 0xFFF;
          v232 = (v50 + v230 + 4095) >> 12;
          v233 = v231 & 0xFFFFFFFFFFFFF000uLL;
          while ( v232 )
          {
            --v232;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v233) && !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *(int *)v59;
              *(_QWORD *)(v16 + 2272) = v233;
              *(_DWORD *)(v16 + 2240) = 1;
              sub_140AD049C(v16, 0LL, v17, v234);
            }
            v233 += 4096LL;
            v235 = *(_DWORD *)(v16 + 2032) + 256;
            *(_DWORD *)(v16 + 2032) = v235;
            if ( v228 )
            {
              *(_DWORD *)(v16 + 2028) += 4096;
              if ( v235 >= *(_DWORD *)(v16 + 2036) )
                goto LABEL_463;
            }
          }
          if ( v228 )
          {
LABEL_463:
            if ( !v232 )
              *(_DWORD *)(v16 + 2028) = 0;
          }
          if ( *(_DWORD *)(v16 + 2028) )
            goto LABEL_148;
          v236 = *(_QWORD *)(v16 + 1304);
          v237 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(v16 + 320))(v236);
          v239 = **(unsigned int ***)(v16 + 1512);
          v240 = v239 + 4;
          v241 = *((_BYTE *)v239 + 12);
          v242 = (unsigned __int64)&v239[6 * *v239 + 4];
          do
          {
            v243 = 24LL;
            v244 = (__int64 *)(v59 + 24);
            v245 = v240;
            do
            {
              v246 = *(_QWORD *)v245;
              v245 += 2;
              v247 = *v244++;
              if ( v246 != v247 )
                goto LABEL_474;
              v243 = (unsigned int)(v243 - 8);
            }
            while ( (unsigned int)v243 >= 8 );
            if ( !(_DWORD)v243 )
              break;
            while ( 1 )
            {
              v238 = *(unsigned __int8 *)v245;
              v245 = (unsigned int *)((char *)v245 + 1);
              v248 = *(unsigned __int8 *)v244;
              v244 = (__int64 *)((char *)v244 + 1);
              if ( v238 != v248 )
                break;
              v66 = (_DWORD)v243 == 1;
              v243 = (unsigned int)(v243 - 1);
              if ( v66 )
                goto LABEL_475;
            }
LABEL_474:
            v240 += 6;
          }
          while ( (unsigned __int64)v240 < v242 );
LABEL_475:
          v16 = v1521;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v1521 + 384))(
            *(_QWORD *)(v1521 + 1304),
            v238,
            v243,
            v244);
          __writecr8(v237);
          if ( v241 )
          {
            v50 = 16LL;
            if ( (*(_DWORD *)(v16 + 2396) & 0x10) != 0 && !*(_DWORD *)(v16 + 2240) )
            {
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *(int *)v59;
              *(_QWORD *)(v16 + 2272) = 1LL;
              *(_DWORD *)(v16 + 2240) = 1;
              sub_140AD049C(v16, 0LL, v17, v58);
            }
            if ( *((_QWORD *)v59 + 3) == 1LL )
              goto LABEL_148;
          }
          if ( v240 != (unsigned int *)v242 || *(_DWORD *)(v16 + 2240) )
            goto LABEL_148;
          v249 = v16 - 0x5C5FC0A76E374B18LL;
          goto LABEL_483;
        }
        goto LABEL_2106;
      case 0:
        v209 = (const char *)*((_QWORD *)v59 + 1);
        v210 = *((unsigned int *)v59 + 4);
        v58 = (unsigned __int64)v209;
        *(_DWORD *)(v16 + 2032) += v210;
        v211 = v209;
        v212 = *(_DWORD *)(v16 + 2012);
        v213 = *(_QWORD *)(v16 + 2016);
        v50 = (unsigned __int64)&v209[v210];
        if ( v209 < &v209[v210] )
        {
          do
          {
            _mm_prefetch(v211, 0);
            v211 += 64;
          }
          while ( (unsigned __int64)v211 < v50 );
        }
        v214 = *(_QWORD *)(v16 + 2016);
        v215 = (unsigned int)v210 >> 7;
        if ( (unsigned int)v210 >> 7 )
        {
          do
          {
            v216 = 8LL;
            do
            {
              v217 = *(_QWORD *)(v58 + 8) ^ __ROL8__(*(_QWORD *)v58 ^ v214, v212);
              v58 += 16LL;
              v214 = __ROL8__(v217, v212);
              --v216;
            }
            while ( v216 );
            v50 = __ROL8__(v213 ^ (v58 - (_QWORD)v209), 17) ^ v213 ^ (v58 - (_QWORD)v209);
            v1690 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v212 = ((unsigned __int8)v1690 ^ (unsigned __int8)(v50 ^ v212)) & 0x3F;
            if ( !v212 )
              v212 = 1;
            --v215;
          }
          while ( v215 );
          v16 = v1521;
        }
        v17 = v210 & 0x7F;
        if ( (unsigned int)v17 >= 8 )
        {
          v218 = (unsigned __int64)(unsigned int)v17 >> 3;
          do
          {
            v50 = v212;
            v214 = __ROL8__(*(_QWORD *)v58 ^ v214, v212);
            v58 += 8LL;
            v17 = (unsigned int)(v17 - 8);
            --v218;
          }
          while ( v218 );
        }
        for ( ; (_DWORD)v17; v17 = (unsigned int)(v17 - 1) )
        {
          v219 = *(unsigned __int8 *)v58;
          v50 = v212;
          ++v58;
          v214 = __ROL8__(v219 ^ v214, v212);
        }
        for ( i28 = v214; ; LODWORD(v214) = i28 ^ v214 )
        {
          i28 >>= 31;
          if ( !i28 )
            break;
        }
        v221 = v214 & 0x7FFFFFFF;
        if ( v221 == *((_DWORD *)v59 + 5) )
          goto LABEL_148;
        if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
          v64 = 1;
        v50 = *((unsigned int *)v59 + 4);
        v222 = *((_QWORD *)v59 + 1);
        if ( *((_DWORD *)v59 + 4) )
        {
          v17 = 64LL;
          if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
          {
            v223 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v224 = v222 & 0xFFFFFFFFFFFFF000uLL;
            v1731 = (v222 + v50 - 1) | 0xFFF;
            v225 = (v222 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v92 = v223;
              while ( 1 )
              {
                v226 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v16 + 1112))(
                         v224,
                         0LL,
                         v17,
                         v58);
                if ( v226 != -1073741267 )
                  break;
                if ( v64 )
                  goto LABEL_441;
                if ( v223 > 1u )
                  goto LABEL_439;
                v92 = v223;
                __writecr8(v223);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v226 < 0 )
                break;
LABEL_439:
              v224 += 4096LL;
              v225 += 4096LL;
              if ( v225 == v1731 )
                goto LABEL_230;
            }
LABEL_441:
            __writecr8(v92);
            v59 = (char *)v1520;
          }
        }
        if ( *(_DWORD *)(v16 + 2240) )
          goto LABEL_148;
        *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v221;
LABEL_444:
        v50 = *((_QWORD *)v59 + 1);
        if ( *(_DWORD *)(v16 + 2240) )
          goto LABEL_148;
        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v16 + 2264) = *(int *)v59;
        *(_QWORD *)(v16 + 2272) = v50;
        goto LABEL_1133;
      case 1:
        goto LABEL_2106;
    }
    v50 = (unsigned int)(v68 - 4);
    switch ( v68 )
    {
      case 4:
        if ( (*(_DWORD *)(v16 + 2040) & 1) == 0 )
        {
          v187 = *(void (**)(void))(v16 + 360);
          v188 = 0;
          v189 = *(_QWORD *)(v16 + 1312);
          LODWORD(v1523) = 0;
          v187();
          if ( (*(_DWORD *)(v16 + 2392) & 0x40000000) != 0 || (v190 = *(_DWORD *)(v16 + 2328), v190 >= 7) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 280))(*(_QWORD *)(v16 + 2504), 0LL);
            v191 = 0x80;
          }
          else
          {
            v191 = 1 << v190;
          }
          v1730 = v191;
          (*(void (__fastcall **)(__int64, _QWORD))(v16 + 296))(v189, 0LL);
          v194 = *(_QWORD ***)(v16 + 1272);
          v195 = *v194;
          if ( *v194 != v194 )
          {
            do
            {
              v196 = (unsigned __int64)v195 - *(_QWORD *)(v16 + 1696);
              if ( v191 != 0x80
                && (v191 & *(_BYTE *)(v196 + *(_QWORD *)(v16 + 1672))) != 0
                && (*(_DWORD *)(v196 + *(_QWORD *)(v16 + 1680)) & *(_DWORD *)(v16 + 1704)) != 0
                && !*(_DWORD *)(v16 + 2240) )
              {
                v197 = v1520;
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v197 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v197;
                *(_QWORD *)(v16 + 2272) = v196 | 1;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v192, v193);
              }
              _InterlockedOr8((volatile signed __int8 *)(v196 + *(_QWORD *)(v16 + 1672)), v191);
              v195 = (_QWORD *)*v195;
              ++v188;
            }
            while ( v195 != v194 );
            LODWORD(v1523) = v188;
          }
          v198 = *(_QWORD *)(v16 + 1240);
          v1526 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          (*(void (__fastcall **)(__int64, _BYTE *))(v16 + 312))(v198, v1722);
          v201 = *(_QWORD ***)(v16 + 1232);
          v202 = *v201;
          if ( *v201 != v201 )
          {
            v203 = v191;
            v204 = v191;
            v205 = v1520;
            v206 = ~v203;
            do
            {
              v207 = *(_QWORD *)(v16 + 1672);
              v208 = (char *)v202 - *(_QWORD *)(v16 + 1664);
              if ( (v208[v207] & v204) == 0 && !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = (char *)v205 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *v205;
                *(_QWORD *)(v16 + 2272) = v208;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v199, v200);
                v207 = *(_QWORD *)(v16 + 1672);
              }
              _InterlockedAnd8(&v208[v207], v206);
              v202 = (_QWORD *)*v202;
            }
            while ( v202 != v201 );
            v191 = v1730;
            v188 = (int)v1523;
          }
          (*(void (__fastcall **)(_BYTE *))(v16 + 376))(v1722);
          __writecr8((unsigned __int8)v1526);
          if ( v191 == 0x80 )
            (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 288))(*(_QWORD *)(v16 + 2504), 0LL);
          (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 304))(*(_QWORD *)(v16 + 1312), 0LL);
          (*(void (**)(void))(v16 + 368))();
          *(_DWORD *)(v16 + 2032) += v188 << 8;
        }
        goto LABEL_148;
      case 5:
        v50 = *(unsigned int *)(v16 + 2040);
        if ( (v50 & 1) == 0 )
          goto LABEL_148;
        if ( _bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) )
        {
          v162 = __rdtsc();
          v163 = (__ROR8__(v162, 3) ^ v162) * (unsigned __int128)0x7010008004002001uLL;
          v1689 = *((_QWORD *)&v163 + 1);
          v1729 = ((unsigned __int64)v163 ^ *((_QWORD *)&v163 + 1)) == 3
                                                                     * (((unsigned __int64)v163 ^ *((_QWORD *)&v163 + 1))
                                                                      / 3);
        }
        else
        {
          v1729 = (v50 & 3) == 3;
        }
        v164 = *(void (**)(void))(v16 + 360);
        v165 = 0;
        v166 = *(_QWORD *)(v16 + 1312);
        LODWORD(v1523) = 0;
        v164();
        if ( _bittest((const signed __int32 *)(v16 + 2392), 0x1Eu) || (v167 = *(_DWORD *)(v16 + 2328), v167 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 280))(*(_QWORD *)(v16 + 2504), 0LL);
          v168 = 0x80;
        }
        else
        {
          v168 = 1 << v167;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(v16 + 296))(v166, 0LL);
        v169 = *(volatile signed __int8 ***)(v16 + 1272);
        v170 = *v169;
        if ( *v169 != (volatile signed __int8 *)v169 )
        {
          do
          {
            _InterlockedOr8(&v170[*(_QWORD *)(v16 + 1672) - *(_QWORD *)(v16 + 1696)], v168);
            v170 = *(volatile signed __int8 **)v170;
            ++v165;
          }
          while ( v170 != (volatile signed __int8 *)v169 );
          LODWORD(v1523) = v165;
        }
        v171 = 4LL;
        v172 = **(_QWORD **)(v16 + 1320);
        v173 = *(unsigned int *)(*(_QWORD *)(v16 + 1792) + v172);
        while ( 1 )
        {
          v174 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v16 + 248))(v172, v171);
          v176 = 0LL;
          v177 = v174;
          if ( v174 )
            break;
LABEL_381:
          v171 += 4LL;
          if ( v171 >= v173 )
          {
            if ( v168 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v16 + 288))(
                *(_QWORD *)(v16 + 2504),
                0LL,
                v175,
                v176);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v16 + 304))(
              *(_QWORD *)(v16 + 1312),
              0LL,
              v175,
              v176);
            (*(void (**)(void))(v16 + 368))();
            v186 = (v173 >> 2) + (_DWORD)v1523;
            goto LABEL_385;
          }
        }
        v178 = (_BYTE *)((*v174 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        v179 = *v178 & 0x7F;
        if ( v179 == 3 )
        {
          v175 = *(_QWORD *)(v16 + 1672);
          v180 = v175;
          if ( (v168 & v178[v175]) == 0
            && (*(_DWORD *)&v178[*(_QWORD *)(v16 + 1680)] & *(_DWORD *)(v16 + 1704)) != 0
            && !*(_DWORD *)(v16 + 2240) )
          {
            v181 = v1520;
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = (char *)v181 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *v181;
            *(_QWORD *)(v16 + 2272) = v178;
            *(_DWORD *)(v16 + 2240) = 1;
            sub_140AD049C(v16, 0LL, v175, 0LL);
            v180 = *(_QWORD *)(v16 + 1672);
          }
          _InterlockedAnd8(&v178[v180], ~v168);
          goto LABEL_380;
        }
        if ( v179 == 6 )
        {
          if ( v1729 )
          {
            v182 = *(_QWORD *)(v16 + 1616);
            v183 = *(_QWORD *)&v178[v182 + 32];
            if ( (v183 == *(_QWORD *)(v16 + 784) || v183 == *(_QWORD *)(v16 + 792))
              && *(_QWORD *)&v178[v182 + 48] == *(_QWORD *)(v16 + 800) )
            {
              v184 = *(_QWORD *)&v178[v182 + 40] == *(_QWORD *)(v16 + 808);
              goto LABEL_377;
            }
            goto LABEL_378;
          }
        }
        else
        {
          v184 = v179 == 0;
LABEL_377:
          if ( !v184 )
          {
LABEL_378:
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              v185 = v1520;
              *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v16 + 2256) = (char *)v185 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v16 + 2264) = *v185;
              *(_QWORD *)(v16 + 2272) = v178;
              *(_DWORD *)(v16 + 2240) = 1;
              sub_140AD049C(v16, 0LL, v175, 0LL);
            }
          }
        }
LABEL_380:
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v16 + 272))(v172, v177, v175, v176);
        goto LABEL_381;
      case 7:
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v16 + 400))(v1693, *((unsigned int *)v59 + 7));
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v16 + 448))(v1693, v1694);
        for ( i29 = 0; i29 < *((_DWORD *)v59 + 6); ++i29 )
        {
          v154 = *(unsigned int *)&v59[24 * i29 + 64];
          if ( (*(_BYTE *)(v16 + 2115) & 2) != 0
            && (_DWORD)v154 == -1073741694
            && HIDWORD(KeGetPcr()[1].LockArray) == *(_DWORD *)(v16 + 2232) )
          {
            v155 = *(_QWORD *)(v16 + 2224);
          }
          else
          {
            v155 = __readmsr(v154);
          }
          v156 = *(_QWORD *)&v59[24 * i29 + 48];
          v157 = *(_QWORD *)&v59[24 * i29 + 56];
          v158 = v156 & v155;
          if ( v158 == v157 )
          {
            if ( (*(_DWORD *)(v16 + 2396) & 0x200) != 0 && v156 == -1 )
              __writemsr(v154, v158);
          }
          else
          {
            v159 = v154 | ((unsigned __int64)*((unsigned int *)v59 + 7) << 32);
            if ( !*(_DWORD *)(v16 + 2240) )
            {
              v160 = v158 ^ v157;
              *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v160;
              if ( !*(_DWORD *)(v16 + 2240) )
              {
                *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v16 + 2264) = *(int *)v59;
                *(_QWORD *)(v16 + 2272) = v159;
                *(_DWORD *)(v16 + 2240) = 1;
                sub_140AD049C(v16, 0LL, v159, v160);
              }
            }
          }
        }
        (*(void (__fastcall **)(_BYTE *))(v16 + 392))(v1694);
        v161 = *((_DWORD *)v59 + 6) << 15;
        goto LABEL_350;
      case 8:
        v125 = *((_QWORD *)v59 + 3);
        v126 = *((_WORD *)v59 + 17);
        if ( *(_WORD *)(v125 + *(_QWORD *)(v16 + 1728) + *(_QWORD *)(v16 + 1776)) != v126 && !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2264) = *(int *)v59;
          *(_QWORD *)(v16 + 2272) = v125;
          *(_DWORD *)(v16 + 2240) = 1;
          sub_140AD049C(v16, 0LL, v17, v58);
          v126 = *((_WORD *)v59 + 17);
        }
        if ( (v126 & *(_WORD *)(v16 + 1784)) == 0
          && *(_QWORD *)(v125 + *(_QWORD *)(v16 + 1736)) != v125 + *(_QWORD *)(v16 + 1736)
          && !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2264) = *(int *)v59;
          *(_QWORD *)(v16 + 2272) = v125;
          *(_DWORD *)(v16 + 2240) = 1;
          sub_140AD049C(v16, 0LL, v17, v58);
        }
        v127 = (_QWORD *)*((_QWORD *)v59 + 1);
        v128 = *((unsigned int *)v59 + 4);
        v129 = v127;
        *(_DWORD *)(v16 + 2032) += v128;
        v130 = (const char *)v127;
        v131 = *(_DWORD *)(v16 + 2012);
        v132 = *(_QWORD *)(v16 + 2016);
        if ( v127 < (_QWORD *)((char *)v127 + v128) )
        {
          do
          {
            _mm_prefetch(v130, 0);
            v130 += 64;
          }
          while ( v130 < (const char *)v127 + v128 );
        }
        v133 = *(_QWORD *)(v16 + 2016);
        v134 = (unsigned int)v128 >> 7;
        if ( (unsigned int)v128 >> 7 )
        {
          do
          {
            v135 = 8LL;
            do
            {
              v136 = v129[1] ^ __ROL8__(*v129 ^ v133, v131);
              v129 += 2;
              v133 = __ROL8__(v136, v131);
              --v135;
            }
            while ( v135 );
            v137 = (__ROL8__(v132 ^ ((char *)v129 - (char *)v127), 17) ^ v132 ^ (unsigned __int64)((char *)v129
                                                                                                 - (char *)v127))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1688 = *((_QWORD *)&v137 + 1);
            v131 = (BYTE8(v137) ^ (unsigned __int8)(v137 ^ v131)) & 0x3F;
            if ( !v131 )
              LOBYTE(v131) = 1;
            --v134;
          }
          while ( v134 );
          v16 = v1521;
        }
        v138 = v128 & 0x7F;
        if ( (unsigned int)v138 >= 8 )
        {
          v139 = (unsigned __int64)(unsigned int)v138 >> 3;
          do
          {
            v133 = __ROL8__(*v129++ ^ v133, v131);
            v138 = (unsigned int)(v138 - 8);
            --v139;
          }
          while ( v139 );
        }
        for ( ; (_DWORD)v138; v138 = (unsigned int)(v138 - 1) )
        {
          v140 = *(unsigned __int8 *)v129;
          v129 = (_QWORD *)((char *)v129 + 1);
          v133 = __ROL8__(v140 ^ v133, v131);
        }
        for ( i30 = v133; ; LODWORD(v133) = i30 ^ v133 )
        {
          i30 >>= 31;
          if ( !i30 )
            break;
        }
        v142 = v133 & 0x7FFFFFFF;
        if ( v142 == *((_DWORD *)v59 + 5) )
          goto LABEL_326;
        if ( !*(_DWORD *)v59 && *((_DWORD *)v59 + 6) )
          v64 = 1;
        v143 = *((unsigned int *)v59 + 4);
        v144 = *((_QWORD *)v59 + 1);
        if ( *((_DWORD *)v59 + 4) )
        {
          v138 = 64LL;
          if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
          {
            v145 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v146 = v144 & 0xFFFFFFFFFFFFF000uLL;
            v1728 = (v144 + v143 - 1) | 0xFFF;
            v147 = (v144 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v148 = v145;
              while ( 1 )
              {
                v149 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v16 + 1112))(
                         v146,
                         0LL,
                         v138,
                         v129);
                if ( v149 != -1073741267 )
                  break;
                if ( v64 )
                  goto LABEL_331;
                if ( v145 > 1u )
                  goto LABEL_324;
                v148 = v145;
                __writecr8(v145);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v149 < 0 )
                break;
LABEL_324:
              v146 += 4096LL;
              v147 += 4096LL;
              if ( v147 == v1728 )
              {
                __writecr8(v148);
                v59 = (char *)v1520;
LABEL_326:
                v1619 = v59 + 48;
                v1618[0] = *((_WORD *)v59 + 16);
                LOBYTE(v1518) = 0;
                v1618[1] = v1618[0];
                if ( (*(int (__fastcall **)(_WORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, __int64 *))(v16 + 472))(
                       v1618,
                       0LL,
                       0LL,
                       0LL,
                       *(_QWORD *)(v16 + 1248),
                       v1518,
                       0LL,
                       &v1594) >= 0 )
                {
                  v151 = v1594;
                  if ( v1594 != *((_QWORD *)v59 + 3) && !*(_DWORD *)(v16 + 2240) )
                  {
                    *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v16 + 2264) = *(int *)v59;
                    *(_QWORD *)(v16 + 2272) = v151;
                    *(_DWORD *)(v16 + 2240) = 1;
                    sub_140AD049C(v16, 0LL, v17, v150);
                  }
                  (*(void (**)(void))(v16 + 464))();
                }
                goto LABEL_148;
              }
            }
LABEL_331:
            __writecr8(v148);
            v59 = (char *)v1520;
          }
        }
        if ( !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = *((unsigned int *)v59 + 5) ^ (unsigned __int64)v142;
          v152 = *((_QWORD *)v59 + 1);
          if ( !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *(int *)v59;
            *(_QWORD *)(v16 + 2272) = v152;
            *(_DWORD *)(v16 + 2240) = 1;
            sub_140AD049C(v16, 0LL, v138, v129);
          }
        }
        goto LABEL_326;
    }
    v50 = (unsigned int)(v68 - 10);
    if ( v68 == 10 )
    {
      if ( *((_DWORD *)v59 + 6) )
      {
        if ( !*(_QWORD *)(v16 + 2376) )
          goto LABEL_243;
        v50 = *(unsigned int *)(v16 + 2396);
        if ( (v50 & 4) != 0 )
          goto LABEL_243;
        v95 = *(_DWORD *)(v16 + 2028);
        if ( v95 )
        {
          if ( (v50 & 0x20) != 0 )
            goto LABEL_243;
        }
        else
        {
          *(_DWORD *)(v16 + 2396) = v50 ^ ((unsigned __int8)v50 ^ (unsigned __int8)(8 * v50)) & 0x20;
        }
      }
      else
      {
        v95 = *(_DWORD *)(v16 + 2028);
      }
      v97 = (unsigned int *)&v59[16 * v95 + 48];
      v98 = (unsigned __int64)&v59[16 * *((unsigned int *)v59 + 7) + 48];
      v1727 = v98;
      do
      {
        if ( (*v97 & 0x80000000) != 0 )
          goto LABEL_276;
        v99 = *((_QWORD *)v97 + 1);
        v100 = v97[1];
        v101 = (_QWORD *)v99;
        *(_DWORD *)(v16 + 2032) += v100;
        v102 = (const char *)v99;
        v103 = *(_DWORD *)(v16 + 2012);
        v104 = (unsigned int)v100;
        v105 = *(_QWORD *)(v16 + 2016);
        v1524 = v99;
        if ( v99 < v100 + v99 )
        {
          do
          {
            _mm_prefetch(v102, 0);
            v102 += 64;
          }
          while ( (unsigned __int64)v102 < v100 + v99 );
        }
        v106 = v105;
        v107 = (unsigned int)v100 >> 7;
        if ( (unsigned int)v100 >> 7 )
        {
          do
          {
            v108 = 8LL;
            do
            {
              v109 = v106 ^ *v101;
              v110 = v101[1];
              v101 += 2;
              v106 = __ROL8__(__ROL8__(v109, v103) ^ v110, v103);
              --v108;
            }
            while ( v108 );
            v111 = __ROL8__(v105 ^ ((unsigned __int64)v101 - v99), 17) ^ v105 ^ ((unsigned __int64)v101 - v99);
            v1687 = (v111 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v103 = ((unsigned __int8)v1687 ^ (unsigned __int8)(v111 ^ v103)) & 0x3F;
            if ( !v103 )
              LOBYTE(v103) = 1;
            --v107;
          }
          while ( v107 );
          v16 = v1521;
          v98 = v1727;
        }
        v17 = v100 & 0x7F;
        if ( (unsigned int)v17 >= 8 )
        {
          v112 = (unsigned __int64)(unsigned int)v17 >> 3;
          do
          {
            v106 = __ROL8__(*v101++ ^ v106, v103);
            v17 = (unsigned int)(v17 - 8);
            --v112;
          }
          while ( v112 );
        }
        if ( (_DWORD)v17 )
        {
          do
          {
            v113 = *(unsigned __int8 *)v101;
            v101 = (_QWORD *)((char *)v101 + 1);
            v106 = __ROL8__(v113 ^ v106, v103);
            v17 = (unsigned int)(v17 - 1);
          }
          while ( (_DWORD)v17 );
          v16 = v1521;
        }
        for ( i31 = v106; ; LODWORD(v106) = i31 ^ v106 )
        {
          i31 >>= 31;
          if ( !i31 )
            break;
        }
        v50 = *v97;
        v115 = v106 & 0x7FFFFFFF;
        if ( v115 == (*v97 & 0x7FFFFFFF) )
          goto LABEL_276;
        if ( v104 && (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
        {
          v116 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v117 = v99 & 0xFFFFFFFFFFFFF000uLL;
          v1526 = (v104 + v99 - 1) | 0xFFF;
          v118 = (v99 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v119 = v116;
            while ( 1 )
            {
              v120 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD *))(v16 + 1112))(
                       v117,
                       0LL,
                       v17,
                       v101);
              if ( v120 != -1073741267 )
                break;
              if ( v116 > 1u )
                goto LABEL_274;
              v119 = v116;
              __writecr8(v116);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v120 < 0 )
              break;
LABEL_274:
            v117 += 4096LL;
            v118 += 4096LL;
            if ( v118 == v1526 )
            {
              __writecr8(v119);
              v98 = v1727;
              goto LABEL_276;
            }
          }
          __writecr8(v119);
          v50 = *v97;
          v99 = v1524;
          v98 = v1727;
        }
        v123 = (unsigned int)v50;
        LODWORD(v123) = v50 & 0x7FFFFFFF;
        if ( *(_DWORD *)(v16 + 2240) )
        {
LABEL_276:
          v121 = v1520;
        }
        else
        {
          v124 = v115;
          v121 = v1520;
          v50 = v123 ^ v124;
          *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v50;
          if ( !*(_DWORD *)(v16 + 2240) )
          {
            *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2256) = (char *)v121 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2264) = *v121;
            *(_QWORD *)(v16 + 2272) = v99;
            *(_DWORD *)(v16 + 2240) = 1;
            sub_140AD049C(v16, 0LL, v17, v101);
          }
        }
        v97 += 4;
        v122 = v97 == (unsigned int *)v98;
        if ( (unsigned __int64)v97 >= v98 )
          goto LABEL_280;
      }
      while ( *(_DWORD *)(v16 + 2032) < *(_DWORD *)(v16 + 2036) );
      v122 = v97 == (unsigned int *)v98;
LABEL_280:
      if ( !v122 )
      {
        v96 = ((char *)v97 - (char *)(v121 + 12)) >> 4;
        goto LABEL_282;
      }
LABEL_243:
      LODWORD(v96) = 0;
LABEL_282:
      *(_DWORD *)(v16 + 2028) = v96;
      goto LABEL_148;
    }
    if ( v68 != 11 )
      goto LABEL_2297;
    if ( !*(_QWORD *)(v16 + 2376) )
      goto LABEL_1748;
    if ( *(_DWORD *)(v16 + 2028) )
    {
      v50 = *(unsigned int *)(v16 + 2396);
      if ( (((unsigned __int8)v50 ^ (unsigned __int8)(*(_DWORD *)(v16 + 2396) >> 3)) & 4) != 0 )
        goto LABEL_1748;
    }
    else
    {
      LODWORD(v50) = *(_DWORD *)(v16 + 2396) ^ ((unsigned __int8)*(_DWORD *)(v16 + 2396) ^ (unsigned __int8)(8 * *(_DWORD *)(v16 + 2396))) & 0x20;
      *(_DWORD *)(v16 + 2396) = v50;
    }
    if ( (v50 & 4) != 0 )
    {
      v50 = *((_DWORD *)v59 + 2) & 0xFFF;
      v69 = *((_QWORD *)v59 + 1) & 0xFFFFFFFFFFFFF000uLL;
      v70 = (v50 + *((unsigned int *)v59 + 4) + 4095LL) >> 12;
      while ( v70 )
      {
        --v70;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v16 + 672))(v69) && !*(_DWORD *)(v16 + 2240) )
        {
          *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2264) = *(int *)v59;
          *(_QWORD *)(v16 + 2272) = v69;
          *(_DWORD *)(v16 + 2240) = 1;
          sub_140AD049C(v16, 0LL, v17, v71);
        }
        v69 += 4096LL;
        *(_DWORD *)(v16 + 2032) += 256;
      }
      goto LABEL_148;
    }
    v72 = (const char *)*((_QWORD *)v59 + 1);
    v73 = *((unsigned int *)v59 + 4);
    v74 = (__int64)v72;
    *(_DWORD *)(v16 + 2032) += v73;
    v75 = v72;
    v76 = *(_DWORD *)(v16 + 2012);
    v77 = *(_QWORD *)(v16 + 2016);
    v50 = (unsigned __int64)&v72[v73];
    if ( v72 < &v72[v73] )
    {
      do
      {
        _mm_prefetch(v75, 0);
        v75 += 64;
      }
      while ( (unsigned __int64)v75 < v50 );
    }
    v78 = *(_QWORD *)(v16 + 2016);
    v79 = (unsigned int)v73 >> 7;
    if ( (unsigned int)v73 >> 7 )
    {
      do
      {
        v80 = 8LL;
        do
        {
          v81 = v78 ^ *(_QWORD *)v74;
          v82 = *(_QWORD *)(v74 + 8);
          v74 += 16LL;
          v78 = __ROL8__(__ROL8__(v81, v76) ^ v82, v76);
          --v80;
        }
        while ( v80 );
        v50 = __ROL8__(v77 ^ (v74 - (_QWORD)v72), 17) ^ v77 ^ (v74 - (_QWORD)v72);
        v1686 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v76 = ((unsigned __int8)v1686 ^ (unsigned __int8)(v50 ^ v76)) & 0x3F;
        if ( !v76 )
          v76 = 1;
        --v79;
      }
      while ( v79 );
      v16 = v1521;
    }
    v17 = v73 & 0x7F;
    if ( (unsigned int)v17 >= 8 )
    {
      v83 = (unsigned __int64)(unsigned int)v17 >> 3;
      do
      {
        v50 = v76;
        v78 = __ROL8__(*(_QWORD *)v74 ^ v78, v76);
        v74 += 8LL;
        v17 = (unsigned int)(v17 - 8);
        --v83;
      }
      while ( v83 );
    }
    if ( (_DWORD)v17 )
    {
      do
      {
        v84 = *(unsigned __int8 *)v74;
        v50 = v76;
        ++v74;
        v78 = __ROL8__(v84 ^ v78, v76);
        v17 = (unsigned int)(v17 - 1);
      }
      while ( (_DWORD)v17 );
      v16 = v1521;
    }
    for ( i32 = v78; ; LODWORD(v78) = i32 ^ v78 )
    {
      i32 >>= 31;
      if ( !i32 )
        break;
    }
    v86 = *((_DWORD *)v59 + 5);
    v87 = v78 & 0x7FFFFFFF;
    if ( v87 != v86 )
    {
      v50 = *((unsigned int *)v59 + 4);
      v17 = *((_QWORD *)v59 + 1);
      if ( *((_DWORD *)v59 + 4) )
      {
        v74 = 64LL;
        if ( (*(_DWORD *)(v16 + 2396) & 0x40) != 0 )
        {
          v88 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v89 = v17 & 0xFFFFFFFFFFFFF000uLL;
          v90 = (v17 + v50 - 1) | 0xFFF;
          v91 = (v17 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v92 = v88;
            while ( 1 )
            {
              v93 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v16 + 1112))(v89, 0LL);
              if ( v93 != -1073741267 )
                break;
              if ( v88 > 1u )
                goto LABEL_229;
              v92 = v88;
              __writecr8(v88);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v93 < 0 )
            {
              __writecr8(v92);
              v59 = (char *)v1520;
              v86 = v1520[5];
              goto LABEL_232;
            }
LABEL_229:
            v89 += 4096LL;
            v91 += 4096LL;
            if ( v91 != v90 )
              continue;
            break;
          }
LABEL_230:
          __writecr8(v92);
          goto LABEL_148;
        }
      }
LABEL_232:
      if ( *(_DWORD *)(v16 + 2240) )
        goto LABEL_148;
      *(_QWORD *)(*(_QWORD *)(v16 + 1384) + 24LL) = v86 ^ (unsigned __int64)v87;
      v50 = *((_QWORD *)v59 + 1);
      v94 = *(_DWORD *)(v16 + 2240) == 0;
LABEL_234:
      if ( v94 )
      {
        *(_QWORD *)(v16 + 2248) = v16 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v16 + 2256) = v59 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v16 + 2264) = *(int *)v59;
        *(_QWORD *)(v16 + 2272) = v50;
        *(_DWORD *)(v16 + 2240) = 1;
        sub_140AD049C(v16, 0LL, v17, v74);
      }
    }
LABEL_148:
    v48 = 0xFFFFFFFFLL;
    v65 = v1539;
    if ( *(_DWORD *)(v16 + 2028) )
      v65 = v1539 - 1;
    v52 = v65 + 1;
    v66 = *(_DWORD *)(v16 + 2240) == 0;
    v7 = 1;
    v1539 = v52;
    if ( !v66 || *(_DWORD *)(v16 + 2032) >= *(_DWORD *)(v16 + 2036) )
    {
      LODWORD(v50) = v1539;
      goto LABEL_2474;
    }
    v51 = v1556;
    v53 = v1564;
    v54 = v1547;
  }
  ++*(_DWORD *)(v16 + 2040);
  LODWORD(v50) = 0;
  if ( *(_DWORD *)(v16 + 2336) != 11 || (v1477 = *(_DWORD *)(v16 + 2392), (v1477 & 1) != 0) )
  {
LABEL_2474:
    v12 = (__int64)v1543;
    v2 = a2;
    v13 = v1549;
  }
  else
  {
    v13 = v1549;
    v2 = a2;
    v12 = (__int64)v1543;
    if ( *(_DWORD *)(v16 + 2360) == -1 )
      *(_DWORD *)(v16 + 2360) = 0;
    else
      *(_DWORD *)(v16 + 2392) = v1477 | 1;
  }
LABEL_2475:
  *(_DWORD *)(v16 + 2024) = v50;
  if ( v1540 )
  {
    v1478 = *(_QWORD *)(*(_QWORD *)(v16 + 1656)
                      + *(_QWORD *)((char *)KeGetCurrentPrcb() + *(_QWORD *)(v16 + 1560))
                      + *(_QWORD *)(v16 + 1624));
    (*(void (__fastcall **)(_BYTE *))(v16 + 392))(v1706);
    (*(void (__fastcall **)(_BYTE *))(v16 + 1072))(v1721);
    (*(void (__fastcall **)(__int64))(v16 + 920))(v1478);
    (*(void (__fastcall **)(__int64))(v16 + 936))(v1478);
  }
  if ( v1555 && ((*(_DWORD *)(v16 + 2392) & 0x8000) != 0 || !*(_DWORD *)(v16 + 2240)) )
  {
    v1479 = *(_QWORD *)(v16 + 2376);
    *(_QWORD *)(v16 + 2376) = 0LL;
    (*(void (__fastcall **)(__int64, _BYTE *))(v16 + 648))(v1479, v1721);
    v1480 = *(_DWORD *)(v16 + 2392);
    if ( (v1480 & 1) != 0 )
    {
      *(_DWORD *)(v16 + 2392) = v1480 & 0xFFFFFFFE;
      v1479 = (*(__int64 (__fastcall **)(__int64))(v16 + 624))(v1479);
      if ( v1479 )
      {
        *(_DWORD *)(v16 + 2360) = (*(__int64 (__fastcall **)(__int64))(v16 + 656))(v1479);
        goto LABEL_2485;
      }
      *(_DWORD *)(v16 + 2360) = -1;
    }
    else if ( v1479 )
    {
LABEL_2485:
      (*(void (__fastcall **)(__int64))(v16 + 632))(v1479);
    }
  }
  if ( *(_DWORD *)(v13 + 2240) )
  {
    v1481 = *(_QWORD *)(v13 + 2264);
    v1482 = *(_QWORD *)(v13 + 2272);
    v1483 = *(_QWORD *)(v13 + 2256);
    v1484 = *(_QWORD *)(v13 + 2248);
    v1526 = v1482;
    v1536 = v1483;
    v1565 = v1484;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1485 = KeGetCurrentPrcb();
    v1486 = 0LL;
    v1487 = *(_QWORD *)((char *)v1485 + *(_QWORD *)(v13 + 1544));
    v1488 = *(_QWORD *)((char *)v1485 + *(_QWORD *)(v13 + 1560));
    if ( !*((_BYTE *)v1485 + *(_QWORD *)(v13 + 1552))
      || (unsigned __int64)&v1596 > v1487
      || (unsigned __int64)&v1596 < v1487 - 24576 )
    {
      v1487 = *(_QWORD *)(v1488 + *(_QWORD *)(v13 + 1608));
    }
    if ( (*(_DWORD *)(v13 + 2392) & 0x8000000) == 0 )
    {
      v1489 = __readcr0();
      __writecr0(v1489 & 0xFFFFFFFFFFFEFFFFuLL);
      v1490 = v1543;
      v1491 = 0;
      v1492 = v1543 + 169;
      v1493 = (unsigned __int64)&v1543[*((unsigned int *)&v1543[168].Next + 2) + 169];
      v1494 = (_QWORD *)v1493;
      if ( *((_DWORD *)&v1543[168].Next + 3) )
      {
        do
        {
          *(_QWORD *)*v1494 = v1494[1];
          v1495 = __readcr4();
          if ( (v1495 & 0x20080) != 0 )
          {
            __writecr4(v1495 ^ 0x80);
            __writecr4(v1495);
          }
          else
          {
            v1496 = __readcr3();
            __writecr3(v1496);
          }
          v1494 += 2;
          ++v1491;
        }
        while ( v1491 < *((_DWORD *)&v1490[168].Next + 3) );
        LODWORD(v1482) = v1526;
      }
      if ( (unsigned __int64)v1492 < v1493 )
      {
        do
        {
          v1497 = *((unsigned int *)&v1492->Next + 2);
          v1498 = v1494;
          Next = (char *)v1492->Next;
          v1500 = v1497;
          if ( (unsigned int)v1497 >= 8 )
          {
            v1486 = (unsigned __int64)(unsigned int)v1497 >> 3;
            do
            {
              v1500 -= 8;
              *(_QWORD *)Next = *v1498++;
              Next += 8;
              --v1486;
            }
            while ( v1486 );
          }
          if ( v1500 )
          {
            v1501 = Next - (char *)v1498;
            do
            {
              *((_BYTE *)v1498 + v1501) = *(_BYTE *)v1498;
              v1498 = (_QWORD *)((char *)v1498 + 1);
              --v1500;
            }
            while ( v1500 );
          }
          v1494 = (_QWORD *)((char *)v1494 + v1497);
          ++v1492;
        }
        while ( (unsigned __int64)v1492 < v1493 );
        LODWORD(v1482) = v1526;
        LODWORD(v1483) = v1536;
        v1490 = v1543;
      }
      **((_BYTE **)&v1490[34].Next + 1) = -61;
      __writecr0(v1489);
      LODWORD(v1484) = v1565;
      v13 = v1549;
    }
    v1509 = *(_DWORD *)(v13 + 2288);
    if ( v1509 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v1509 = *(_DWORD *)(v13 + 2288);
      }
      if ( v1509 )
      {
        v1510 = v1509 - 1;
        if ( v1510 )
        {
          v1511 = v1510 - 1;
          if ( v1511 )
          {
            v1512 = v1511 - 1;
            if ( v1512 )
            {
              v1513 = v1512 - 1;
              if ( v1513 )
              {
                if ( v1513 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)KeGetCurrentPrcb() + *(_QWORD *)(v13 + 1560)),
                    (*(_DWORD *)(v13 + 2392) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v13 + 1424) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*(_QWORD *)(v13 + 1656)
                                              + *(_QWORD *)((char *)KeGetCurrentPrcb() + *(_QWORD *)(v13 + 1560))
                                              + *(_QWORD *)(v13 + 1624)),
                  (*(_DWORD *)(v13 + 2392) >> 10) & 0x1F);
              }
              goto LABEL_2549;
            }
            v1514 = *(volatile signed __int32 **)(v13 + 1336);
          }
          else
          {
            v1514 = *(volatile signed __int32 **)(v13 + 1328);
          }
        }
        else
        {
          v1514 = *(volatile signed __int32 **)(v13 + 1312);
        }
        _interlockedbittestandset64(v1514, 0LL);
      }
    }
LABEL_2549:
    *(_QWORD *)(v1488 + *(_QWORD *)(v13 + 1632)) = v1486;
    *(_QWORD *)(v1488 + *(_QWORD *)(v13 + 1648)) = v1486;
    sub_140AD23C0(*(_QWORD *)(v13 + 328));
    sub_140AD2100(265, v1484, v1483, v1482, v1481, *(_QWORD *)(v13 + 328), v1487);
    __debugbreak();
  }
  if ( *(_DWORD *)(v13 + 2028) || *(_DWORD *)(v13 + 2024) )
  {
    v1502 = -1073741802;
    *(_DWORD *)v2 = *(_DWORD *)(v13 + 2024);
    *(_DWORD *)(v2 + 4) = *(_DWORD *)(v13 + 2028);
  }
  else
  {
    v1502 = *(_QWORD *)(v2 + 8) == 0LL ? 0xC0000225 : 0;
  }
  if ( v1565 == 2744 )
    sub_140203D88((__int64)&stru_140C0DC00, (_SLIST_ENTRY *)v12, v17);
  else
    ExFreePoolWithTag((PVOID)v12, v48);
  return v1502;
}
